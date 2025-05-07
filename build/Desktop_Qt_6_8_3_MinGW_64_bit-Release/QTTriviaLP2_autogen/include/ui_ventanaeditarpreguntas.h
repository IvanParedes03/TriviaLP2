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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VentanaEditarPreguntas
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_preguntaEditar;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QPushButton *pushButton_buscarImagenEditar;
    QLabel *label_imagenEditar;
    QVBoxLayout *verticalLayout_opciones;
    QLabel *label_6;
    QLineEdit *lineEdit_opcionAEditar;
    QLabel *label_7;
    QLineEdit *lineEdit_opcionBEditar;
    QLabel *label_8;
    QLineEdit *lineEdit_opcionCEditar;
    QLabel *label_9;
    QLineEdit *lineEdit_opcionCorrectaEditar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *lineEdit_categoriaEditar;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_editarPregunta;

    void setupUi(QDialog *VentanaEditarPreguntas)
    {
        if (VentanaEditarPreguntas->objectName().isEmpty())
            VentanaEditarPreguntas->setObjectName("VentanaEditarPreguntas");
        VentanaEditarPreguntas->resize(700, 506);
        VentanaEditarPreguntas->setMinimumSize(QSize(700, 506));
        VentanaEditarPreguntas->setMaximumSize(QSize(700, 506));
        verticalLayout = new QVBoxLayout(VentanaEditarPreguntas);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(VentanaEditarPreguntas);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        horizontalLayout_4->addWidget(label);

        lineEdit_preguntaEditar = new QLineEdit(VentanaEditarPreguntas);
        lineEdit_preguntaEditar->setObjectName("lineEdit_preguntaEditar");
        lineEdit_preguntaEditar->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_preguntaEditar);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(VentanaEditarPreguntas);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_5);

        pushButton_buscarImagenEditar = new QPushButton(VentanaEditarPreguntas);
        pushButton_buscarImagenEditar->setObjectName("pushButton_buscarImagenEditar");
        pushButton_buscarImagenEditar->setFont(font);

        horizontalLayout->addWidget(pushButton_buscarImagenEditar);


        verticalLayout->addLayout(horizontalLayout);

        label_imagenEditar = new QLabel(VentanaEditarPreguntas);
        label_imagenEditar->setObjectName("label_imagenEditar");
        label_imagenEditar->setMaximumSize(QSize(16777215, 16777215));
        label_imagenEditar->setScaledContents(true);
        label_imagenEditar->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_imagenEditar->setMargin(20);

        verticalLayout->addWidget(label_imagenEditar);

        verticalLayout_opciones = new QVBoxLayout();
        verticalLayout_opciones->setObjectName("verticalLayout_opciones");
        label_6 = new QLabel(VentanaEditarPreguntas);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout_opciones->addWidget(label_6);

        lineEdit_opcionAEditar = new QLineEdit(VentanaEditarPreguntas);
        lineEdit_opcionAEditar->setObjectName("lineEdit_opcionAEditar");
        lineEdit_opcionAEditar->setFont(font);

        verticalLayout_opciones->addWidget(lineEdit_opcionAEditar);

        label_7 = new QLabel(VentanaEditarPreguntas);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        verticalLayout_opciones->addWidget(label_7);

        lineEdit_opcionBEditar = new QLineEdit(VentanaEditarPreguntas);
        lineEdit_opcionBEditar->setObjectName("lineEdit_opcionBEditar");
        lineEdit_opcionBEditar->setFont(font);

        verticalLayout_opciones->addWidget(lineEdit_opcionBEditar);

        label_8 = new QLabel(VentanaEditarPreguntas);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        verticalLayout_opciones->addWidget(label_8);

        lineEdit_opcionCEditar = new QLineEdit(VentanaEditarPreguntas);
        lineEdit_opcionCEditar->setObjectName("lineEdit_opcionCEditar");
        lineEdit_opcionCEditar->setFont(font);

        verticalLayout_opciones->addWidget(lineEdit_opcionCEditar);

        label_9 = new QLabel(VentanaEditarPreguntas);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        verticalLayout_opciones->addWidget(label_9);

        lineEdit_opcionCorrectaEditar = new QLineEdit(VentanaEditarPreguntas);
        lineEdit_opcionCorrectaEditar->setObjectName("lineEdit_opcionCorrectaEditar");
        lineEdit_opcionCorrectaEditar->setFont(font);
        lineEdit_opcionCorrectaEditar->setMaxLength(1);

        verticalLayout_opciones->addWidget(lineEdit_opcionCorrectaEditar);


        verticalLayout->addLayout(verticalLayout_opciones);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_10 = new QLabel(VentanaEditarPreguntas);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        horizontalLayout_2->addWidget(label_10);

        lineEdit_categoriaEditar = new QLineEdit(VentanaEditarPreguntas);
        lineEdit_categoriaEditar->setObjectName("lineEdit_categoriaEditar");
        lineEdit_categoriaEditar->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_categoriaEditar);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_editarPregunta = new QPushButton(VentanaEditarPreguntas);
        pushButton_editarPregunta->setObjectName("pushButton_editarPregunta");
        pushButton_editarPregunta->setFont(font);

        horizontalLayout_3->addWidget(pushButton_editarPregunta);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(VentanaEditarPreguntas);

        QMetaObject::connectSlotsByName(VentanaEditarPreguntas);
    } // setupUi

    void retranslateUi(QDialog *VentanaEditarPreguntas)
    {
        VentanaEditarPreguntas->setWindowTitle(QCoreApplication::translate("VentanaEditarPreguntas", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VentanaEditarPreguntas", "Pregunta:", nullptr));
        label_5->setText(QCoreApplication::translate("VentanaEditarPreguntas", "Imagen", nullptr));
        pushButton_buscarImagenEditar->setText(QCoreApplication::translate("VentanaEditarPreguntas", "Buscar", nullptr));
        label_imagenEditar->setText(QString());
        label_6->setText(QCoreApplication::translate("VentanaEditarPreguntas", "Opcion A:", nullptr));
        label_7->setText(QCoreApplication::translate("VentanaEditarPreguntas", "Opcion B:", nullptr));
        label_8->setText(QCoreApplication::translate("VentanaEditarPreguntas", "Opcion C:", nullptr));
        label_9->setText(QCoreApplication::translate("VentanaEditarPreguntas", "Opcion Correcta:", nullptr));
        label_10->setText(QCoreApplication::translate("VentanaEditarPreguntas", "Categoria:", nullptr));
        pushButton_editarPregunta->setText(QCoreApplication::translate("VentanaEditarPreguntas", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaEditarPreguntas: public Ui_VentanaEditarPreguntas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAEDITARPREGUNTAS_H
