#include "lectorjson.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>

LectorJson::LectorJson(const QString& nombreArchivo, QObject *parent) : QObject(parent), nombreArchivo_(nombreArchivo) {}

QJsonArray LectorJson::leerPreguntasJson()
{
    QFile archivo(nombreArchivo_);
    if (!archivo.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error al abrir el archivo " << nombreArchivo_ << " para lectura.";
        return QJsonArray();
    }
    QByteArray data = archivo.readAll();
    archivo.close();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isArray()) {
        qDebug() << "Error: El formato de " << nombreArchivo_ << " no es un array.";
        return QJsonArray();
    }
    return doc.array();
}

bool LectorJson::actualizarPreguntaJson(const QJsonObject &preguntaEditada) {
    QFile archivo(nombreArchivo_);
    if (!archivo.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Error al abrir el archivo " << nombreArchivo_ << " para lectura y escritura.";
        return false;
    }
    QByteArray data = archivo.readAll();
    archivo.seek(0);
    archivo.resize(0);
    archivo.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isArray()) {
        qDebug() << "Error: El formato de " << nombreArchivo_ << " no es un array.";
        return false;
    }
    QJsonArray preguntasArray = doc.array();
    QString idParaEditar = preguntaEditada.value("id").toString();
    for (int i = 0; i < preguntasArray.size(); ++i) {
        if (preguntasArray[i].isObject()) {
            QJsonObject pregunta = preguntasArray[i].toObject();
            if (pregunta.value("id").toString() == idParaEditar) {
                preguntasArray[i] = preguntaEditada;
                break;
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
        qDebug() << "Error, No se pudo escribir en el archivo " << nombreArchivo_ << ".";
        return false;
    }
}

bool LectorJson::borrarPreguntaJson(const QString &idPregunta)
{
    QFile archivo(nombreArchivo_);
    if (!archivo.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Error al abrir el archivo " << nombreArchivo_ << " para lectura y escritura para borrar.";
        return false;
    }
    QByteArray data = archivo.readAll();
    archivo.seek(0);
    archivo.resize(0);
    archivo.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isArray()) {
        qDebug() << "Error, Formato JSON incorrecto para borrar en " << nombreArchivo_ << ".";
        return false;
    }
    QJsonArray preguntasArray = doc.array();
    QJsonArray nuevoArray;
    for (int i = 0; i < preguntasArray.size(); ++i) {
        if (preguntasArray[i].isObject()) {
            QJsonObject pregunta = preguntasArray[i].toObject();
            if (pregunta.value("id").toString() != idPregunta) {
                nuevoArray.append(pregunta);
            }
        }
    }
    QJsonDocument updatedDoc(nuevoArray);
    if (archivo.open(QIODevice::WriteOnly | QIODevice::Text)) {
        archivo.write(updatedDoc.toJson(QJsonDocument::Indented));
        archivo.close();
        qDebug() << "Éxito, Pregunta borrada correctamente.";
        return true;
    } else {
        qDebug() << "Error, No se pudo escribir en el archivo " << nombreArchivo_ << " después de borrar.";
        return false;
    }
}

bool LectorJson::guardarNuevaPreguntaJson(const QJsonObject &nuevaPregunta)
{
    QFile archivo(nombreArchivo_);
    if (!archivo.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Error al abrir el archivo " << nombreArchivo_ << " para lectura y escritura.";
        return false;
    }
    QByteArray data = archivo.readAll();
    archivo.seek(0);
    archivo.resize(0);
    archivo.close();

    QJsonDocument doc = QJsonDocument::fromJson(data);
    QJsonArray preguntasArray;
    if (doc.isArray()) {
        preguntasArray = doc.array();
    }
    preguntasArray.append(nuevaPregunta);
    QJsonDocument updatedDoc(preguntasArray);
    if (archivo.open(QIODevice::WriteOnly | QIODevice::Text)) {
        archivo.write(updatedDoc.toJson(QJsonDocument::Indented));
        archivo.close();
        qDebug() << "Éxito al guardar la nueva pregunta.";
        return true;
    } else {
        qDebug() << "Error al escribir en el archivo " << nombreArchivo_ << ".";
        return false;
    }
}

QJsonArray LectorJson::leerJsonArray(const QString& nombreArchivo)
{
    QFile archivo(nombreArchivo);
    if (!archivo.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error al abrir el archivo " << nombreArchivo << " para lectura.";
        return QJsonArray();
    }
    QByteArray data = archivo.readAll();
    archivo.close();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isArray()) {
        qDebug() << "Error: El formato de " << nombreArchivo << " no es un array.";
        return QJsonArray();
    }
    return doc.array();
}

bool LectorJson::guardarJsonArray(const QJsonArray& arrayParaGuardar, const QString& nombreArchivo)
{
    QFile archivo(nombreArchivo);
    if (!archivo.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Error al abrir el archivo " << nombreArchivo << " para escritura.";
        return false;
    }
    QJsonDocument doc(arrayParaGuardar);
    archivo.write(doc.toJson(QJsonDocument::Indented));
    archivo.close();
    qDebug() << "Éxito al guardar en " << nombreArchivo << ".";
    return true;
}
