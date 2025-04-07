#ifndef VENTANAEDITARUSUARIO_H
#define VENTANAEDITARUSUARIO_H

#include <QDialog>
#include <vector>
#include "classusuario.h"

namespace Ui {
class VentanaEditarUsuario;
}

class VentanaEditarUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaEditarUsuario(std::vector<Usuario> &usuarios, int iterador, QWidget *parent = nullptr);
    ~VentanaEditarUsuario();

    void setUsuariosExport(int n);

private slots:
    void cerrarVentanaEdicion();
    void guardarEdicion();
private:
    Ui::VentanaEditarUsuario *ui;
    std::vector<Usuario> UsuariosExport;
    int posicionUsuario;

};

#endif // VENTANAEDITARUSUARIO_H
