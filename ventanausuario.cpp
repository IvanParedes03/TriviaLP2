#include "ventanausuario.h"
#include "ui_ventanausuario.h"
#include "classusuario.h"
#include "ventanalistausuario.h"
#include <iostream>
#include <vector>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QMessageBox>

VentanaUsuario::VentanaUsuario(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VentanaUsuario)
{
    setAttribute(Qt::WA_DeleteOnClose, true);
    ui->setupUi(this);
    //regex de lineedit para nombre y alias
    QRegularExpression regexNombre("^[a-zA-Z\\s]+$");
    QRegularExpression regexAlias("^[a-zA-Z]+$");

    QRegularExpressionValidator *validatorNombre = new QRegularExpressionValidator(regexNombre, this);
    QRegularExpressionValidator *validatorAlias = new QRegularExpressionValidator(regexAlias, this);

    ui->nombreUsuarioInput->setValidator(validatorNombre);
    ui->aliasUsuarioInput->setValidator(validatorAlias);

     //conexion de botones de crear usuario y listar usuario
    connect(ui->botonCrearUsuario, &QPushButton::clicked, this, &VentanaUsuario::CrearUsuario);
    connect(ui->botonListarUsuarios, &QPushButton::clicked, this, &VentanaUsuario::ListarUsuarios);
    connect(ui->botonVolver, &QPushButton::clicked, this, &VentanaUsuario::close);

    Usuario::cargarJSON(Usuarios);

}

VentanaUsuario::~VentanaUsuario()
{
    delete ui;
}


void VentanaUsuario::CrearUsuario(){ //crea un usuario y hace push al vector de usuarios

    QString nombre = ui->nombreUsuarioInput->text();
    QString alias = ui->aliasUsuarioInput->text();

    if(nombre.isEmpty() || alias.isEmpty()){
        QMessageBox::warning(this, "Campos Vacios", "Rellena los campos vacios");
        return;
    }

    Usuario nuevoUsuario(nombre.toStdString(), alias.toStdString());
    Usuarios.push_back(nuevoUsuario);
    Usuario::guardarJSON(Usuarios);
    QMessageBox::information(this, "Usuario creado", "Usuario creado correctamente");

    ui->aliasUsuarioInput->clear();
    ui->nombreUsuarioInput->clear();
}

void VentanaUsuario::ListarUsuarios(){ //lista usuarios cargados en memoria
    if(Usuarios.size() > 0){
        std::cout << "Lista de Usuarios:" << std::endl;
        for (auto& elem: Usuarios){
            std::cout << "Nombre: " << elem.getNombre() << " Alias: " << elem.getAlias() << std::endl;
        }
        ventanaListaUsuario *ventanaLista = new ventanaListaUsuario(Usuarios);
        connect(ventanaLista, &ventanaListaUsuario::destroyed, this, [this](){
            this->show();
            Usuarios.clear();
            Usuario::cargarJSON(Usuarios);
        });

        ventanaLista->show();
        this->hide();
    }
    else{
        QMessageBox::warning(this, "No usuarios", "No hay ningun usuario registrado, cree uno primero");
    }
}

void VentanaUsuario::UsuarioEliminadoMensaje(){
    QMessageBox::information(nullptr, "Usuario eliminado", "Usuario eliminado");
}

