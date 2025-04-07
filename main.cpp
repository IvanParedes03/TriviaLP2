#include "mainwindow.h"
#include "ventanausuario.h"
#include <QApplication>
#include <iostream>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile estilo("styles.qss");
    if(estilo.open(QFile::ReadOnly)){
        QString style = QLatin1String(estilo.readAll());
        a.setStyleSheet(style);
        std::cout << "CARGADO" << std::endl;
    }
    else{
        std::cout << "NO CARGADO" << std::endl;
    }
    VentanaUsuario w;
    w.show();
    return a.exec();
}
