#ifndef MENUMAIN_H
#define MENUMAIN_H

#include "ventanacrearpreguntas.h"
#include <QMainWindow>

namespace Ui {
class menuMain;
}

class menuMain : public QMainWindow
{
    Q_OBJECT

public:

    explicit menuMain(QWidget *parent = nullptr);
    ~menuMain();

    //getter ventana crear pregunta
    VentanaCrearPreguntas &getVentanaCrearPreguntas() { return *ventanaCrearPreguntas_;}

private slots:

    //setters
    void gestionUsuarios();
    void gestionPreguntas();

private:

    Ui::menuMain *ui;
    VentanaCrearPreguntas *ventanaCrearPreguntas_ = nullptr;
};

#endif // MENUMAIN_H
