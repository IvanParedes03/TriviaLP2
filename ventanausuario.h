#ifndef VENTANAUSUARIO_H
#define VENTANAUSUARIO_H

#include <QDialog>
#include <vector>
#include <string>
#include "classusuario.h"

namespace Ui {
class VentanaUsuario;
}

class VentanaUsuario : public QDialog
{
    Q_OBJECT

public:
    VentanaUsuario(QWidget *parent = nullptr); //generado automatico por qt
    ~VentanaUsuario();

    static void UsuarioEliminadoMensaje();

private slots:
    void CrearUsuario();
    void ListarUsuarios();

private:
    Ui::VentanaUsuario *ui;
    std::vector<Usuario> Usuarios;

};

#endif // VENTANAUSUARIO_H
