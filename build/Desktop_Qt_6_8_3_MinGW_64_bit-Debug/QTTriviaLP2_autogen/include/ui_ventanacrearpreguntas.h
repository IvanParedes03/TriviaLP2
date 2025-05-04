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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaCrearPreguntas
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_pregunta;
    QSpacerItem *verticalSpacer_10;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *pushButton_buscarImagen;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_imagen;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_11;
    QLineEdit *lineEdit_opcionA;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_12;
    QLineEdit *lineEdit_opcionB;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_7;
    QLineEdit *lineEdit_opcionC;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_8;
    QLineEdit *lineEdit_respuestaCorrecta;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *lineEdit_categoria;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_crearPregunta;
    QPushButton *pushButton_listarPreguntas;
    QPushButton *pushButton_listarCategorias;
    QPushButton *pushButton_editarPreguntaConfirmar;
    QSpacerItem *verticalSpacer_9;

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

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_10);

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

        pushButton_buscarImagen = new QPushButton(centralwidget);
        pushButton_buscarImagen->setObjectName("pushButton_buscarImagen");

        horizontalLayout->addWidget(pushButton_buscarImagen);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        label_imagen = new QLabel(centralwidget);
        label_imagen->setObjectName("label_imagen");
        label_imagen->setMaximumSize(QSize(167772, 167772));
        label_imagen->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_imagen->setMargin(20);

        verticalLayout->addWidget(label_imagen);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_11);

        lineEdit_opcionA = new QLineEdit(centralwidget);
        lineEdit_opcionA->setObjectName("lineEdit_opcionA");

        verticalLayout_3->addWidget(lineEdit_opcionA);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_12);

        lineEdit_opcionB = new QLineEdit(centralwidget);
        lineEdit_opcionB->setObjectName("lineEdit_opcionB");

        verticalLayout_3->addWidget(lineEdit_opcionB);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        verticalLayout_3->addWidget(label_7);

        lineEdit_opcionC = new QLineEdit(centralwidget);
        lineEdit_opcionC->setObjectName("lineEdit_opcionC");

        verticalLayout_3->addWidget(lineEdit_opcionC);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        verticalLayout_3->addWidget(label_8);

        lineEdit_respuestaCorrecta = new QLineEdit(centralwidget);
        lineEdit_respuestaCorrecta->setObjectName("lineEdit_respuestaCorrecta");
        lineEdit_respuestaCorrecta->setMaxLength(1);

        verticalLayout_3->addWidget(lineEdit_respuestaCorrecta);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

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

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_13);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_crearPregunta = new QPushButton(centralwidget);
        pushButton_crearPregunta->setObjectName("pushButton_crearPregunta");

        horizontalLayout_3->addWidget(pushButton_crearPregunta);

        pushButton_listarPreguntas = new QPushButton(centralwidget);
        pushButton_listarPreguntas->setObjectName("pushButton_listarPreguntas");

        horizontalLayout_3->addWidget(pushButton_listarPreguntas);

        pushButton_listarCategorias = new QPushButton(centralwidget);
        pushButton_listarCategorias->setObjectName("pushButton_listarCategorias");

        horizontalLayout_3->addWidget(pushButton_listarCategorias);

        pushButton_editarPreguntaConfirmar = new QPushButton(centralwidget);
        pushButton_editarPreguntaConfirmar->setObjectName("pushButton_editarPreguntaConfirmar");

        horizontalLayout_3->addWidget(pushButton_editarPreguntaConfirmar);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_9);


        verticalLayout_5->addLayout(verticalLayout);

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
        label_5->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Opcion A:", nullptr));
        label_6->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Opcion B:", nullptr));
        label_7->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Opcion C:", nullptr));
        label_8->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Respuesta Correcta:", nullptr));
        label_9->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Categoria:", nullptr));
        pushButton_crearPregunta->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Crear ", nullptr));
        pushButton_listarPreguntas->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Listar Preguntas", nullptr));
        pushButton_listarCategorias->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Listar Categorias", nullptr));
        pushButton_editarPreguntaConfirmar->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaCrearPreguntas: public Ui_VentanaCrearPreguntas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACREARPREGUNTAS_H
