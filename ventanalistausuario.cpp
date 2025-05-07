#include "ventanalistausuario.h"
#include "ui_ventanalistausuario.h"
#include "ventanaeditarusuario.h"
#include <iostream>
#include <vector>
ventanaListaUsuario::ventanaListaUsuario(std::vector<Usuario> &usuarios, QWidget *parent)
    : QDialog(parent)
    , usuariosFromVentanaUsuario(usuarios)
    , ui(new Ui::ventanaListaUsuario)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose, true);
    iteradorUsuario = 0;

    ui->labelNombreLista->setText(QString::fromStdString(usuariosFromVentanaUsuario[0].getNombre()));
    ui->labelAliasLista->setText(QString::fromStdString(usuariosFromVentanaUsuario[0].getAlias()));

    connect(ui->botonVolverGestion,
            &QPushButton::clicked,
            this,
            &ventanaListaUsuario::volverGestionUsuario);
    connect(ui->botonListaUsuariosAtras,
            &QPushButton::clicked,
            this,
            &ventanaListaUsuario::anteriorUsuario);
    connect(ui->botonListaUsuariosAdelante,
            &QPushButton::clicked,
            this,
            &ventanaListaUsuario::siguienteUsuario);
    connect(ui->botonEditarUsuario,
            &QPushButton::clicked,
            this,
            &ventanaListaUsuario::abrirVentanaEditarUsuario);
    connect(ui->botonEliminarUsuario,
            &QPushButton::clicked,
            this,
            &ventanaListaUsuario::eliminarUsuario);
}

ventanaListaUsuario::~ventanaListaUsuario()
{
    delete ui;
}

void ventanaListaUsuario::volverGestionUsuario()
{
    close();
}

void ventanaListaUsuario::refreshLista()
{
    if (usuariosFromVentanaUsuario.size() == 0) {
        ui->labelNombreLista->setText("Ningun usuario creado.");
        ui->labelAliasLista->setText("Ningun usuario creado.");
        return;
    }

    ui->labelNombreLista->setText(
        QString::fromStdString(usuariosFromVentanaUsuario[iteradorUsuario].getNombre()));
    ui->labelAliasLista->setText(
        QString::fromStdString(usuariosFromVentanaUsuario[iteradorUsuario].getAlias()));
}

void ventanaListaUsuario::siguienteUsuario()
{
    if (iteradorUsuario < usuariosFromVentanaUsuario.size() - 1) {
        iteradorUsuario++;
        refreshLista();
        std::cout << "Iterador: " << iteradorUsuario << std::endl;
    }
}

void ventanaListaUsuario::anteriorUsuario()
{
    if (iteradorUsuario > 0) {
        iteradorUsuario--;
        refreshLista();
        std::cout << "Iterador: " << iteradorUsuario << std::endl;
    }
}

void ventanaListaUsuario::abrirVentanaEditarUsuario()
{
    VentanaEditarUsuario *ventanaEditar = new VentanaEditarUsuario(usuariosFromVentanaUsuario,
                                                                   iteradorUsuario);
    connect(ventanaEditar, &VentanaEditarUsuario::destroyed, this, [this]() {
        this->show();
        usuariosFromVentanaUsuario.clear();
        Usuario::cargarJSON(usuariosFromVentanaUsuario);
        refreshLista();
    });

    ventanaEditar->show();
    this->hide();
}

void ventanaListaUsuario::eliminarUsuario()
{
    usuariosFromVentanaUsuario.erase(usuariosFromVentanaUsuario.begin() + iteradorUsuario);
    Usuario::guardarJSON(usuariosFromVentanaUsuario);
    this->close();
    VentanaUsuario::UsuarioEliminadoMensaje();
}
