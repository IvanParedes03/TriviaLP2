/********************************************************************************
** Form generated from reading UI file 'configjuego.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGJUEGO_H
#define UI_CONFIGJUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_configJuego
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QComboBox *comboP1;
    QLabel *label_3;
    QComboBox *comboP2;
    QLabel *label_2;
    QComboBox *comboCat;
    QCheckBox *multiCheck;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *botonVolver;
    QPushButton *botonJugar;

    void setupUi(QDialog *configJuego)
    {
        if (configJuego->objectName().isEmpty())
            configJuego->setObjectName("configJuego");
        configJuego->resize(500, 500);
        configJuego->setMinimumSize(QSize(500, 500));
        configJuego->setMaximumSize(QSize(500, 500));
        label = new QLabel(configJuego);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 30, 381, 51));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        formLayoutWidget = new QWidget(configJuego);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(0, 110, 501, 321));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignmentFlag::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        formLayout->setHorizontalSpacing(50);
        formLayout->setVerticalSpacing(35);
        formLayout->setContentsMargins(0, 25, 50, 15);
        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setPointSize(15);
        label_4->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        comboP1 = new QComboBox(formLayoutWidget);
        comboP1->setObjectName("comboP1");
        comboP1->setMinimumSize(QSize(150, 35));
        comboP1->setMaximumSize(QSize(150, 35));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboP1);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        comboP2 = new QComboBox(formLayoutWidget);
        comboP2->setObjectName("comboP2");
        comboP2->setMinimumSize(QSize(150, 35));
        comboP2->setMaximumSize(QSize(150, 35));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboP2);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        comboCat = new QComboBox(formLayoutWidget);
        comboCat->setObjectName("comboCat");
        comboCat->setMinimumSize(QSize(150, 35));
        comboCat->setMaximumSize(QSize(150, 35));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboCat);

        multiCheck = new QCheckBox(formLayoutWidget);
        multiCheck->setObjectName("multiCheck");
        multiCheck->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, multiCheck);

        horizontalLayoutWidget = new QWidget(configJuego);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 430, 501, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(50, 0, 50, 0);
        botonVolver = new QPushButton(horizontalLayoutWidget);
        botonVolver->setObjectName("botonVolver");
        botonVolver->setFont(font1);

        horizontalLayout->addWidget(botonVolver);

        botonJugar = new QPushButton(horizontalLayoutWidget);
        botonJugar->setObjectName("botonJugar");
        botonJugar->setFont(font1);

        horizontalLayout->addWidget(botonJugar);


        retranslateUi(configJuego);

        QMetaObject::connectSlotsByName(configJuego);
    } // setupUi

    void retranslateUi(QDialog *configJuego)
    {
        configJuego->setWindowTitle(QCoreApplication::translate("configJuego", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("configJuego", "Configuracion de Juego", nullptr));
        label_4->setText(QCoreApplication::translate("configJuego", "Jugador 1", nullptr));
        label_3->setText(QCoreApplication::translate("configJuego", "Jugador 2", nullptr));
        label_2->setText(QCoreApplication::translate("configJuego", "Categoria", nullptr));
        multiCheck->setText(QCoreApplication::translate("configJuego", "Multijugador", nullptr));
        botonVolver->setText(QCoreApplication::translate("configJuego", "Volver", nullptr));
        botonJugar->setText(QCoreApplication::translate("configJuego", "Jugar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class configJuego: public Ui_configJuego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGJUEGO_H
