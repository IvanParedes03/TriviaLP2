#ifndef VENTANAEDITARPREGUNTAS_H
#define VENTANAEDITARPREGUNTAS_H

#include <QDialog>
#include <QJsonArray>
#include <QJsonObject>
#include "lectorjson.h"

namespace Ui {
class VentanaEditarPreguntas;
}

class VentanaEditarPreguntas : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaEditarPreguntas(const QJsonObject &preguntaAEditar, QWidget *parent = nullptr);
    ~VentanaEditarPreguntas();

    void cargarDatosParaEdicion(const QJsonObject &pregunta);

private slots:

    void on_pushButton_editarPregunta_clicked();

    void on_pushButton_buscarImagenEditar_clicked();

private:
    Ui::VentanaEditarPreguntas *ui;
    QJsonObject preguntaEditando;
    LectorJson lectorJSON;
    QString idPreguntaEditable;

signals:

    void preguntaEditadaGuardada();
};

#endif // VENTANAEDITARPREGUNTAS_H
