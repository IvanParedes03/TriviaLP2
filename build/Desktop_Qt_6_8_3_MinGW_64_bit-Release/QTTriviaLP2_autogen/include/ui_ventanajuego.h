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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VentanaJuego
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *layoutPreguntaImagen;
    QLabel *labelPregunta;
    QLabel *label_imagen;
    QVBoxLayout *verticalLayout;
    QPushButton *opcionA;
    QPushButton *opcionB;
    QPushButton *opcionC;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *nroPregunta;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *turno;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *labelCategoria;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *aliasP1;
    QLabel *aliasP2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *puntajeP1;
    QLabel *puntajeP2;

    void setupUi(QDialog *VentanaJuego)
    {
        if (VentanaJuego->objectName().isEmpty())
            VentanaJuego->setObjectName("VentanaJuego");
        VentanaJuego->resize(700, 500);
        VentanaJuego->setMinimumSize(QSize(700, 500));
        VentanaJuego->setMaximumSize(QSize(700, 500));
        verticalLayout_4 = new QVBoxLayout(VentanaJuego);
        verticalLayout_4->setObjectName("verticalLayout_4");
        layoutPreguntaImagen = new QVBoxLayout();
        layoutPreguntaImagen->setObjectName("layoutPreguntaImagen");
        layoutPreguntaImagen->setContentsMargins(0, -1, -1, -1);
        labelPregunta = new QLabel(VentanaJuego);
        labelPregunta->setObjectName("labelPregunta");
        labelPregunta->setMaximumSize(QSize(16777215, 70));
        QFont font;
        font.setPointSize(15);
        labelPregunta->setFont(font);
        labelPregunta->setScaledContents(true);
        labelPregunta->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labelPregunta->setWordWrap(true);

        layoutPreguntaImagen->addWidget(labelPregunta);

        label_imagen = new QLabel(VentanaJuego);
        label_imagen->setObjectName("label_imagen");
        label_imagen->setMaximumSize(QSize(16777215, 300));
        label_imagen->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_imagen->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_imagen->setScaledContents(true);

        layoutPreguntaImagen->addWidget(label_imagen);


        verticalLayout_4->addLayout(layoutPreguntaImagen);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        opcionA = new QPushButton(VentanaJuego);
        opcionA->setObjectName("opcionA");
        QFont font1;
        font1.setPointSize(10);
        opcionA->setFont(font1);

        verticalLayout->addWidget(opcionA);

        opcionB = new QPushButton(VentanaJuego);
        opcionB->setObjectName("opcionB");
        opcionB->setFont(font1);

        verticalLayout->addWidget(opcionB);

        opcionC = new QPushButton(VentanaJuego);
        opcionC->setObjectName("opcionC");
        opcionC->setFont(font1);

        verticalLayout->addWidget(opcionC);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(VentanaJuego);
        label->setObjectName("label");
        label->setMaximumSize(QSize(200, 100));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        nroPregunta = new QLabel(VentanaJuego);
        nroPregunta->setObjectName("nroPregunta");
        nroPregunta->setFont(font);

        horizontalLayout_2->addWidget(nroPregunta);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(VentanaJuego);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(90, 100));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        turno = new QLabel(VentanaJuego);
        turno->setObjectName("turno");
        turno->setFont(font);

        horizontalLayout_3->addWidget(turno);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(VentanaJuego);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(100, 20));
        QFont font2;
        font2.setPointSize(9);
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_5);

        labelCategoria = new QLabel(VentanaJuego);
        labelCategoria->setObjectName("labelCategoria");
        labelCategoria->setMaximumSize(QSize(300, 200));
        labelCategoria->setFont(font2);
        labelCategoria->setScaledContents(true);
        labelCategoria->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labelCategoria->setWordWrap(true);

        horizontalLayout->addWidget(labelCategoria);


        horizontalLayout_6->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        aliasP1 = new QLabel(VentanaJuego);
        aliasP1->setObjectName("aliasP1");
        aliasP1->setFont(font);
        aliasP1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(aliasP1);

        aliasP2 = new QLabel(VentanaJuego);
        aliasP2->setObjectName("aliasP2");
        aliasP2->setFont(font);
        aliasP2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(aliasP2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        puntajeP1 = new QLabel(VentanaJuego);
        puntajeP1->setObjectName("puntajeP1");
        puntajeP1->setFont(font);
        puntajeP1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(puntajeP1);

        puntajeP2 = new QLabel(VentanaJuego);
        puntajeP2->setObjectName("puntajeP2");
        puntajeP2->setFont(font);
        puntajeP2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(puntajeP2);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_6);


        retranslateUi(VentanaJuego);

        QMetaObject::connectSlotsByName(VentanaJuego);
    } // setupUi

    void retranslateUi(QDialog *VentanaJuego)
    {
        VentanaJuego->setWindowTitle(QCoreApplication::translate("VentanaJuego", "Dialog", nullptr));
        labelPregunta->setText(QString());
        label_imagen->setText(QString());
        opcionA->setText(QString());
        opcionB->setText(QString());
        opcionC->setText(QString());
        label->setText(QCoreApplication::translate("VentanaJuego", "Pregunta Nro:", nullptr));
        nroPregunta->setText(QString());
        label_3->setText(QCoreApplication::translate("VentanaJuego", "Turno:", nullptr));
        turno->setText(QString());
        label_5->setText(QCoreApplication::translate("VentanaJuego", "Categoria:", nullptr));
        labelCategoria->setText(QString());
        aliasP1->setText(QString());
        aliasP2->setText(QString());
        puntajeP1->setText(QString());
        puntajeP2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VentanaJuego: public Ui_VentanaJuego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAJUEGO_H
