/********************************************************************************
** Form generated from reading UI file 'ventanajuego.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAJUEGO_H
#define UI_VENTANAJUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaJuego
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelPregunta;
    QLabel *label_imagen;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *labelCategoria;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QPushButton *opcionA;
    QPushButton *opcionB;
    QPushButton *opcionC;
    QWidget *formLayout;
    QWidget *formLayoutWidget_2;
    QFormLayout *formInfo;
    QLabel *label;
    QLabel *nroPregunta;
    QLabel *label_3;
    QLabel *turno;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *aliasP1;
    QLabel *puntajeP1;
    QVBoxLayout *verticalLayout_3;
    QLabel *aliasP2;
    QLabel *puntajeP2;

    void setupUi(QDialog *VentanaJuego)
    {
        if (VentanaJuego->objectName().isEmpty())
            VentanaJuego->setObjectName("VentanaJuego");
        VentanaJuego->resize(800, 600);
        VentanaJuego->setMinimumSize(QSize(600, 600));
        VentanaJuego->setMaximumSize(QSize(800, 600));
        verticalLayout_5 = new QVBoxLayout(VentanaJuego);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        labelPregunta = new QLabel(VentanaJuego);
        labelPregunta->setObjectName("labelPregunta");
        QFont font;
        font.setPointSize(15);
        labelPregunta->setFont(font);
        labelPregunta->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(labelPregunta);

        label_imagen = new QLabel(VentanaJuego);
        label_imagen->setObjectName("label_imagen");
        label_imagen->setMinimumSize(QSize(300, 200));
        label_imagen->setMaximumSize(QSize(300, 200));
        label_imagen->setScaledContents(false);

        verticalLayout_4->addWidget(label_imagen);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(VentanaJuego);
        label_5->setObjectName("label_5");
        QFont font1;
        font1.setPointSize(20);
        label_5->setFont(font1);

        horizontalLayout->addWidget(label_5);

        labelCategoria = new QLabel(VentanaJuego);
        labelCategoria->setObjectName("labelCategoria");
        labelCategoria->setFont(font1);

        horizontalLayout->addWidget(labelCategoria);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(25, -1, 25, -1);
        opcionA = new QPushButton(VentanaJuego);
        opcionA->setObjectName("opcionA");

        verticalLayout->addWidget(opcionA);

        opcionB = new QPushButton(VentanaJuego);
        opcionB->setObjectName("opcionB");

        verticalLayout->addWidget(opcionB);

        opcionC = new QPushButton(VentanaJuego);
        opcionC->setObjectName("opcionC");

        verticalLayout->addWidget(opcionC);


        horizontalLayout_4->addLayout(verticalLayout);

        formLayout = new QWidget(VentanaJuego);
        formLayout->setObjectName("formLayout");
        formLayoutWidget_2 = new QWidget(formLayout);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(0, 0, 281, 166));
        formInfo = new QFormLayout(formLayoutWidget_2);
        formInfo->setObjectName("formInfo");
        formInfo->setHorizontalSpacing(35);
        formInfo->setVerticalSpacing(50);
        formInfo->setContentsMargins(15, 25, 0, 25);
        label = new QLabel(formLayoutWidget_2);
        label->setObjectName("label");
        label->setFont(font);

        formInfo->setWidget(0, QFormLayout::LabelRole, label);

        nroPregunta = new QLabel(formLayoutWidget_2);
        nroPregunta->setObjectName("nroPregunta");
        nroPregunta->setFont(font);

        formInfo->setWidget(0, QFormLayout::FieldRole, nroPregunta);

        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formInfo->setWidget(1, QFormLayout::LabelRole, label_3);

        turno = new QLabel(formLayoutWidget_2);
        turno->setObjectName("turno");
        turno->setFont(font);

        formInfo->setWidget(1, QFormLayout::FieldRole, turno);


        horizontalLayout_4->addWidget(formLayout);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, -1, 15);
        aliasP1 = new QLabel(VentanaJuego);
        aliasP1->setObjectName("aliasP1");
        aliasP1->setFont(font);
        aliasP1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(aliasP1);

        puntajeP1 = new QLabel(VentanaJuego);
        puntajeP1->setObjectName("puntajeP1");
        puntajeP1->setFont(font);
        puntajeP1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(puntajeP1);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, -1, 0, 15);
        aliasP2 = new QLabel(VentanaJuego);
        aliasP2->setObjectName("aliasP2");
        aliasP2->setFont(font);
        aliasP2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(aliasP2);

        puntajeP2 = new QLabel(VentanaJuego);
        puntajeP2->setObjectName("puntajeP2");
        puntajeP2->setFont(font);
        puntajeP2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(puntajeP2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_3);


        retranslateUi(VentanaJuego);

        QMetaObject::connectSlotsByName(VentanaJuego);
    } // setupUi

    void retranslateUi(QDialog *VentanaJuego)
    {
        VentanaJuego->setWindowTitle(QCoreApplication::translate("VentanaJuego", "Dialog", nullptr));
        labelPregunta->setText(QString());
        label_imagen->setText(QString());
        label_5->setText(QCoreApplication::translate("VentanaJuego", "Categoria:", nullptr));
        labelCategoria->setText(QString());
        opcionA->setText(QString());
        opcionB->setText(QString());
        opcionC->setText(QString());
        label->setText(QCoreApplication::translate("VentanaJuego", "Pregunta Nro", nullptr));
        nroPregunta->setText(QString());
        label_3->setText(QCoreApplication::translate("VentanaJuego", "Turno", nullptr));
        turno->setText(QString());
        aliasP1->setText(QString());
        puntajeP1->setText(QString());
        aliasP2->setText(QString());
        puntajeP2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VentanaJuego: public Ui_VentanaJuego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAJUEGO_H
