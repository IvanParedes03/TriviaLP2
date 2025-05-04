#ifndef VENTANAEDITARCATEGORIAS_H
#define VENTANAEDITARCATEGORIAS_H

#include "preguntas.h"
#include <QWidget>
#include <QListWidgetItem>

namespace Ui {
class VentanaEditarCategorias;
}

class VentanaEditarCategorias : public QWidget, public preguntas
{
    Q_OBJECT

public:

    explicit VentanaEditarCategorias(QWidget *parent = nullptr);
    ~VentanaEditarCategorias();

    void cargarListaCategorias();

    void elementoSeleccionadoCategoria(QListWidgetItem *elemActual, QListWidgetItem *elemAnterior);

    QString obtenerElementoCategoria() const;

private slots:


private:

    Ui::VentanaEditarCategorias *ui;
    QListWidgetItem *categoriaSeleccionada = nullptr;

protected:

    void showEvent(QShowEvent *event) override;
};

#endif // VENTANAEDITARCATEGORIAS_H
