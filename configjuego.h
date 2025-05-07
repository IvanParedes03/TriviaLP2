#ifndef CONFIGJUEGO_H
#define CONFIGJUEGO_H

#include <QDialog>
#include <QJsonArray>
#include <vector>
#include <QString>
#include <QSet>
#include "classusuario.h"

namespace Ui {
class configJuego;
}

class configJuego : public QDialog
{
    Q_OBJECT

public:
    explicit configJuego(QWidget *parent = nullptr);
    ~configJuego();

private slots:
    void setMultijugador();
    void startGame();

private:
    Ui::configJuego *ui;
    QSet<QString> categorias;
    std::vector<Usuario> usuarios;
};


#endif // CONFIGJUEGO_H
