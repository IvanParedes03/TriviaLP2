#include "ventanalistarpreguntas.h"
#include "./ui_ventanalistarpreguntas.h"
#include "ventanaeditarpreguntas.h"
#include "preguntas.h"
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QtWidgets/QFileDialog>
#include <QPixmap>
#include <QDir>
#include <QMessageBox>
#include <QListWidget>

VentanaListarPreguntas::VentanaListarPreguntas(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::VentanaListarPreguntas)
    , preguntas()
{
    setAttribute(Qt::WA_DeleteOnClose, true);
    ui->setupUi(this);
    connect(ui->listWidget_listaPreguntas, &QListWidget::currentItemChanged,
            this, &VentanaListarPreguntas::elementoSeleccionadoPregunta);
}

VentanaListarPreguntas::~VentanaListarPreguntas()
{
    delete ui;
}

void VentanaListarPreguntas::showEvent(QShowEvent *event)
{
    qDebug() << "Se ejecuta el showEvent de la ventana editar preguntas...";
    ui->listWidget_listaPreguntas->clearSelection();
    if (ui->pushButton_editarPreguntaSeleccionada != nullptr) {
        ui->pushButton_editarPreguntaSeleccionada->setFocus();
    }
    QWidget::showEvent(event);
}

bool VentanaListarPreguntas:: cargarListaPreguntas()
{

    QJsonArray preguntasJson = preguntas::leerPreguntasJson();

    if (preguntasJson.isEmpty()) {
        return false;
    }


    for (const auto& preguntaObjeto : preguntasJson) {
        if (preguntaObjeto.isObject()) {

            QJsonObject preguntaJson = preguntaObjeto.toObject();

            QString preguntaTexto = preguntaJson.value("pregunta").toString();
            QString categoria = preguntaJson.value("categoria").toString();
            QString id = preguntaJson.value("id").toString();

            QString itemTexto = QString("Pregunta: %1 \nCategoría: %2 \nID: %3").arg(preguntaTexto, categoria, id);

            QListWidgetItem *item = new QListWidgetItem(itemTexto);

            item->setData(Qt::UserRole, id);

            ui->listWidget_listaPreguntas->addItem(item);
        }
    }

    return true;

}

void VentanaListarPreguntas::elementoSeleccionadoPregunta(QListWidgetItem *elemActual, QListWidgetItem *elemAnterior)
{
    if (elemActual) {
        VentanaListarPreguntas::idPreguntaSeleccionada = elemActual->data(Qt::UserRole).toString();
        ui->pushButton_editarPreguntaSeleccionada->setEnabled(true);
        ui->pushButton_borrarPreguntaSeleccionada->setEnabled(true);
    }else{
        idPreguntaSeleccionada.clear();
        preguntaSeleccionada = QJsonObject();
        ui->pushButton_editarPreguntaSeleccionada->setEnabled(false);
        ui->pushButton_borrarPreguntaSeleccionada->setEnabled(false);
    }

}

QJsonObject VentanaListarPreguntas::obtenerElementoPregunta()
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


void VentanaListarPreguntas::on_pushButton_editarPreguntaSeleccionada_clicked()
{
    QJsonObject preguntaParaEditar = obtenerElementoPregunta();

    if (!preguntaParaEditar.isEmpty()) {

        VentanaEditarPreguntas *ventanaEditarPreguntas = new VentanaEditarPreguntas(preguntaParaEditar, this);
        connect(ventanaEditarPreguntas, &VentanaEditarPreguntas::preguntaEditadaGuardada, this, &VentanaListarPreguntas::cargarListaPreguntas);
        ventanaEditarPreguntas->show();
        this->hide(); // Considera si realmente quieres ocultar esta ventana

    } else {

        QMessageBox::warning(this, "Editar Pregunta", "No se ha seleccionado ninguna pregunta.");

    }
}


void VentanaListarPreguntas::on_pushButton_borrarPreguntaSeleccionada_clicked()
{

    if (!idPreguntaSeleccionada.isEmpty()) {

        borrarPreguntaJson(idPreguntaSeleccionada);
        ui->listWidget_listaPreguntas->clear();

    } else{

        QMessageBox::warning(this, "Borrar Pregunta", "No se ha seleccionado ninguna pregunta.");

    }
}

