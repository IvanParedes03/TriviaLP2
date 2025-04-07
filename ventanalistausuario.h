#ifndef VENTANALISTAUSUARIO_H
#define VENTANALISTAUSUARIO_H

#include <QDialog>
#include <vector>
#include "ventanausuario.h"
#include "classusuario.h"

namespace Ui {
class ventanaListaUsuario;
}

class ventanaListaUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit ventanaListaUsuario(std::vector<Usuario>& usuarios, QWidget *parent = nullptr);
    ~ventanaListaUsuario();

private slots:
    void volverGestionUsuario();
    void siguienteUsuario();
    void anteriorUsuario();
    void refreshLista();
    void abrirVentanaEditarUsuario();
    void eliminarUsuario();
private:
    Ui::ventanaListaUsuario *ui;
    int iteradorUsuario;
    std::vector<Usuario> usuariosFromVentanaUsuario;
};

#endif // VENTANALISTAUSUARIO_H
