#include "ventanaeditarpreguntas.h"
#include "./ui_ventanaeditarpreguntas.h"
//#include "menumain.h"
#include <iostream>
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QtWidgets/QFileDialog>
#include <QPixmap>
#include <QDir>
#include <QMessageBox>
#include <QListWidget>

VentanaEditarPreguntas::VentanaEditarPreguntas(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::VentanaEditarPreguntas)
    , preguntas()
{
    setAttribute(Qt::WA_DeleteOnClose, true);
    ui->setupUi(this);
    connect(ui->listWidget_listaPreguntas, &QListWidget::currentItemChanged,
            this, &VentanaEditarPreguntas::elementoSeleccionadoPregunta);
}

VentanaEditarPreguntas::~VentanaEditarPreguntas()
{
    delete ui;
}

void VentanaEditarPreguntas::showEvent(QShowEvent *event)
{
    qDebug() << "Se ejecuta el showEvent de la ventana editar preguntas...";
    ui->listWidget_listaPreguntas->clearSelection();
    if (ui->pushButton_editarPreguntaSeleccionada != nullptr) {
        ui->pushButton_editarPreguntaSeleccionada->setFocus();
    }
    QWidget::showEvent(event);
}

void VentanaEditarPreguntas:: cargarListaPreguntas()
{
    QFile archivo("preguntas.json");

    if (!archivo.open(QIODevice::ReadOnly)) {
        std::cerr << "No se pudo abrir el archivo preguntas.json para lectura o este archivo aun no existe." << std::endl;
        return;
    }

    QByteArray data = archivo.readAll();
    archivo.close();

    QJsonDocument docJson = QJsonDocument::fromJson(data);

    if (docJson.isNull()) {
        qDebug() << "Error al leer el archivo preguntas.json";
        return;
    }

    if (!docJson.isArray()) {
        qDebug() << "No existen preguntas en el archivo preguntas.json";
        return;
    }

    QJsonArray preguntasJson = docJson.array();

    for (const auto& preguntaObjeto : preguntasJson) {
        if (preguntaObjeto.isObject()) {
            QJsonObject preguntaJson = preguntaObjeto.toObject();

            QString preguntaTexto = preguntaJson.value("pregunta").toString();
            QString categoria = preguntaJson.value("categoria").toString();
            QString id = preguntaJson.value("id").toString();

            QString itemTexto = QString("Pregunta: %1 \nCategoría: %2 \nid: %3").arg(preguntaTexto, categoria, id);

            QListWidgetItem *item = new QListWidgetItem(itemTexto);

            item->setData(Qt::UserRole, id);

            ui->listWidget_listaPreguntas->addItem(item);
        }
    }
}

void VentanaEditarPreguntas::elementoSeleccionadoPregunta(QListWidgetItem *elemActual, QListWidgetItem *elemAnterior)
{
    if (elemActual) {
        VentanaEditarPreguntas::idPreguntaSeleccionada = elemActual->data(Qt::UserRole).toString();
        ui->pushButton_editarPreguntaSeleccionada->setEnabled(true);
        ui->pushButton_borrarPreguntaSeleccionada->setEnabled(true);
    }else{
        idPreguntaSeleccionada.clear();
        preguntaSeleccionada = QJsonObject();
        ui->pushButton_editarPreguntaSeleccionada->setEnabled(false);
        ui->pushButton_borrarPreguntaSeleccionada->setEnabled(false);
    }

}

QJsonObject VentanaEditarPreguntas::obtenerElementoPregunta()
{
    if (idPreguntaSeleccionada.isEmpty()) {
        qDebug() << "No hay ID de pregunta seleccionada.";
        return QJsonObject();
    }

    QJsonArray preguntasJson = leerPreguntasJson();

    for (const auto& preguntaObjeto : preguntasJson) {
        if (preguntaObjeto.isObject()) {
            QJsonObject pregunta = preguntaObjeto.toObject();
            if (pregunta.value("id").toString() == idPreguntaSeleccionada) {
                return pregunta;
            }
        }
    }

    qDebug() << "No se encontró la pregunta con el ID: " << idPreguntaSeleccionada;
    return QJsonObject();
}
//ESTA PARTE SE VA A CAMBIAR
/*

void VentanaEditarPreguntas::on_pushButton_editarPreguntaSeleccionada_clicked()
{
    QJsonObject preguntaParaEditar = obtenerElementoPregunta();
    VentanaEditarPreguntas *ventanaCrearPreguntas_ = menuMain::getVentanaCrearPreguntas();

    if (!preguntaParaEditar.isEmpty()) {
        if (!ventanaCrearPreguntas_) {
            ventanaCrearPreguntas_ = new VentanaCrearPreguntas(this);
        }
        ventanaCrearPreguntas_->cargarDatosParaEdicion(preguntaParaEditar);
        ventanaCrearPreguntas_->show();
        this->hide();
    } else {
        QMessageBox::warning(this, "Editar Pregunta", "No se pudieron obtener los detalles de la pregunta seleccionada.");
    }
}
*/
