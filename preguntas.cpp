#include "preguntas.h"
#include <iostream>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>

//Contructor y destructor

preguntas::preguntas (QString &p, QString &opA, QString &opB, QString &opC, QString &corr, QString &cat, const QString &Id, QString &imgP){
    id = Id;
    pregunta = p;
    opcionA = opA;
    opcionB = opB;
    opcionC = opC;
    opcionCorrecta = corr;
    categoria = cat;
    imagenPath = imgP;
}

preguntas::~preguntas(){
    std::cout << "Se ha eliminado el objeto preguntas..." << std::endl;
}

//Funciones para Json

void preguntas::guardarJSON(std::vector<preguntas>& pregunta){
    QJsonArray jsonArray;
    for(auto& elem : pregunta){

        QJsonObject PREGUNTA;

        PREGUNTA["id"] = elem.getId();
        PREGUNTA["categoria"] = elem.getCategoria();
        PREGUNTA["pregunta"] = elem.getPregunta();
        PREGUNTA["opcionA"] = elem.getOpcionA();
        PREGUNTA["opcionB"] = elem.getOpcionB();
        PREGUNTA["opcionC"] = elem.getOpcionC();
        PREGUNTA["opcionCorrecta"] = elem.getOpcionCorrecta();
        PREGUNTA["imagenPath"] = elem.getImagenPath();

        jsonArray.append(PREGUNTA);
    }

    QJsonDocument doc(jsonArray);
    QFile archivo("preguntas.json");

    if(archivo.open(QIODevice::WriteOnly)){
        std::cout << "json escrito" << std::endl;
        archivo.write(doc.toJson());
        archivo.close();
    }
}

void preguntas::cargarJSON(std::vector<preguntas>& pregunta){
    QFile archivo("preguntas.json");

    if (!archivo.open(QIODevice::ReadOnly)) {
        std::cerr << "No se pudo abrir el archivo preguntas.json para lectura." << std::endl;
        return;
    }

    QByteArray data = archivo.readAll();
    archivo.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (doc.isNull()) {
        std::cerr << "Error al parsear el archivo JSON." << std::endl;
        return;
    }

    if (!doc.isArray()) {
        std::cerr << "El archivo JSON no contiene un array de preguntas." << std::endl;
        return;
    }

    QJsonArray jsonPreguntas = doc.array();

    for (const auto& elem : jsonPreguntas) {
        if (!elem.isObject()) {
            std::cerr << "Elemento inválido en el array JSON (no es un objeto)." << std::endl;
            continue;
        }

        QJsonObject jsonObj = elem.toObject();

        if (!jsonObj.contains("id") || !jsonObj["id"].isString() ||
            !jsonObj.contains("pregunta") || !jsonObj["pregunta"].isString() ||
            !jsonObj.contains("opcionA") || !jsonObj["opcionA"].isString() ||
            !jsonObj.contains("opcionB") || !jsonObj["opcionB"].isString() ||
            !jsonObj.contains("opcionC") || !jsonObj["opcionC"].isString() ||
            !jsonObj.contains("opcionCorrecta") || !jsonObj["opcionCorrecta"].isString() ||
            !jsonObj.contains("categoria") || !jsonObj["categoria"].isString() ||
            !jsonObj.contains("imagenPath") || !jsonObj["imagenPath"].isString() ) {
            std::cerr << "Objeto JSON incompleto o con tipos incorrectos." << std::endl;
            continue;
        }

        QString qId = jsonObj["id"].toString();
        QString qPregunta = jsonObj["pregunta"].toString();
        QString qOpcionA = jsonObj["opcionA"].toString();
        QString qOpcionB = jsonObj["opcionB"].toString();
        QString qOpcionC = jsonObj["opcionC"].toString();
        QString qOpcionCorrecta = jsonObj["opcionCorrecta"].toString();
        QString qCategoria = jsonObj["categoria"].toString();
        QString qImagenPath = jsonObj["imagenPath"].toString();

        preguntas p(qPregunta, qOpcionA, qOpcionB, qOpcionC, qOpcionCorrecta, qCategoria, qId, qImagenPath);
        pregunta.push_back(p);
    }
}
