#ifndef VENTANAJUEGO_H
#define VENTANAJUEGO_H

#include <QDialog>
#include "classusuario.h"
#include <QJsonObject>
#include <vector>

namespace Ui {
class VentanaJuego;
}

class VentanaJuego : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaJuego(QWidget *parent,
                          std::vector<QJsonObject> &preguntas,
                          Usuario &jugador1,
                          Usuario &jugador2,
                          std::vector<Usuario> &usuarios);

    ~VentanaJuego();
    void refreshGame(std::vector<QJsonObject> &preguntas, Usuario &jugador1, Usuario &jugador2);


private slots:
    void botonIntento();

private:
    Ui::VentanaJuego *ui;
    std::vector<QJsonObject> preguntas;
    Usuario jugador1;
    Usuario jugador2;
    std::vector<Usuario> usuarios;
    int preguntaActual;
};

#endif // VENTANAJUEGO_H
