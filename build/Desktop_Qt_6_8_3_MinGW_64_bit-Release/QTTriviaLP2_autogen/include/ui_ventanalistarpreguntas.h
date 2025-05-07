/********************************************************************************
** Form generated from reading UI file 'ventanalistarpreguntas.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANALISTARPREGUNTAS_H
#define UI_VENTANALISTARPREGUNTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaListarPreguntas
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget_listaPreguntas;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_editarPreguntaSeleccionada;
    QPushButton *pushButton_borrarPreguntaSeleccionada;

    void setupUi(QWidget *VentanaListarPreguntas)
    {
        if (VentanaListarPreguntas->objectName().isEmpty())
            VentanaListarPreguntas->setObjectName("VentanaListarPreguntas");
        VentanaListarPreguntas->resize(700, 500);
        VentanaListarPreguntas->setMinimumSize(QSize(700, 500));
        VentanaListarPreguntas->setMaximumSize(QSize(700, 500));
        verticalLayout_2 = new QVBoxLayout(VentanaListarPreguntas);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        listWidget_listaPreguntas = new QListWidget(VentanaListarPreguntas);
        listWidget_listaPreguntas->setObjectName("listWidget_listaPreguntas");
        QFont font;
        font.setPointSize(10);
        listWidget_listaPreguntas->setFont(font);

        verticalLayout->addWidget(listWidget_listaPreguntas);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_editarPreguntaSeleccionada = new QPushButton(VentanaListarPreguntas);
        pushButton_editarPreguntaSeleccionada->setObjectName("pushButton_editarPreguntaSeleccionada");
        pushButton_editarPreguntaSeleccionada->setFont(font);

        horizontalLayout->addWidget(pushButton_editarPreguntaSeleccionada);

        pushButton_borrarPreguntaSeleccionada = new QPushButton(VentanaListarPreguntas);
        pushButton_borrarPreguntaSeleccionada->setObjectName("pushButton_borrarPreguntaSeleccionada");
        pushButton_borrarPreguntaSeleccionada->setFont(font);

        horizontalLayout->addWidget(pushButton_borrarPreguntaSeleccionada);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(VentanaListarPreguntas);

        QMetaObject::connectSlotsByName(VentanaListarPreguntas);
    } // setupUi

    void retranslateUi(QWidget *VentanaListarPreguntas)
    {
        VentanaListarPreguntas->setWindowTitle(QCoreApplication::translate("VentanaListarPreguntas", "Form", nullptr));
        pushButton_editarPreguntaSeleccionada->setText(QCoreApplication::translate("VentanaListarPreguntas", "Editar Pregunta Seleccionada", nullptr));
        pushButton_borrarPreguntaSeleccionada->setText(QCoreApplication::translate("VentanaListarPreguntas", "Borrar Pregunta Seleccionada", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaListarPreguntas: public Ui_VentanaListarPreguntas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANALISTARPREGUNTAS_H
