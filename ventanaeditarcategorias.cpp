#include "ventanaeditarcategorias.h"
#include "ui_ventanaeditarcategorias.h"
#include <iostream>
#include <QFile>
#include <QDebug>
#include <QMessageBox>

VentanaEditarCategorias::VentanaEditarCategorias(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::VentanaEditarCategorias)
    , preguntas()
{
    setAttribute(Qt::WA_DeleteOnClose, true);
    ui->setupUi(this);
    connect(ui->listWidget_listaCategorias, &QListWidget::currentItemChanged,
            this, &VentanaEditarCategorias::elementoSeleccionadoCategoria);
}

VentanaEditarCategorias::~VentanaEditarCategorias()
{
    delete ui;
}

void VentanaEditarCategorias::showEvent(QShowEvent *event)
{
    qDebug() << "Se ejecuta el showEvent de la ventana editar categorias...";
    ui->listWidget_listaCategorias->clearSelection();
    if (ui->pushButton_borrarCategoriaSeleccionada != nullptr) {
        ui->pushButton_borrarCategoriaSeleccionada->setFocus();
    }
    QWidget::showEvent(event);
}

void VentanaEditarCategorias::cargarListaCategorias()
{

    QJsonArray preguntasJson = leerPreguntasJson();

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
}

void VentanaEditarCategorias::elementoSeleccionadoCategoria(QListWidgetItem *elemActual, QListWidgetItem *elemAnterior)
{
    if (elemActual) {
        VentanaEditarCategorias::categoriaSeleccionada = elemActual;
        ui->pushButton_borrarCategoriaSeleccionada->setEnabled(true);
    }else{
        VentanaEditarCategorias::categoriaSeleccionada = nullptr;
        ui->pushButton_borrarCategoriaSeleccionada->setEnabled(false);
    }
}

QString VentanaEditarCategorias::obtenerElementoCategoria() const
{
    if(VentanaEditarCategorias::categoriaSeleccionada){
        return VentanaEditarCategorias::categoriaSeleccionada->text();
    }

    return QString();
}
