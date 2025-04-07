#include "ventanausuario.h"
#include "ui_ventanausuario.h"
#include "classusuario.h"
#include "ventanalistausuario.h"
#include <iostream>
#include <string>
#include <vector>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QMessageBox>

VentanaUsuario::VentanaUsuario(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::VentanaUsuario)
{
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

    Usuario::cargarJSON(Usuarios);

}

VentanaUsuario::~VentanaUsuario()
{
    delete ui;
}


void VentanaUsuario::CrearUsuario(){ //crea un usuario y hace push al vector de usuarios

    ui->labelFeedbackUsuario->setText("");

    QString nombre = ui->nombreUsuarioInput->text();
    QString alias = ui->aliasUsuarioInput->text();

    if(nombre.isEmpty() || alias.isEmpty()){
        ui->labelFeedbackUsuario->setText("Error: Nombre o alias vacios");
        return;
    }

    Usuario nuevoUsuario(nombre.toStdString(), alias.toStdString());
    Usuarios.push_back(nuevoUsuario);
    Usuario::guardarJSON(Usuarios);
    ui->labelFeedbackUsuario->setText("Usuario creado");

    ui->aliasUsuarioInput->clear();
    ui->nombreUsuarioInput->clear();
}

void VentanaUsuario::ListarUsuarios(){ //lista usuarios cargados en memoria
    if(Usuarios.size() > 0){
        std::cout << "Lista de Usuarios:" << std::endl;
        for (auto& elem: Usuarios){
            std::cout << "Nombre: " << elem.getNombre() << " Alias: " << elem.getAlias() << std::endl;
        }
        ui->labelFeedbackUsuario->setText("");
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
        ui->labelFeedbackUsuario->setText("Ningun usuario creado.\nCree uno primero.");
    }
}

void VentanaUsuario::UsuarioEliminadoMensaje(){
    QMessageBox::information(nullptr, "Usuario eliminado", "Usuario eliminado");
}
