/********************************************************************************
** Form generated from reading UI file 'ventanacrearpreguntas.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANACREARPREGUNTAS_H
#define UI_VENTANACREARPREGUNTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaCrearPreguntas
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QLineEdit *lineEdit_pregunta;
    QHBoxLayout *horizontalLayout_imagen;
    QLabel *label_3;
    QPushButton *pushButton_buscarImagen;
    QLabel *label_imagen;
    QVBoxLayout *verticalLayout_opciones;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_opcionA;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_opcionB;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_opcionC;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_respuestaCorrecta;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLineEdit *lineEdit_categoria;
    QHBoxLayout *horizontalLayout_botones;
    QPushButton *pushButton_crearPregunta;
    QPushButton *pushButton_listarPreguntas;
    QPushButton *pushButton_listarCategorias;

    void setupUi(QMainWindow *VentanaCrearPreguntas)
    {
        if (VentanaCrearPreguntas->objectName().isEmpty())
            VentanaCrearPreguntas->setObjectName("VentanaCrearPreguntas");
        VentanaCrearPreguntas->resize(700, 500);
        VentanaCrearPreguntas->setMinimumSize(QSize(700, 500));
        VentanaCrearPreguntas->setMaximumSize(QSize(700, 500));
        centralwidget = new QWidget(VentanaCrearPreguntas);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        horizontalLayout_9->addWidget(label_2);

        lineEdit_pregunta = new QLineEdit(centralwidget);
        lineEdit_pregunta->setObjectName("lineEdit_pregunta");
        lineEdit_pregunta->setFont(font);

        horizontalLayout_9->addWidget(lineEdit_pregunta);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_imagen = new QHBoxLayout();
        horizontalLayout_imagen->setObjectName("horizontalLayout_imagen");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_imagen->addWidget(label_3);

        pushButton_buscarImagen = new QPushButton(centralwidget);
        pushButton_buscarImagen->setObjectName("pushButton_buscarImagen");
        pushButton_buscarImagen->setFont(font);

        horizontalLayout_imagen->addWidget(pushButton_buscarImagen);


        verticalLayout_3->addLayout(horizontalLayout_imagen);

        label_imagen = new QLabel(centralwidget);
        label_imagen->setObjectName("label_imagen");
        label_imagen->setMinimumSize(QSize(0, 0));
        label_imagen->setScaledContents(true);
        label_imagen->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_imagen);

        verticalLayout_opciones = new QVBoxLayout();
        verticalLayout_opciones->setObjectName("verticalLayout_opciones");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        lineEdit_opcionA = new QLineEdit(centralwidget);
        lineEdit_opcionA->setObjectName("lineEdit_opcionA");
        lineEdit_opcionA->setFont(font);

        horizontalLayout_5->addWidget(lineEdit_opcionA);


        verticalLayout_opciones->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        horizontalLayout_6->addWidget(label_6);

        lineEdit_opcionB = new QLineEdit(centralwidget);
        lineEdit_opcionB->setObjectName("lineEdit_opcionB");
        lineEdit_opcionB->setFont(font);

        horizontalLayout_6->addWidget(lineEdit_opcionB);


        verticalLayout_opciones->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        horizontalLayout_7->addWidget(label_7);

        lineEdit_opcionC = new QLineEdit(centralwidget);
        lineEdit_opcionC->setObjectName("lineEdit_opcionC");
        lineEdit_opcionC->setFont(font);

        horizontalLayout_7->addWidget(lineEdit_opcionC);


        verticalLayout_opciones->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        horizontalLayout_8->addWidget(label_8);

        lineEdit_respuestaCorrecta = new QLineEdit(centralwidget);
        lineEdit_respuestaCorrecta->setObjectName("lineEdit_respuestaCorrecta");
        lineEdit_respuestaCorrecta->setFont(font);
        lineEdit_respuestaCorrecta->setMaxLength(1);

        horizontalLayout_8->addWidget(lineEdit_respuestaCorrecta);


        verticalLayout_opciones->addLayout(horizontalLayout_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        horizontalLayout_2->addWidget(label_9);

        lineEdit_categoria = new QLineEdit(centralwidget);
        lineEdit_categoria->setObjectName("lineEdit_categoria");
        lineEdit_categoria->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_categoria);


        verticalLayout_opciones->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_opciones);

        horizontalLayout_botones = new QHBoxLayout();
        horizontalLayout_botones->setObjectName("horizontalLayout_botones");
        pushButton_crearPregunta = new QPushButton(centralwidget);
        pushButton_crearPregunta->setObjectName("pushButton_crearPregunta");
        pushButton_crearPregunta->setFont(font);

        horizontalLayout_botones->addWidget(pushButton_crearPregunta);

        pushButton_listarPreguntas = new QPushButton(centralwidget);
        pushButton_listarPreguntas->setObjectName("pushButton_listarPreguntas");
        pushButton_listarPreguntas->setFont(font);

        horizontalLayout_botones->addWidget(pushButton_listarPreguntas);

        pushButton_listarCategorias = new QPushButton(centralwidget);
        pushButton_listarCategorias->setObjectName("pushButton_listarCategorias");
        pushButton_listarCategorias->setFont(font);

        horizontalLayout_botones->addWidget(pushButton_listarCategorias);


        verticalLayout_3->addLayout(horizontalLayout_botones);

        VentanaCrearPreguntas->setCentralWidget(centralwidget);

        retranslateUi(VentanaCrearPreguntas);

        QMetaObject::connectSlotsByName(VentanaCrearPreguntas);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaCrearPreguntas)
    {
        VentanaCrearPreguntas->setWindowTitle(QCoreApplication::translate("VentanaCrearPreguntas", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Texto de la Pregunta", nullptr));
        label_3->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Imagen", nullptr));
        pushButton_buscarImagen->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Buscar", nullptr));
        label_imagen->setText(QString());
        label_5->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Opci\303\263n A:", nullptr));
        label_6->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Opci\303\263n B:", nullptr));
        label_7->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Opci\303\263n C:", nullptr));
        label_8->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Opci\303\263n Correcta:", nullptr));
        label_9->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Categor\303\255a:", nullptr));
        pushButton_crearPregunta->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Crear", nullptr));
        pushButton_listarPreguntas->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Listar Preguntas", nullptr));
        pushButton_listarCategorias->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Listar Categor\303\255as", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaCrearPreguntas: public Ui_VentanaCrearPreguntas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACREARPREGUNTAS_H
