#ifndef LECTORJSON_H
#define LECTORJSON_H

#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QObject>

/*
 *     ARCHIVO PARA GUARDAR FUNCIONES DE QUE SE USAN EN PREGUNTAS .H
 *  >>SI SE QUIEREN USAR ESTAS FUNCIONES SE HACE INLCUDE DE PREGUNTAS.H <<
*/

class LectorJson
{
public:
    QJsonArray leerPreguntasJson();

    bool actualizarPreguntaJson(const QJsonObject &preguntaEditada);

    bool borrarPreguntaJson(const QString &idPregunta);
};

#endif // LECTORJSON_H
