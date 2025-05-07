#include "preguntas.h"
#include "lectorjson.h"
#include <iostream>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>

preguntas::preguntas()
{
    id = QString();
    pregunta = QString();
    opcionA = QString();
    opcionB = QString();
    opcionC = QString();
    opcionCorrecta = QString();
    categoria = QString();
    imagenBase64 = QString();
}

preguntas::preguntas (QString &p, QString &opA, QString &opB, QString &opC, QString &corr, QString &cat, const QString &Id, QString &imgP){
    id = Id;
    pregunta = p;
    opcionA = opA;
    opcionB = opB;
    opcionC = opC;
    opcionCorrecta = corr;
    categoria = cat;
    imagenBase64 = imgP;
}

preguntas::~preguntas(){
    std::cout << "Se ha eliminado el objeto preguntas..." << std::endl;
}

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
        PREGUNTA["imagenBase64File"] = elem.getImagenBase64();

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

    LectorJson lectorArchivo("preguntas.json");

    QJsonArray jsonPreguntas = lectorArchivo.leerPreguntasJson();

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
            !jsonObj.contains("imagenBase64File") || !jsonObj["imagenBase64File"].isString() ) {
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
        QString qImagenPath = jsonObj["imagenBase64File"].toString();

        preguntas p(qPregunta, qOpcionA, qOpcionB, qOpcionC, qOpcionCorrecta, qCategoria, qId, qImagenPath);
        pregunta.push_back(p);
    }
}
