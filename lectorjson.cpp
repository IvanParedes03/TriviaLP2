#include "lectorjson.h"
#include <iostream>
#include <QMessageBox>

QJsonArray LectorJson::leerPreguntasJson()
{
    QFile archivo("preguntas.json");

    if (!archivo.open(QIODevice::ReadOnly)) {
        std::cerr << "No se pudo abrir el archivo preguntas.json para lectura o este archivo aun no existe." << std::endl;
        return QJsonArray();
    }

    QByteArray data = archivo.readAll();
    archivo.close();

    QJsonDocument docJson = QJsonDocument::fromJson(data);

    if (docJson.isNull()) {
        qDebug() << "Error al leer el archivo preguntas.json";
        return QJsonArray();
    }

    if (!docJson.isArray()) {
        qDebug() << "No existen preguntas en el archivo preguntas.json";
        return QJsonArray();
    }

    return docJson.array();

}

bool LectorJson::actualizarPreguntaJson(const QJsonObject &preguntaEditada) {

    QFile archivo("preguntas.json");

    if (!archivo.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Error, No se pudo abrir el archivo para lectura y escritura.";
        return false;
    }
    QByteArray data = archivo.readAll();
    archivo.seek(0);
    archivo.resize(0);
    archivo.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isArray()) {
        qDebug() << "Error, Formato JSON incorrecto.";
        return false;
    }
    QJsonArray preguntasArray = doc.array();

    QString idParaEditar = preguntaEditada.value("id").toString();
    for (int i = 0; i < preguntasArray.size(); ++i) {
        if (preguntasArray[i].isObject()) {
            QJsonObject pregunta = preguntasArray[i].toObject();
            if (pregunta.value("id").toString() == idParaEditar) {
                preguntasArray[i] = preguntaEditada; // Reemplaza la pregunta antigua con la editada
                break; // Suponiendo que los IDs son únicos
            }
        }
    }

    QJsonDocument updatedDoc(preguntasArray);
    if (archivo.open(QIODevice::WriteOnly | QIODevice::Text)) {

        archivo.write(updatedDoc.toJson(QJsonDocument::Indented));
        archivo.close();
        qDebug() << "Éxito, Pregunta actualizada correctamente.";
        return true;

    } else {

        qDebug() << "Error, No se pudo escribir en el archivo.";
        return false;

    }
}

bool LectorJson::borrarPreguntaJson(const QString &idPregunta)
{
    QJsonArray preguntasArray = leerPreguntasJson();

    if (preguntasArray.isEmpty()) {
        qDebug() << "No se pudieron leer las preguntas del archivo o el archivo está vacío.";
        return false;
    }

    QJsonArray nuevasPreguntasArray;
    bool borrada = false;

    for (const auto& preguntaObjeto : preguntasArray) {
        if (preguntaObjeto.isObject()) {
            QJsonObject pregunta = preguntaObjeto.toObject();
            if (pregunta.value("id").toString() != idPregunta) {
                nuevasPreguntasArray.append(preguntaObjeto);
            } else {
                borrada = true;
            }
        }
    }

    QFile archivo("preguntas.json");

    if (!archivo.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        qDebug() << "No se pudo abrir el archivo para escritura.";
        return false;
    }

    QJsonDocument updatedDoc(nuevasPreguntasArray);
    archivo.write(updatedDoc.toJson(QJsonDocument::Indented));
    archivo.close();

    return borrada;
}
