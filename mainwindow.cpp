#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "preguntas.h"
#include <QtWidgets/QFileDialog>
#include <QPixmap>
#include <QDir>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_buscarImagen_clicked()
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
            ui->label_imagen->setPixmap(imagen.scaled(ui->label_imagen->size(), Qt::KeepAspectRatio));
            ui->label_imagen->setAlignment(Qt::AlignCenter);
            ui->label_imagen->setProperty("imagePath", archivo);
        } else {
            QMessageBox::warning(this, tr("Error"), tr("No se pudo cargar la imagen."));
            ui->label_imagen->clear();
            ui->label_imagen->setProperty("imagePath", QString());
        }
    } else {
        ui->label_imagen->clear();
        ui->label_imagen->setProperty("imagePath", QString());
    }
}


void MainWindow::on_button_crearPregunta_clicked()
{

    QString text_pregunta = ui->lineEdit_pregunta->text().toLower();
    QString text_opcionA = ui->lineEdit_opcionA->text().toLower();
    QString text_opcionB = ui->lineEdit_opcionB->text().toLower();
    QString text_opcionC = ui->lineEdit_opcionC->text().toLower();
    QString text_respuestaCorrecta = ui->lineEdit_respuestaCorrecta->text().toLower();
    QString text_categoria = ui->lineEdit_categoria->text().toLower();
    QString imagen_path = ui->label_imagen->property("imagePath").toString();

    if(text_pregunta.isEmpty() || text_opcionA.isEmpty() || text_opcionB.isEmpty()
        || text_opcionC.isEmpty() || text_respuestaCorrecta.isEmpty() || text_categoria.isEmpty() ){

        QMessageBox::warning(this, tr("ADVERTENCIA"), tr("Debe rellenar todos los campos"));
        return;

    } else if(text_respuestaCorrecta != "a" && text_respuestaCorrecta != "b" && text_respuestaCorrecta != "c"){

        QMessageBox::warning(this, tr("ADVERTENCIA"), tr("Debe ingresar la letra de la opcion correcta (A, B o C)"));
        return;
    }

    preguntas preguntaNueva(text_pregunta, text_opcionA, text_opcionB, text_opcionC, text_respuestaCorrecta, text_categoria, QUuid::createUuid().toString(), imagen_path);

    static std::vector<preguntas> listaDePreguntas;

    QFile archivo("preguntas.json");
    if (archivo.exists() && archivo.size() > 0) {
        preguntas::cargarJSON(listaDePreguntas);
    }

    listaDePreguntas.push_back(preguntaNueva);

    preguntas::guardarJSON(listaDePreguntas);

    QMessageBox::information(this, tr("ÉXITO"), tr("Pregunta creada y guardada."));

    ui->lineEdit_pregunta->clear();//probablemente haya que cambiar a textEdit (textEdit permite el salto de linea con enter)
    ui->lineEdit_opcionA->clear();
    ui->lineEdit_opcionB->clear();
    ui->lineEdit_opcionC->clear();
    ui->lineEdit_respuestaCorrecta->clear();
    ui->lineEdit_categoria->clear();
    ui->label_imagen->clear();
}

/*
void MainWindow::on_button_listarPreguntas_clicked()
{
    if (!widget_preguntas) {
        widget_preguntas = new widgetPreguntas(this);
    }

    widget_preguntas->show();
    widget_preguntas->raise();
    widget_preguntas->activateWindow();

}*/



