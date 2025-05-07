#include <QApplication>
#include <QFile>
#include "menumain.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile estilo(":/styles/css/styles.qss");

    if (estilo.open(QFile::ReadOnly | QFile::Text)) {
        QString style = estilo.readAll();
        a.setStyleSheet(style);
        estilo.close();
        std::cout << "CSS CARGADO Y APLICADO A LA APLICACIÓN" << std::endl;
    } else {
        std::cout << "NO SE PUDO CARGAR EL CSS" << std::endl;
    }

    menuMain w;
    w.show();
    return a.exec();
}
