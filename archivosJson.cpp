#include <vector>
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
