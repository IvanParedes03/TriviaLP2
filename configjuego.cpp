#include "configjuego.h"
#include "ui_configjuego.h"
#include "lectorjson.h"
#include "classusuario.h"
#include <QJsonArray>
#include <QMessageBox>
#include <vector>
#include "ventanajuego.h"

#define MIN_PREGUNTAS 3

configJuego::configJuego(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::configJuego)
{
    setAttribute(Qt::WA_DeleteOnClose, true);
    ui->setupUi(this);
    LectorJson lector;
    Usuario::cargarJSON(usuarios);

    for (auto &elem: usuarios){
        ui->comboP1->addItem(QString::fromStdString(elem.getAlias()));

    }

    QJsonArray preguntasJson = lector.leerPreguntasJson();

    for (const auto& preguntaObjeto : preguntasJson) {
        if (preguntaObjeto.isObject()) {
            QJsonObject preguntaJson = preguntaObjeto.toObject();
            QString categoria = preguntaJson.value("categoria").toString();
            categorias.insert(categoria);
        }
    }

    for (auto &elem: categorias){
        ui->comboCat->addItem(elem);
    }

    connect(ui->multiCheck, &QCheckBox::stateChanged, this, &configJuego::setMultijugador);
    connect(ui->botonVolver, &QPushButton::clicked, this, &QDialog::close);
    connect(ui->botonJugar, &QPushButton::clicked, this, &configJuego::startGame);
}

configJuego::~configJuego()
{
    delete ui;
}

void configJuego::setMultijugador(){
    if (ui->multiCheck->isChecked()){
        for (auto &elem: usuarios){
            ui->comboP2->addItem(QString::fromStdString(elem.getAlias()));
        }
    }
    else{
        ui->comboP2->clear();
    }
}

void configJuego::startGame(){
    std::vector<QJsonObject> Preguntas;
    LectorJson lector;
    QJsonArray preguntas = lector.leerPreguntasJson();
    Usuario p1, p2;

    if (ui->multiCheck->isChecked() && ui->comboP1->currentText() == ui->comboP2->currentText()){
        QMessageBox::warning(this, "Error", "Seleccione usuarios distintos para juego multijugador");
        return;
    }

    for (const auto& preguntaObjeto : preguntas) {
        if (preguntaObjeto.isObject()) {
            QJsonObject preguntaJson = preguntaObjeto.toObject();
            if(preguntaJson.value("categoria").toString() == ui->comboCat->currentText()){
                Preguntas.push_back(preguntaJson);
            }

        }
    }

    if (Preguntas.size() < MIN_PREGUNTAS || ui->multiCheck->isChecked() && Preguntas.size() < MIN_PREGUNTAS * 2){
        QMessageBox::warning(this, "Error", "Esta categoria no contiene las preguntas suficientes para iniciar el juego");
        return;
    }

    for (auto &i: usuarios){
        if (i.getAlias() == ui->comboP1->currentText()){
            p1 = Usuario(i.getNombre(), i.getAlias(), i.getPuntuacionHistorica());
        }

        if(ui->multiCheck->isChecked() && ui->comboP2->currentText() == i.getAlias()){
            p2  = Usuario(i.getNombre(), i.getAlias(),i.getPuntuacionHistorica());
        }
    }
    std::vector<Usuario> usuarios;
    VentanaJuego *juego = new VentanaJuego(this, Preguntas, p1, p2, usuarios);

    connect(juego, &VentanaJuego::destroyed, this, [this](){
        this->show();
    }); // comentado por si acaso, tiene problemas el salir del juego y volver, pendiente

    juego->show();
    this->hide();
}
