#include "ventanajuego.h"
#include "ui_ventanajuego.h"
#include <random>
#include <QMessageBox>
#include "classusuario.h"
#include <vector>
#include <iostream>
#include <QFile>
#include <QPixmap> // Asegúrate de incluir QPixmap

VentanaJuego::VentanaJuego(QWidget *parent,
                           std::vector<QJsonObject> &preguntas,
                           Usuario &jugador1,
                           Usuario &jugador2,
                           std::vector<Usuario> &usuarios)
    : QDialog(parent),
    ui(new Ui::VentanaJuego),
    preguntas(preguntas),
    jugador1(jugador1),
    jugador2(jugador2)
{
    setAttribute(Qt::WA_DeleteOnClose, true);
    ui->setupUi(this);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist0_preguntasSize(0, preguntas.size() - 1);
    std::uniform_int_distribution<> dist1_2(1, 2);

    int jugador = dist1_2(gen);
    preguntaActual = dist0_preguntasSize(gen);

    if (jugador2.getAlias() != ""){
        ui->turno->setText(QString::fromStdString(jugador == 1 ? jugador1.getAlias() : jugador2.getAlias()));
    }
    else{
        ui->turno->setText(QString::fromStdString(jugador1.getAlias()));
    }
    ui->aliasP1->setText(QString::fromStdString(jugador1.getAlias()));
    ui->puntajeP1->setText((QString::number(jugador1.getPuntuacionJuego())));

    if (jugador2.getAlias() != "") ui->aliasP2->setText(QString::fromStdString(jugador2.getAlias())),
            ui->puntajeP2->setText(QString::number(jugador2.getPuntuacionJuego()));

    ui->labelCategoria->setText(preguntas[0]["categoria"].toString());
    ui->labelPregunta->setText(preguntas[preguntaActual]["pregunta"].toString());

    QString base64FileName = preguntas[preguntaActual]["imagenBase64File"].toString();
    QString base64FilePath = "base64_images/" + base64FileName;

    qDebug() << "Ruta base64:" << base64FilePath;

    QFile file(base64FilePath);
    if (!file.exists()) {
        qDebug() << "Archivo no existe!";
        ui->label_imagen->clear(); // Limpiar el QLabel si no hay imagen
        ui->label_imagen->setText("Imagen no encontrada."); // Mostrar un mensaje
    } else if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QByteArray base64Data = file.readAll();
        QByteArray imageData = QByteArray::fromBase64(base64Data);

        QPixmap pixmap;
        if (pixmap.loadFromData(imageData)) {
            // Escalar la imagen después de cargarla, manteniendo la relación de aspecto
            ui->label_imagen->setPixmap(pixmap.scaled(ui->label_imagen->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
            qDebug() << "Imagen cargada y escalada correctamente.";
        } else {
            qDebug() << "No se pudo cargar imagen desde datos base64.";
            ui->label_imagen->clear(); // Limpiar el QLabel si la carga falla
            ui->label_imagen->setText("Error al cargar la imagen."); // Mostrar un mensaje
        }
        file.close();
    } else {
        qDebug() << "No se pudo abrir el archivo base64.";
        ui->label_imagen->clear(); // Limpiar el QLabel si no se puede abrir el archivo
        ui->label_imagen->setText("Error al abrir el archivo de imagen."); // Mostrar un mensaje
    }

    ui->opcionA->setText(preguntas[preguntaActual]["opcionA"].toString());
    ui->opcionB->setText(preguntas[preguntaActual]["opcionB"].toString());
    ui->opcionC->setText(preguntas[preguntaActual]["opcionC"].toString());

    ui->nroPregunta->setText("1/" + QString::number(preguntas.size()));

    preguntas.erase(preguntas.begin() + preguntaActual);

    connect(ui->opcionA, &QPushButton::clicked, this, &VentanaJuego::botonIntento);
    connect(ui->opcionB, &QPushButton::clicked, this, &VentanaJuego::botonIntento);
    connect(ui->opcionC, &QPushButton::clicked, this, &VentanaJuego::botonIntento);

    std::cout << jugador1.getPuntuacionHistorica() << std::endl;
}

VentanaJuego::~VentanaJuego()
{
    delete ui;
}

void VentanaJuego::refreshGame(std::vector<QJsonObject> &preguntas, Usuario &jugador1, Usuario &jugador2){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist0_preguntasSize(0, preguntas.size() - 1);

    ui->label_imagen->clear(); // Limpiar la imagen anterior

    preguntaActual = dist0_preguntasSize(gen);
    ui->labelPregunta->setText(preguntas[preguntaActual]["pregunta"].toString());
    ui->opcionA->setText(preguntas[preguntaActual]["opcionA"].toString());
    ui->opcionB->setText(preguntas[preguntaActual]["opcionB"].toString());
    ui->opcionC->setText(preguntas[preguntaActual]["opcionC"].toString());

    int nroActual = ui->nroPregunta->text()[0].digitValue();
    nroActual++;
    ui->nroPregunta->setText(QString::number(nroActual) + "/" + ui->nroPregunta->text()[2]);

    QString base64FileName = preguntas[preguntaActual].value("imagenBase64File").toString();
    QString base64FilePath = "base64_images/" + base64FileName;

    qDebug() << "Ruta base64:" << base64FilePath;

    QFile file(base64FilePath);

    if (!file.exists()) {
        qDebug() << "Archivo no existe!";
        ui->label_imagen->setText("Imagen no encontrada.");
    } else if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QByteArray base64Data = file.readAll();
        QByteArray imageData = QByteArray::fromBase64(base64Data);

        QPixmap pixmap;
        if (pixmap.loadFromData(imageData)) {
            // Escalar la imagen después de cargarla, manteniendo la relación de aspecto
            ui->label_imagen->setPixmap(pixmap.scaled(ui->label_imagen->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
            qDebug() << "Imagen cargada y escalada correctamente.";
        } else {
            qDebug() << "No se pudo cargar imagen desde datos base64.";
            ui->label_imagen->setText("Error al cargar la imagen.");
        }
        file.close();
    } else {
        qDebug() << "No se pudo abrir el archivo base64.";
        ui->label_imagen->setText("Error al abrir el archivo de imagen.");
    }

    if (jugador2.getAlias() != ""){
        ui->turno->setText(
            ui->turno->text().toStdString() == jugador1.getAlias()
                ? QString::fromStdString(jugador2.getAlias())
                : QString::fromStdString(jugador1.getAlias())
            );
    }
}

void VentanaJuego::botonIntento(){
    QPushButton *boton = qobject_cast<QPushButton*>(sender());

    if (!boton) return;
    bool correcto = false;
    if(boton == ui->opcionA && preguntas[preguntaActual]["opcionCorrecta"] == "a"){
        correcto = true;
    }
    else if(boton == ui->opcionB && preguntas[preguntaActual]["opcionCorrecta"] == "b"){
        correcto = true;
    }
    else if(boton == ui->opcionC && preguntas[preguntaActual]["opcionCorrecta"] == "c"){
        correcto = true;
    }

    preguntas.erase(preguntas.begin() + preguntaActual);

    if (correcto){
        if(ui->turno->text().toStdString() == jugador1.getAlias()){
            jugador1.incrPuntuacionJuego();
            ui->puntajeP1->setText(QString::number(jugador1.getPuntuacionJuego()));
        }
        else{
            jugador2.incrPuntuacionJuego();
            ui->puntajeP2->setText(QString::number(jugador2.getPuntuacionJuego()));
        }
    }

    if (preguntas.empty()){
        QMessageBox::information(this, "Juego terminado", "Termino el juego");
        this->close();

        jugador1.setPuntuacionHistorica(jugador1.getPuntuacionHistorica() + jugador1.getPuntuacionJuego());
        if(jugador2.getAlias() != "") jugador2.setPuntuacionHistorica(jugador2.getPuntuacionHistorica() + jugador2.getPuntuacionJuego());

        Usuario::cargarJSON(usuarios);

        for(auto &i: usuarios){
            if(jugador1.getAlias() == i.getAlias()) i.setPuntuacionHistorica(jugador1.getPuntuacionHistorica());
            if(jugador2.getAlias() == i.getAlias() && jugador2.getAlias() != "") i.setPuntuacionHistorica(jugador2.getPuntuacionHistorica());
        }
        Usuario::guardarJSON(usuarios);
        return;
    }

    VentanaJuego::refreshGame(preguntas, jugador1, jugador2);
}
