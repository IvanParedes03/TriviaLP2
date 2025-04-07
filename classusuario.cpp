#include "classusuario.h"
#include <iostream>
#include <string>
#include <vector>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>

//declaraciones con output de const y desct

Usuario::Usuario(std::string n, std::string a){
    Nombre = n;
    Alias = a;
    std::cout << "Usuario creado\nNombre: " << Nombre << " Alias: " << Alias << std::endl;
}

Usuario::~Usuario(){
    std::cout << "Usuario eliminado\nNombre: " << Nombre << " Alias: " << Alias << std::endl;
}


//declaraciones de getters y setters
void Usuario::setNombre(std::string n){
    Nombre = n;
}

void Usuario::setAlias(std::string a){
    Alias = a;
}

std::string Usuario::getNombre(){
    return Nombre;
}

std::string Usuario::getAlias(){
    return Alias;
}

void Usuario::guardarJSON(std::vector<Usuario>& Usuarios){
    QJsonArray jsonArray;
    for(auto& elem : Usuarios){

        QJsonObject usuario;

        usuario["nombre"] = QString::fromStdString(elem.getNombre());
        usuario["alias"] = QString::fromStdString(elem.getAlias());

        jsonArray.append(usuario);
    }

    QJsonDocument doc(jsonArray);
    QFile archivo("usuarios.json");

    if(archivo.open(QIODevice::WriteOnly)){
        std::cout << "json escrito" << std::endl;
        archivo.write(doc.toJson());
        archivo.close();
    }
}

void Usuario::cargarJSON(std::vector<Usuario>& Usuarios){
    QFile archivo("usuarios.json");

    if(!archivo.open(QIODevice::ReadOnly)){
        std::cout << "No se abrio el archivo" << std::endl;
        return;
    }

    QByteArray data = archivo.readAll();
    archivo.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonArray jsonUsuarios = doc.array();

    for (const auto& elem : jsonUsuarios){
        QJsonObject jsonObj = elem.toObject();

        std::string nombre = jsonObj["nombre"].toString().toStdString();
        std::string alias = jsonObj["alias"].toString().toStdString();

        Usuario u(nombre, alias);
        Usuarios.push_back(u);
    }
}
