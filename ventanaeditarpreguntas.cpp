#include "ventanaeditarpreguntas.h"
#include "ui_ventanaeditarpreguntas.h"
#include <QFile>
#include <QFileDialog>
#include <QBuffer>
#include <QMessageBox>

VentanaEditarPreguntas::VentanaEditarPreguntas(const QJsonObject &preguntaAEditar, QWidget *parent)
    : QDialog(parent)
    , preguntaEditando(preguntaAEditar)
    , ui(new Ui::VentanaEditarPreguntas)
{
    setAttribute(Qt::WA_DeleteOnClose, true);
    ui->setupUi(this);

    cargarDatosParaEdicion(preguntaAEditar);
    idPreguntaEditable = preguntaAEditar.value("id").toString();
}

VentanaEditarPreguntas::~VentanaEditarPreguntas()
{
    delete ui;
}

void VentanaEditarPreguntas::cargarDatosParaEdicion(const QJsonObject &pregunta)
{

    ui->lineEdit_preguntaEditar->setText(pregunta.value("pregunta").toString());
    ui->lineEdit_opcionAEditar->setText(pregunta.value("opcionA").toString());
    ui->lineEdit_opcionBEditar->setText(pregunta.value("opcionB").toString());
    ui->lineEdit_opcionCEditar->setText(pregunta.value("opcionC").toString());
    ui->lineEdit_opcionCorrectaEditar->setText(pregunta.value("opcionCorrecta").toString());
    ui->lineEdit_categoriaEditar->setText(pregunta.value("categoria").toString());

    if (pregunta.contains("imagenBase64File")) {

        QString nombreArchivoBase64 = pregunta.value("imagenBase64File").toString();

        if (!nombreArchivoBase64.isEmpty()) {

            QString rutaCarpetaBase64 = "imagenes_base64/";
            QString rutaArchivoCompleta = rutaCarpetaBase64 + nombreArchivoBase64;
            QFile archivoBase64(rutaArchivoCompleta);

            if (archivoBase64.open(QIODevice::ReadOnly | QIODevice::Text)) {

                QTextStream stream(&archivoBase64);
                QByteArray base64Data = QByteArray::fromBase64(stream.readAll().toUtf8());
                QImage imagen;

                if (imagen.loadFromData(base64Data)) {

                    ui->label_imagenEditar->setPixmap(QPixmap::fromImage(imagen).scaled(ui->label_imagenEditar->size(), Qt::KeepAspectRatio));
                    ui->label_imagenEditar->setAlignment(Qt::AlignCenter);

                } else {

                    qDebug() << "Error al cargar la imagen desde Base64 en edición.";
                    ui->label_imagenEditar->clear();

                }

                archivoBase64.close();

            } else {

                qDebug() << "Error al abrir el archivo Base64 para edición:" << rutaArchivoCompleta;
                ui->label_imagenEditar->clear();

            }
        } else {

            ui->label_imagenEditar->clear();

        }
    } else {

        ui->label_imagenEditar->clear();

    }

}

void VentanaEditarPreguntas::on_pushButton_editarPregunta_clicked()
{
    QJsonObject preguntaEditada;

    preguntaEditada["id"] = idPreguntaEditable;
    preguntaEditada["pregunta"] = ui->lineEdit_preguntaEditar->text();
    preguntaEditada["opcionA"] = ui->lineEdit_opcionAEditar->text();
    preguntaEditada["opcionB"] = ui->lineEdit_opcionBEditar->text();
    preguntaEditada["opcionC"] = ui->lineEdit_opcionCEditar->text();
    preguntaEditada["opcionCorrecta"] = ui->lineEdit_opcionCorrectaEditar->text();
    preguntaEditada["categoria"] = ui->lineEdit_categoriaEditar->text();

    if (ui->label_imagenEditar->property("imagenBase64File").isValid()) {

        preguntaEditada["imagenBase64File"] = ui->label_imagenEditar->property("imagenBase64File").toString();

    } else {

        QJsonObject preguntaOriginal = preguntaEditando;
        if (preguntaOriginal.contains("imagenBase64File")) {
            preguntaEditada["imagenBase64File"] = preguntaOriginal.value("imagenBase64File").toString();
        }
    }

    if (lectorJSON.actualizarPreguntaJson(preguntaEditada)) {

        QMessageBox::information(this, tr("Éxito"), tr("Pregunta editada correctamente."));
        emit preguntaEditadaGuardada();
        this->close();

    } else {

        QMessageBox::critical(this, tr("Error"), tr("No se pudo guardar la pregunta editada."));

    }
}

void VentanaEditarPreguntas::on_pushButton_buscarImagenEditar_clicked()
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
            QImage imagenConvertida = imagen.toImage();
            QByteArray byteArray;
            QBuffer buffer(&byteArray);
            buffer.open(QIODevice::WriteOnly);
            imagenConvertida.save(&buffer, "PNG");
            QByteArray base64Imagen = byteArray.toBase64();

            QString nuevoNombreArchivo = QUuid::createUuid().toString(QUuid::WithoutBraces) + ".txt";
            QString rutaCarpetaBase64 = "imagenes_base64/";
            QDir carpetaBase64(rutaCarpetaBase64);
            if (!carpetaBase64.exists()) {
                carpetaBase64.mkpath(".");
            }
            QString nuevaRutaArchivoBase64 = carpetaBase64.absolutePath() + "/" + nuevoNombreArchivo;

            if (ui->label_imagenEditar->property("imagenBase64File").isValid()) {
                QString nombreArchivoAnterior = ui->label_imagenEditar->property("imagenBase64File").toString();
                QString rutaArchivoAnterior = rutaCarpetaBase64 + nombreArchivoAnterior;
                QFile::remove(rutaArchivoAnterior);
                ui->label_imagenEditar->setProperty("imagenBase64File", QString());
            }

            QFile archivoBase64(nuevaRutaArchivoBase64);
            if (archivoBase64.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream stream(&archivoBase64);
                stream << base64Imagen.toBase64();
                archivoBase64.close();

                ui->label_imagenEditar->setProperty("imagenBase64File", nuevoNombreArchivo);
                ui->label_imagenEditar->setPixmap(imagen.scaled(ui->label_imagenEditar->size(), Qt::KeepAspectRatio));
                ui->label_imagenEditar->setAlignment(Qt::AlignCenter);
            } else {
                QMessageBox::warning(this, tr("Error"), tr("No se pudo guardar la imagen Base64 en el archivo."));
            }
        } else {
            QMessageBox::warning(this, tr("Error"), tr("No se pudo cargar la imagen."));
        }
    }
}
