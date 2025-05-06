#ifndef VENTANALISTARPREGUNTAS_H
#define VENTANALISTARPREGUNTAS_H

#include "preguntas.h"
#include <QWidget>
#include <QListWidgetItem>
#include <QJsonObject>

namespace Ui {
class VentanaListarPreguntas;
}

class VentanaListarPreguntas : public QWidget, public preguntas
{
    Q_OBJECT

signals:

    void signalListarPreguntaSeleccionada(const QJsonObject& pregunta);

private slots:

    void on_pushButton_editarPreguntaSeleccionada_clicked();

    void on_pushButton_borrarPreguntaSeleccionada_clicked();

public:

    explicit VentanaListarPreguntas(QWidget *parent = nullptr);
    ~VentanaListarPreguntas();

    bool cargarListaPreguntas();
    void elementoSeleccionadoPregunta(QListWidgetItem *elemActual, QListWidgetItem *elemAnterior);
    QJsonObject obtenerElementoPregunta();

private:

    Ui::VentanaListarPreguntas *ui;
    QString idPreguntaSeleccionada;
    QJsonObject preguntaSeleccionada;

protected:

    void showEvent(QShowEvent *event) override;

};

#endif // VENTANALISTARPREGUNTAS_H
