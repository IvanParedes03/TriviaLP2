#ifndef LECTORJSON_H
#define LECTORJSON_H

#include <QObject>
#include <QJsonArray>
#include <QJsonObject>
#include <QString>

/*
 *     ARCHIVO PARA GUARDAR FUNCIONES DE QUE SE USAN EN PREGUNTAS .H
 *  >>SI SE QUIEREN USAR ESTAS FUNCIONES SE HACE INLCUDE DE PREGUNTAS.H <<
*/


class LectorJson : public QObject
{
    Q_OBJECT

public:
    explicit LectorJson(const QString& nombreArchivo, QObject *parent = nullptr);

    QJsonArray leerPreguntasJson();
    bool actualizarPreguntaJson(const QJsonObject &preguntaEditada);
    bool borrarPreguntaJson(const QString &idPregunta);
    bool guardarNuevaPreguntaJson(const QJsonObject &nuevaPregunta);

    QJsonArray leerJsonArray(const QString& nombreArchivo); // Función genérica para leer arrays JSON
    bool guardarJsonArray(const QJsonArray& arrayParaGuardar, const QString& nombreArchivo); // Función genérica para guardar arrays JSON

private:
    QString nombreArchivo_;
};

#endif // LECTORJSON_H

