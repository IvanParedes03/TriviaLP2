#ifndef PREGUNTAS_H
#define PREGUNTAS_H

#include "lectorjson.h"
#include <QMainWindow>
#include <QString>
#include <QUuid>
#include <QListWidget>

class preguntas: public LectorJson
{
public:

    preguntas();
    preguntas(QString &, QString &, QString &, QString &, QString &, QString &, const QString &, QString &);
    ~preguntas();

    void guardarJSON(std::vector<preguntas>& pregunta);
    void cargarJSON(std::vector<preguntas>& pregunta);

    QString getId() const {return id;}
    QString getPregunta() const {return pregunta;}
    QString getOpcionA() const {return opcionA;}
    QString getOpcionB() const {return opcionB;}
    QString getOpcionC() const {return opcionC;}
    QString getOpcionCorrecta() const {return opcionCorrecta;}
    QString getCategoria() const {return categoria;}
    QString getImagenBase64() const {return imagenBase64;}

    void setPregunta(QString &text) {pregunta = text;}
    void setOpcionA(QString &text) {opcionA = text;}
    void setOpcionB(QString &text) {opcionC = text;}
    void setOpcionC(QString &text) {opcionC = text;}
    void setOpcionCorrecta(QString &text) {opcionCorrecta = text;}
    void setCategoria(QString &text) {categoria = text;}
    void setImagenBase64(QString &text) {imagenBase64 = text;}

private:

    QString id;
    QString pregunta;
    QString opcionA;
    QString opcionB;
    QString opcionC;
    QString opcionCorrecta;
    QString categoria;
    QString imagenBase64;
};

#endif // PREGUNTAS_H
