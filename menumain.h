#ifndef MENUMAIN_H
#define MENUMAIN_H
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

private slots:
    void gestionUsuarios();
    void gestionPreguntas();

private:
    Ui::menuMain *ui;
};

#endif // MENUMAIN_H
