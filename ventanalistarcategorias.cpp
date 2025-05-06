#include "ventanalistarcategorias.h"
#include "ui_ventanalistarcategorias.h"
#include <QFile>
#include <QDebug>
#include <QMessageBox>

VentanaListarCategorias::VentanaListarCategorias(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::VentanaListarCategorias)
    , preguntas()
{
    setAttribute(Qt::WA_DeleteOnClose, true);
    ui->setupUi(this);
    connect(ui->listWidget_listaCategorias, &QListWidget::currentItemChanged,
            this, &VentanaListarCategorias::elementoSeleccionadoCategoria);
}

VentanaListarCategorias::~VentanaListarCategorias()
{
    delete ui;
}

void VentanaListarCategorias::showEvent(QShowEvent *event)
{
    qDebug() << "Se ejecuta el showEvent de la ventana editar categorias...";
    ui->listWidget_listaCategorias->clearSelection();
    if (ui->pushButton_borrarCategoriaSeleccionada != nullptr) {
        ui->pushButton_borrarCategoriaSeleccionada->setFocus();
    }
    QWidget::showEvent(event);
}

bool VentanaListarCategorias::cargarListaCategorias()
{

    QJsonArray preguntasJson = leerPreguntasJson();

    if(preguntasJson.isEmpty()){
        return false;
    }

    QSet<QString> categoriasUnicas;

    for (const auto& preguntaObjeto : preguntasJson) {

        if (preguntaObjeto.isObject()) {
            QJsonObject preguntaJson = preguntaObjeto.toObject();
            QString categoria = preguntaJson.value("categoria").toString();
            categoriasUnicas.insert(categoria);
        }
    }

    for (const QString& categoria : categoriasUnicas) {
        QListWidgetItem *item = new QListWidgetItem(categoria);
        ui->listWidget_listaCategorias->addItem(item);
    }

    return true;

}

void VentanaListarCategorias::elementoSeleccionadoCategoria(QListWidgetItem *elemActual, QListWidgetItem *elemAnterior)
{
    if (elemActual) {
        VentanaListarCategorias::categoriaSeleccionada = elemActual;
        ui->pushButton_borrarCategoriaSeleccionada->setEnabled(true);
    }else{
        VentanaListarCategorias::categoriaSeleccionada = nullptr;
        ui->pushButton_borrarCategoriaSeleccionada->setEnabled(false);
    }
}

QString VentanaListarCategorias::obtenerElementoCategoria() const
{
    if(VentanaListarCategorias::categoriaSeleccionada){
        return VentanaListarCategorias::categoriaSeleccionada->text();
    }

    return QString();
}

void VentanaListarCategorias::on_pushButton_borrarCategoriaSeleccionada_clicked()
{
    QString categoriaABorrar = obtenerElementoCategoria();

    if (categoriaABorrar.isEmpty()) {
        QMessageBox::warning(this, tr("Borrar Categoría"), tr("Por favor, selecciona una categoría para borrar."));
        return;
    }

    QMessageBox::StandardButton respuesta = QMessageBox::question(this, tr("Borrar Categoría"),
                                                                  tr("¿Estás seguro de que deseas borrar la categoría '%1' y todas sus preguntas?").arg(categoriaABorrar),
                                                                  QMessageBox::Yes | QMessageBox::No);
    if (respuesta == QMessageBox::Yes) {
        QFile archivo("preguntas.json");
        if (!archivo.open(QIODevice::ReadWrite | QIODevice::Text)) {
            qDebug() << "Error al abrir el archivo preguntas.json para lectura y escritura.";
            QMessageBox::critical(this, tr("Error"), tr("No se pudo abrir el archivo de preguntas."));
            return;
        }
        QByteArray data = archivo.readAll();
        archivo.seek(0);
        archivo.resize(0);
        archivo.close();

        QJsonDocument doc = QJsonDocument::fromJson(data);
        if (!doc.isArray()) {
            qDebug() << "Error: El formato de preguntas.json no es un array.";
            QMessageBox::critical(this, tr("Error"), tr("Formato de archivo de preguntas incorrecto."));
            return;
        }

        QJsonArray preguntasArray = doc.array();
        QJsonArray nuevoArray;
        int preguntasBorradas = 0;

        for (const auto& preguntaObjeto : preguntasArray) {
            if (preguntaObjeto.isObject()) {
                QJsonObject preguntaJson = preguntaObjeto.toObject();
                QString categoria = preguntaJson.value("categoria").toString();
                if (categoria != categoriaABorrar) {
                    nuevoArray.append(preguntaJson);
                } else {
                    preguntasBorradas++;
                    QString nombreArchivoImagen = preguntaJson.value("imagenBase64File").toString();
                    if (!nombreArchivoImagen.isEmpty()) {
                        QString rutaCarpetaBase64 = "imagenes_base64/";
                        QString rutaArchivoImagen = rutaCarpetaBase64 + nombreArchivoImagen;
                        QFile::remove(rutaArchivoImagen);
                        qDebug() << "Archivo de imagen borrado al eliminar categoría:" << rutaArchivoImagen;
                    }
                }
            }
        }

        QJsonDocument updatedDoc(nuevoArray);
        if (archivo.open(QIODevice::WriteOnly | QIODevice::Text)) {
            archivo.write(updatedDoc.toJson(QJsonDocument::Indented));
            archivo.close();
            QMessageBox::information(this, tr("Éxito"), tr("Categoría '%1' y %2 preguntas asociadas borradas correctamente.").arg(categoriaABorrar).arg(preguntasBorradas));
            cargarListaCategorias();
            ui->pushButton_borrarCategoriaSeleccionada->setEnabled(false);
            categoriaSeleccionada = nullptr;
        } else {
            qDebug() << "Error al escribir en el archivo preguntas.json.";
            QMessageBox::critical(this, tr("Error"), tr("No se pudo guardar los cambios en el archivo de preguntas."));
        }
    }
}
