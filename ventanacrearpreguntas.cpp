#include "ventanacrearpreguntas.h"
#include "./ui_ventanacrearpreguntas.h"
#include "preguntas.h"
#include "ventanalistarpreguntas.h"
#include "ventanalistarcategorias.h"
#include <QtWidgets/QFileDialog>
#include <QPixmap>
#include <QImage>
#include <QDir>
#include <QByteArray>
#include <QMessageBox>
#include <QDebug>
#include <QBuffer>

VentanaCrearPreguntas::VentanaCrearPreguntas(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VentanaCrearPreguntas)
    , preguntas()
{
    setAttribute(Qt::WA_DeleteOnClose, true); //agregue esto para que al cerrar la ventana vuelva al menu
    ui->setupUi(this);

}

VentanaCrearPreguntas::~VentanaCrearPreguntas()
{
    delete ui;
}

void VentanaCrearPreguntas::on_pushButton_buscarImagen_clicked()
{
    QString archivo = QFileDialog::getOpenFileName(
        this,
        tr("Seleccionar Imagen"),
        QDir::homePath(),
        tr("Imágenes (*.png *.jpg *.jpeg *.bmp *.gif)")
        );

    if (!archivo.isEmpty()) {

        QPixmap imagen(archivo);

        if (!imagen.isNull()) {

            QImage imagenAux = imagen.toImage();
            QByteArray imagenArray;
            QBuffer buffer(&imagenArray);
            buffer.open(QIODevice::WriteOnly);
            imagenAux.save(&buffer, "PNG");

            QByteArray imagenBase64 = imagenArray.toBase64();

            QString nombreArchivo = QUuid::createUuid().toString(QUuid::WithoutBraces) + ".txt";
            QString rutaCarpetaBase64 = "imagenes_base64/";
            QDir CarpetaBase64(rutaCarpetaBase64);

            if(!CarpetaBase64.exists()){
                CarpetaBase64.mkpath(".");
            }

            QString rutaArchivoBase64 = rutaCarpetaBase64 + nombreArchivo;

            QFile ArchivoBase64(rutaArchivoBase64);

            if (ArchivoBase64.open(QIODevice::WriteOnly | QIODevice::Text)) {

                QTextStream stream(&ArchivoBase64);

                stream << imagenBase64.toBase64();
                ArchivoBase64.close();

                ui->label_imagen->setProperty("imagenBase64Archivo", nombreArchivo);
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

        }
    } else {

        ui->label_imagen->clear();
        ui->label_imagen->setProperty("imagenBase64Archivo", QString());
    }
}

void VentanaCrearPreguntas::on_pushButton_crearPregunta_clicked()
{

    QString text_pregunta = ui->lineEdit_pregunta->text().toLower();
    QString text_opcionA = ui->lineEdit_opcionA->text().toLower();
    QString text_opcionB = ui->lineEdit_opcionB->text().toLower();
    QString text_opcionC = ui->lineEdit_opcionC->text().toLower();
    QString text_respuestaCorrecta = ui->lineEdit_respuestaCorrecta->text().toLower();
    QString text_categoria = ui->lineEdit_categoria->text().toLower();
    QString imagen_base64 = ui->label_imagen->property("imagenBase64Archivo").toString();

    if(text_pregunta.isEmpty() || text_opcionA.isEmpty() || text_opcionB.isEmpty()
        || text_opcionC.isEmpty() || text_respuestaCorrecta.isEmpty() || text_categoria.isEmpty() ){

        QMessageBox::warning(this, tr("ADVERTENCIA"), tr("Debe rellenar todos los campos"));
        return;

    } else if(text_respuestaCorrecta != "a" && text_respuestaCorrecta != "b" && text_respuestaCorrecta != "c"){

        QMessageBox::warning(this, tr("ADVERTENCIA"), tr("Debe ingresar la letra de la opcion correcta (A, B o C)"));
        return;
    }

    preguntas preguntaNueva(text_pregunta, text_opcionA, text_opcionB, text_opcionC, text_respuestaCorrecta, text_categoria, QUuid::createUuid().toString(QUuid::WithoutBraces), imagen_base64);

    static std::vector<preguntas> listaDePreguntas;

    QFile archivo("preguntas.json");
    if (archivo.exists() && archivo.size() > 0) {
        preguntas::cargarJSON(listaDePreguntas);
    }

    listaDePreguntas.push_back(preguntaNueva);

    preguntas::guardarJSON(listaDePreguntas);

    QMessageBox::information(this, tr("ÉXITO"), tr("Pregunta creada y guardada."));

    ui->lineEdit_pregunta->clear();
    ui->lineEdit_opcionA->clear();
    ui->lineEdit_opcionB->clear();
    ui->lineEdit_opcionC->clear();
    ui->lineEdit_respuestaCorrecta->clear();
    ui->lineEdit_categoria->clear();
    ui->label_imagen->clear();
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


