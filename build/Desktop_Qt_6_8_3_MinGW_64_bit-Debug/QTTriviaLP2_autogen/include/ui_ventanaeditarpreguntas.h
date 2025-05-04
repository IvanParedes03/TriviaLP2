/********************************************************************************
** Form generated from reading UI file 'ventanaeditarpreguntas.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAEDITARPREGUNTAS_H
#define UI_VENTANAEDITARPREGUNTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaEditarPreguntas
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget_listaPreguntas;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_editarPreguntaSeleccionada;
    QPushButton *pushButton_borrarPreguntaSeleccionada;

    void setupUi(QWidget *VentanaEditarPreguntas)
    {
        if (VentanaEditarPreguntas->objectName().isEmpty())
            VentanaEditarPreguntas->setObjectName("VentanaEditarPreguntas");
        VentanaEditarPreguntas->resize(700, 500);
        VentanaEditarPreguntas->setMinimumSize(QSize(700, 500));
        VentanaEditarPreguntas->setMaximumSize(QSize(700, 500));
        widget = new QWidget(VentanaEditarPreguntas);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 702, 490));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget_listaPreguntas = new QListWidget(widget);
        listWidget_listaPreguntas->setObjectName("listWidget_listaPreguntas");
        listWidget_listaPreguntas->setMinimumSize(QSize(700, 450));
        listWidget_listaPreguntas->setMaximumSize(QSize(700, 450));

        verticalLayout->addWidget(listWidget_listaPreguntas);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_editarPreguntaSeleccionada = new QPushButton(widget);
        pushButton_editarPreguntaSeleccionada->setObjectName("pushButton_editarPreguntaSeleccionada");

        horizontalLayout->addWidget(pushButton_editarPreguntaSeleccionada);

        pushButton_borrarPreguntaSeleccionada = new QPushButton(widget);
        pushButton_borrarPreguntaSeleccionada->setObjectName("pushButton_borrarPreguntaSeleccionada");

        horizontalLayout->addWidget(pushButton_borrarPreguntaSeleccionada);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VentanaEditarPreguntas);

        QMetaObject::connectSlotsByName(VentanaEditarPreguntas);
    } // setupUi

    void retranslateUi(QWidget *VentanaEditarPreguntas)
    {
        VentanaEditarPreguntas->setWindowTitle(QCoreApplication::translate("VentanaEditarPreguntas", "Form", nullptr));
        pushButton_editarPreguntaSeleccionada->setText(QCoreApplication::translate("VentanaEditarPreguntas", "Editar Pregunta", nullptr));
        pushButton_borrarPreguntaSeleccionada->setText(QCoreApplication::translate("VentanaEditarPreguntas", "Borrar Pregunta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaEditarPreguntas: public Ui_VentanaEditarPreguntas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAEDITARPREGUNTAS_H
