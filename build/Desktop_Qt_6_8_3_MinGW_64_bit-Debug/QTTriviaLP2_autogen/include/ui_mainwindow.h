/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_pregunta;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *button_buscarImagen;
    QLabel *label_imagen;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_opcionA;
    QLabel *label_6;
    QLineEdit *lineEdit_opcionB;
    QLabel *label_7;
    QLineEdit *lineEdit_opcionC;
    QLabel *label_8;
    QLineEdit *lineEdit_respuestaCorrecta;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *lineEdit_categoria;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *button_crearPregunta;
    QPushButton *button_listarPreguntas;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 719);
        MainWindow->setMinimumSize(QSize(800, 719));
        MainWindow->setMaximumSize(QSize(800, 720));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_2);

        lineEdit_pregunta = new QLineEdit(centralwidget);
        lineEdit_pregunta->setObjectName("lineEdit_pregunta");

        verticalLayout_4->addWidget(lineEdit_pregunta);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(20, 5, 20, 5);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_3);

        button_buscarImagen = new QPushButton(centralwidget);
        button_buscarImagen->setObjectName("button_buscarImagen");

        horizontalLayout->addWidget(button_buscarImagen);


        verticalLayout->addLayout(horizontalLayout);

        label_imagen = new QLabel(centralwidget);
        label_imagen->setObjectName("label_imagen");
        label_imagen->setMaximumSize(QSize(167772, 167772));
        label_imagen->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_imagen->setMargin(20);

        verticalLayout->addWidget(label_imagen);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        lineEdit_opcionA = new QLineEdit(centralwidget);
        lineEdit_opcionA->setObjectName("lineEdit_opcionA");

        verticalLayout_3->addWidget(lineEdit_opcionA);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);

        lineEdit_opcionB = new QLineEdit(centralwidget);
        lineEdit_opcionB->setObjectName("lineEdit_opcionB");

        verticalLayout_3->addWidget(lineEdit_opcionB);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        verticalLayout_3->addWidget(label_7);

        lineEdit_opcionC = new QLineEdit(centralwidget);
        lineEdit_opcionC->setObjectName("lineEdit_opcionC");

        verticalLayout_3->addWidget(lineEdit_opcionC);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        verticalLayout_3->addWidget(label_8);

        lineEdit_respuestaCorrecta = new QLineEdit(centralwidget);
        lineEdit_respuestaCorrecta->setObjectName("lineEdit_respuestaCorrecta");
        lineEdit_respuestaCorrecta->setMaxLength(1);

        verticalLayout_3->addWidget(lineEdit_respuestaCorrecta);


        verticalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");

        horizontalLayout_4->addWidget(label_9);

        lineEdit_categoria = new QLineEdit(centralwidget);
        lineEdit_categoria->setObjectName("lineEdit_categoria");

        horizontalLayout_4->addWidget(lineEdit_categoria);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        button_crearPregunta = new QPushButton(centralwidget);
        button_crearPregunta->setObjectName("button_crearPregunta");

        horizontalLayout_3->addWidget(button_crearPregunta);

        button_listarPreguntas = new QPushButton(centralwidget);
        button_listarPreguntas->setObjectName("button_listarPreguntas");

        horizontalLayout_3->addWidget(button_listarPreguntas);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Texto de la Pregunta", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Imagen", nullptr));
        button_buscarImagen->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        label_imagen->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Opcion A:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Opcion B:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Opcion C:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Respuesta Correcta:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Categoria:", nullptr));
        button_crearPregunta->setText(QCoreApplication::translate("MainWindow", "Crear ", nullptr));
        button_listarPreguntas->setText(QCoreApplication::translate("MainWindow", "Listar Preguntas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
