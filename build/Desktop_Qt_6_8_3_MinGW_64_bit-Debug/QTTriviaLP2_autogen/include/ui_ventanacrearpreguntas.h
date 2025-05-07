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
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_pregunta;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *pushButton_buscarImagen;
    QLabel *label_imagen;
    QLabel *label_5;
    QLineEdit *lineEdit_opcionA;
    QLabel *label_6;
    QLineEdit *lineEdit_opcionB;
    QLabel *label_7;
    QLineEdit *lineEdit_opcionC;
    QLabel *label_8;
    QLineEdit *lineEdit_respuestaCorrecta;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLineEdit *lineEdit_categoria;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_descripcionCategoria;
    QHBoxLayout *horizontalLayout_3;
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
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_2);

        lineEdit_pregunta = new QLineEdit(centralwidget);
        lineEdit_pregunta->setObjectName("lineEdit_pregunta");

        verticalLayout->addWidget(lineEdit_pregunta);

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

        label_imagen = new QLabel(centralwidget);
        label_imagen->setObjectName("label_imagen");
        label_imagen->setMaximumSize(QSize(167772, 167772));
        label_imagen->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_imagen->setMargin(20);

        verticalLayout->addWidget(label_imagen);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        lineEdit_opcionA = new QLineEdit(centralwidget);
        lineEdit_opcionA->setObjectName("lineEdit_opcionA");

        verticalLayout->addWidget(lineEdit_opcionA);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        lineEdit_opcionB = new QLineEdit(centralwidget);
        lineEdit_opcionB->setObjectName("lineEdit_opcionB");

        verticalLayout->addWidget(lineEdit_opcionB);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        lineEdit_opcionC = new QLineEdit(centralwidget);
        lineEdit_opcionC->setObjectName("lineEdit_opcionC");

        verticalLayout->addWidget(lineEdit_opcionC);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        lineEdit_respuestaCorrecta = new QLineEdit(centralwidget);
        lineEdit_respuestaCorrecta->setObjectName("lineEdit_respuestaCorrecta");
        lineEdit_respuestaCorrecta->setMaxLength(1);

        verticalLayout->addWidget(lineEdit_respuestaCorrecta);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");

        horizontalLayout_2->addWidget(label_9);

        lineEdit_categoria = new QLineEdit(centralwidget);
        lineEdit_categoria->setObjectName("lineEdit_categoria");

        horizontalLayout_2->addWidget(lineEdit_categoria);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        lineEdit_descripcionCategoria = new QLineEdit(centralwidget);
        lineEdit_descripcionCategoria->setObjectName("lineEdit_descripcionCategoria");

        horizontalLayout_4->addWidget(lineEdit_descripcionCategoria);


        verticalLayout->addLayout(horizontalLayout_4);

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


        verticalLayout->addLayout(horizontalLayout_3);

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
        label_imagen->setText(QCoreApplication::translate("VentanaCrearPreguntas", ".", nullptr));
        label_5->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Opcion A:", nullptr));
        label_6->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Opcion B:", nullptr));
        label_7->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Opcion C:", nullptr));
        label_8->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Opcion Correcta:", nullptr));
        label_9->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Categoria:", nullptr));
        label->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Descripcion :", nullptr));
        pushButton_crearPregunta->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Crear ", nullptr));
        pushButton_listarPreguntas->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Listar Preguntas", nullptr));
        pushButton_listarCategorias->setText(QCoreApplication::translate("VentanaCrearPreguntas", "Listar Categorias", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaCrearPreguntas: public Ui_VentanaCrearPreguntas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANACREARPREGUNTAS_H
