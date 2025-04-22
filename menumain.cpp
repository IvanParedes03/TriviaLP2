#include "menumain.h"
#include "ui_menumain.h"
#include "ventanausuario.h"
#include "mainwindow.h"
#include <QPushButton>
menuMain::menuMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::menuMain)
{
    ui->setupUi(this);
    connect(ui->botonGestionUsuarios, &QPushButton::clicked, this, &menuMain::gestionUsuarios);
    connect(ui->botonGestionPreguntas, &QPushButton::clicked, this, &menuMain::gestionPreguntas);
}

menuMain::~menuMain()
{
    delete ui;
}


void menuMain::gestionUsuarios(){
    VentanaUsuario *ventanaUsuario = new VentanaUsuario();

    connect(ventanaUsuario, &VentanaUsuario::destroyed, this, [this](){
        this->show();
    });

    ventanaUsuario->show();
    this->hide();
}

void menuMain::gestionPreguntas(){
    MainWindow *ventanaPreguntas = new MainWindow();

    connect(ventanaPreguntas, &MainWindow::destroyed, this, [this](){
        this->show();
    });

    ventanaPreguntas->show();
    this->hide();
}
