#ifndef PREGUNTAS_H
#define PREGUNTAS_H

#include <QString>
#include <QUuid>

class preguntas
{
public:
    preguntas(QString &, QString &, QString &, QString &, QString &, QString &, const QString &, QString &);
    ~preguntas();

    static void guardarJSON(std::vector<preguntas>& pregunta);
    static void cargarJSON(std::vector<preguntas>& pregunta);

    QString getId() const {return id;}
    QString getPregunta() const {return pregunta;}
    QString getOpcionA() const {return opcionA;}
    QString getOpcionB() const {return opcionB;}
    QString getOpcionC() const {return opcionC;}
    QString getOpcionCorrecta() const {return opcionCorrecta;}
    QString getCategoria() const {return categoria;}
    QString getImagenPath() const {return imagenPath;}

    void setPregunta(QString &text) {pregunta = text;}
    void setOpcionA(QString &text) {opcionA = text;}
    void setOpcionB(QString &text) {opcionC = text;}
    void setOpcionC(QString &text) {opcionC = text;}
    void setOpcionCorrecta(QString &text) {opcionCorrecta = text;}
    void setCategoria(QString &text) {categoria = text;}
    void setImagenPath(QString &text) {imagenPath = text;}

private:

    QString id;
    QString pregunta;
    QString opcionA;
    QString opcionB;
    QString opcionC;
    QString opcionCorrecta;
    QString categoria;
    QString imagenPath;

};

#endif // PREGUNTAS_H
