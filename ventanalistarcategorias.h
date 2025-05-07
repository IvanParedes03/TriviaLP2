#ifndef VENTANALISTARCATEGORIAS_H
#define VENTANALISTARCATEGORIAS_H

#include <QListWidgetItem>
#include <QWidget>
#include "preguntas.h"

namespace Ui {
class VentanaListarCategorias;
}

class VentanaListarCategorias : public QWidget, public preguntas
{
    Q_OBJECT

public:
    explicit VentanaListarCategorias(QWidget *parent = nullptr);
    ~VentanaListarCategorias();

    bool cargarListaCategorias();

    void elementoSeleccionadoCategoria(QListWidgetItem *elemActual, QListWidgetItem *elemAnterior);

    QString obtenerElementoCategoria() const;

private slots:

    void on_pushButton_borrarCategoriaSeleccionada_clicked();

private:
    Ui::VentanaListarCategorias *ui;
    QListWidgetItem *categoriaSeleccionada = nullptr;

protected:
    void showEvent(QShowEvent *event) override;
};

#endif // VENTANALISTARCATEGORIAS_H
