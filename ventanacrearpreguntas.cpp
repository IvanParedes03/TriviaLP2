#include "ventanacrearpreguntas.h"
#include "./ui_ventanacrearpreguntas.h"
#include "preguntas.h"
#include "ventanalistarpreguntas.h"
#include "ventanalistarcategorias.h"
#include "lectorjson.h"
#include <QtWidgets/QFileDialog>
#include <QPixmap>
#include <QImage>
#include <QDir>
#include <QByteArray>
#include <QMessageBox>
#include <QDebug>
#include <QBuffer>
#include <QRegularExpressionValidator>

VentanaCrearPreguntas::VentanaCrearPreguntas(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VentanaCrearPreguntas)
    , preguntas()
{
    setAttribute(Qt::WA_DeleteOnClose, true);
    ui->setupUi(this);

}

VentanaCrearPreguntas::~VentanaCrearPreguntas()
{
    delete ui;
}

void VentanaCrearPreguntas::on_pushButton_buscarImagen_clicked()
{
    QString archivoOrigen = QFileDialog::getOpenFileName(
        this,
        tr("Seleccionar Imagen"),
        QDir::homePath(),
        tr("Imágenes (*.png *.jpg *.jpeg *.bmp *.gif)")
        );

    if (!archivoOrigen.isEmpty()) {
        QPixmap imagen(archivoOrigen);
        if (!imagen.isNull()) {
            QImage imagenAux = imagen.toImage();
            QByteArray imagenArray;
            QBuffer buffer(&imagenArray);
            buffer.open(QIODevice::WriteOnly);
            imagenAux.save(&buffer, "PNG");
            QByteArray imagenBase64 = imagenArray.toBase64();

            QString nombreArchivoBase64 = QUuid::createUuid().toString(QUuid::WithoutBraces) + ".txt";
            QString rutaCarpetaBase64 = "base64_images/";
            QDir carpetaBase64(rutaCarpetaBase64);
            if (!carpetaBase64.exists()) {
                carpetaBase64.mkpath(".");
            }
            QString rutaArchivoBase64 = carpetaBase64.absolutePath() + "/" + nombreArchivoBase64;

            QFile archivoBase64(rutaArchivoBase64);
            if (archivoBase64.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream stream(&archivoBase64);
                stream << imagenBase64;
                archivoBase64.close();

                ui->label_imagen->setProperty("imagenBase64Archivo", nombreArchivoBase64);
                ui->label_imagen->setPixmap(imagen.scaled(ui->label_imagen->size(), Qt::KeepAspectRatio));
                ui->label_imagen->setAlignment(Qt::AlignCenter);
            } else {
                QMessageBox::warning(this, tr("Error"), tr("No se pudo guardar la imagen Base64 en el archivo."));
                ui->label_imagen->clear();
                ui->label_imagen->setProperty("imagenBase64Archivo", QString());
            }
        } else {
            QMessageBox::warning(this, tr("Error"), tr("No se pudo cargar la imagen."));
            ui->label_imagen->clear();
            ui->label_imagen->setProperty("imagenBase64Archivo", QString());
        }
    } else {
        ui->label_imagen->clear();
        ui->label_imagen->setProperty("imagenBase64Archivo", QString());
    }
}

