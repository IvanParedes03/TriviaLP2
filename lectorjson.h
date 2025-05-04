#ifndef LECTORJSON_H
#define LECTORJSON_H

#include <QFile>
#include <QObject>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>

class LectorJson
{

public:

    QJsonArray leerPreguntasJson();

    bool actualizarPreguntaJson(const QJsonObject &preguntaEditada);

    bool borrarPreguntaJson(const QString &idPregunta);

};

#endif // LECTORJSON_H
