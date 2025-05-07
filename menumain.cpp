#include "menumain.h"
#include "ui_menumain.h"
#include "ventanausuario.h"
#include "ventanacrearpreguntas.h"
#include "configjuego.h"
#include "estadisticas.h"
#include <QPushButton>
menuMain::menuMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::menuMain)
{
    ui->setupUi(this);
    connect(ui->botonGestionUsuarios, &QPushButton::clicked, this, &menuMain::gestionUsuarios);
    connect(ui->botonGestionPreguntas, &QPushButton::clicked, this, &menuMain::gestionPreguntas);
    connect(ui->botonJuego, &QPushButton::clicked, this, &menuMain::setupJuego);
    connect(ui->botonEstadisticas, &QPushButton::clicked,this, &menuMain::ventanaEstadisticas);
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
    ventanaCrearPreguntas_ = new VentanaCrearPreguntas();

    connect(ventanaCrearPreguntas_, &VentanaCrearPreguntas::destroyed, this, [this](){
        this->show();
    });

    ventanaCrearPreguntas_->show();
    this->hide();
}

void menuMain::setupJuego(){
    configJuego *setup = new configJuego();

    connect(setup, &configJuego::destroyed, this, [this]{
        this->show();
    });

    setup->show();
    this->hide();
}

void menuMain::ventanaEstadisticas(){
    estadisticas *est = new estadisticas();

    connect(est, &configJuego::destroyed, this, [this]{
        this->show();
    });

    est->show();
    this->hide();
}
