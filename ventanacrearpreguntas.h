#ifndef VENTANACREARPREGUNTAS_H
#define VENTANACREARPREGUNTAS_H

#include "preguntas.h"
#include <QMainWindow>
#include <QFile>
#include <QListWidgetItem>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class VentanaCrearPreguntas;
}
QT_END_NAMESPACE

class VentanaCrearPreguntas : public QMainWindow, public preguntas
{

    Q_OBJECT

signals:

    void preguntaEditadaGuardar(const QJsonObject &pregunta);

private slots:

    void on_pushButton_buscarImagen_clicked();

    void on_pushButton_crearPregunta_clicked();

    void on_pushButton_listarPreguntas_clicked();

    void on_pushButton_listarCategorias_clicked();

public:

    VentanaCrearPreguntas(QWidget *parent = nullptr);
    ~VentanaCrearPreguntas();

private:

    Ui::VentanaCrearPreguntas *ui;

};

#endif // VENTANACREARPREGUNTAS_H
