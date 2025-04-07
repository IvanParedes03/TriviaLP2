#include "ventanaeditarusuario.h"
#include "ui_ventanaeditarusuario.h"
#include "classusuario.h"
#include <vector>
#include <iostream>
#include <QMessageBox>
VentanaEditarUsuario::VentanaEditarUsuario(std::vector<Usuario>& usuarios, int iterador, QWidget *parent)
    : QDialog(parent), UsuariosExport(usuarios), posicionUsuario(iterador)
    , ui(new Ui::VentanaEditarUsuario)
{
    setAttribute(Qt::WA_DeleteOnClose, true);
    ui->setupUi(this);
    ui->inputEditarNombre->setText(QString::fromStdString(usuarios[iterador].getNombre()));
    ui->inputEditarAlias->setText(QString::fromStdString(usuarios[iterador].getAlias()));

    connect(ui->botonVolverDestroy, &QPushButton::clicked, this, &VentanaEditarUsuario::cerrarVentanaEdicion);
    connect(ui->botonGuardarEdicion, &QPushButton::clicked, this, &VentanaEditarUsuario::guardarEdicion);
}

VentanaEditarUsuario::~VentanaEditarUsuario()
{
    delete ui;
}

void VentanaEditarUsuario::cerrarVentanaEdicion(){
    this->close();
}

void VentanaEditarUsuario::guardarEdicion(){
    UsuariosExport[posicionUsuario].setNombre(ui->inputEditarNombre->text().toStdString());
    UsuariosExport[posicionUsuario].setAlias(ui->inputEditarAlias->text().toStdString());
    Usuario::guardarJSON(UsuariosExport);
    QMessageBox::information(nullptr, "Usuario editado", "Usuario editado");
    this->close();
}