void VentanaCrearPreguntas::on_pushButton_crearPregunta_clicked()
{
    QString text_pregunta = ui->lineEdit_pregunta->text();
    QString text_opcionA = ui->lineEdit_opcionA->text();
    QString text_opcionB = ui->lineEdit_opcionB->text();
    QString text_opcionC = ui->lineEdit_opcionC->text();
    QString text_respuestaCorrecta = ui->lineEdit_respuestaCorrecta->text().toLower();
    QString text_categoria = ui->lineEdit_categoria->text();
    QString nombreArchivoImagenBase64 = ui->label_imagen->property("imagenBase64Archivo").toString();

    QRegularExpression regexValidacion("^[a-zA-Z0-9 ]+$");

    if (text_pregunta.isEmpty() || text_opcionA.isEmpty() || text_opcionB.isEmpty()
        || text_opcionC.isEmpty() || text_respuestaCorrecta.isEmpty() || text_categoria.isEmpty()) {
        QMessageBox::warning(this, tr("ADVERTENCIA"), tr("Debe rellenar todos los campos"));
        return;
    } else if (!regexValidacion.match(text_pregunta).hasMatch() ||
               !regexValidacion.match(text_opcionA).hasMatch() ||
               !regexValidacion.match(text_opcionB).hasMatch() ||
               !regexValidacion.match(text_opcionC).hasMatch() ||
               !regexValidacion.match(text_categoria).hasMatch()) {
        QMessageBox::warning(this, tr("ADVERTENCIA"), tr("Los campos de pregunta, opciones y categoría solo pueden contener letras, números y espacios."));
        return;
    } else if (text_respuestaCorrecta != "a" && text_respuestaCorrecta != "b" && text_respuestaCorrecta != "c") {
        QMessageBox::warning(this, tr("ADVERTENCIA"), tr("Debe ingresar la letra de la opcion correcta (A, B o C)"));
        return;
    }

    QJsonObject nuevaPregunta;
    nuevaPregunta["pregunta"] = text_pregunta.toLower();
    nuevaPregunta["opcionA"] = text_opcionA.toLower();
    nuevaPregunta["opcionB"] = text_opcionB.toLower();
    nuevaPregunta["opcionC"] = text_opcionC.toLower();
    nuevaPregunta["opcionCorrecta"] = text_respuestaCorrecta;
    nuevaPregunta["categoria"] = text_categoria.toLower();
    nuevaPregunta["id"] = QUuid::createUuid().toString(QUuid::WithoutBraces);
    nuevaPregunta["imagenBase64File"] = nombreArchivoImagenBase64;

    LectorJson lectorJsonPreguntas("preguntas.json");

    if (lectorJsonPreguntas.guardarNuevaPreguntaJson(nuevaPregunta)) {
        QMessageBox::information(this, tr("ÉXITO"), tr("Pregunta creada y guardada."));

        ui->lineEdit_pregunta->clear();
        ui->lineEdit_opcionA->clear();
        ui->lineEdit_opcionB->clear();
        ui->lineEdit_opcionC->clear();
        ui->lineEdit_respuestaCorrecta->clear();
        ui->lineEdit_categoria->clear();
        ui->label_imagen->clear();
        ui->label_imagen->setProperty("imagenBase64Archivo", QString());
    } else {
        QMessageBox::critical(this, tr("ERROR"), tr("No se pudo guardar la pregunta."));
    }
}

void VentanaCrearPreguntas::on_pushButton_listarPreguntas_clicked()
{
    VentanaListarPreguntas *ventanaListarPreguntas = new VentanaListarPreguntas();

    if (!ventanaListarPreguntas) {
        ventanaListarPreguntas = new VentanaListarPreguntas(this);
    }

    QObject::connect(ventanaListarPreguntas, &VentanaListarPreguntas::destroyed, this, [this](){
        this->show();
    });

    if(ventanaListarPreguntas->cargarListaPreguntas()){

        ventanaListarPreguntas->show();
        this->hide();

    } else{

        QMessageBox::warning(this, tr("Listar Preguntas"), tr("No se ha creado ninguna pregunta."));

    }

}

void VentanaCrearPreguntas::on_pushButton_listarCategorias_clicked()
{
    VentanaListarCategorias *ventanaListarCategorias = new VentanaListarCategorias();

    if(!ventanaListarCategorias){

        ventanaListarCategorias = new VentanaListarCategorias(this);

    }

    connect(ventanaListarCategorias, &VentanaListarCategorias::destroyed, this, [this](){
        this->show();
    });

    if (ventanaListarCategorias->cargarListaCategorias()) {

        ventanaListarCategorias->show();
        this->hide();

    } else{

        QMessageBox::warning(this, tr("Listar Categorias"), tr("No existe ninguna categoria."));
        return;

    }

}


