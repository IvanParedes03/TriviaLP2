#ifndef HANDLERS_H
#define HANDLERS_H
#include <QObject>
#include <QString>
#include <QRegularExpression>

class handlersCpp: public QObject{

    Q_OBJECT

public slots:

   // handlersCpp(QObject *objetoPadre = nullptr): QObject(objetoPadre) {}

    void textoValido (QString texto){
        qDebug() << texto;
    }
    void buscarImagen(const QString &texto){
        qDebug() << "El boton" << texto << "ha sido presionado\n";
    }

};


#endif // HANDLERS_H
