#ifndef VENTANAEDITARPREGUNTAS_H
#define VENTANAEDITARPREGUNTAS_H

#include "preguntas.h"
#include <QWidget>
#include <QListWidgetItem>
#include <QJsonObject>

namespace Ui {
class VentanaEditarPreguntas;
}

class VentanaEditarPreguntas : public QWidget, public preguntas
{
    Q_OBJECT

signals:

    void signalEditarPreguntaSeleccionada(const QJsonObject& pregunta);

private slots:

    // on_pushButton_editarPreguntaSeleccionada_clicked();

public:

    explicit VentanaEditarPreguntas(QWidget *parent = nullptr);
    ~VentanaEditarPreguntas();

    void cargarListaPreguntas();
    void elementoSeleccionadoPregunta(QListWidgetItem *elemActual, QListWidgetItem *elemAnterior);
    QJsonObject obtenerElementoPregunta();

private:

    Ui::VentanaEditarPreguntas *ui;
    QString idPreguntaSeleccionada;
    QJsonObject preguntaSeleccionada;

protected:

    void showEvent(QShowEvent *event) override;

};

#endif // VENTANAEDITARPREGUNTAS_H
