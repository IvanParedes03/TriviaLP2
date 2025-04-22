/********************************************************************************
** Form generated from reading UI file 'menumain.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUMAIN_H
#define UI_MENUMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuMain
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *botonEstadisticas;
    QPushButton *botonGestionUsuarios;
    QPushButton *botonGestionPreguntas;

    void setupUi(QMainWindow *menuMain)
    {
        if (menuMain->objectName().isEmpty())
            menuMain->setObjectName("menuMain");
        menuMain->resize(700, 500);
        menuMain->setMinimumSize(QSize(700, 500));
        menuMain->setMaximumSize(QSize(700, 523));
        centralwidget = new QWidget(menuMain);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(700, 500));
        centralwidget->setMaximumSize(QSize(700, 500));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 701, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Sans Sinhala Light")});
        font.setPointSize(25);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 80, 701, 421));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(175, 0, 175, 0);
        pushButton_3 = new QPushButton(verticalLayoutWidget_2);
        pushButton_3->setObjectName("pushButton_3");
        QFont font1;
        font1.setPointSize(15);
        pushButton_3->setFont(font1);

        verticalLayout_2->addWidget(pushButton_3);

        botonEstadisticas = new QPushButton(verticalLayoutWidget_2);
        botonEstadisticas->setObjectName("botonEstadisticas");
        botonEstadisticas->setFont(font1);

        verticalLayout_2->addWidget(botonEstadisticas);

        botonGestionUsuarios = new QPushButton(verticalLayoutWidget_2);
        botonGestionUsuarios->setObjectName("botonGestionUsuarios");
        botonGestionUsuarios->setFont(font1);

        verticalLayout_2->addWidget(botonGestionUsuarios);

        botonGestionPreguntas = new QPushButton(verticalLayoutWidget_2);
        botonGestionPreguntas->setObjectName("botonGestionPreguntas");
        botonGestionPreguntas->setFont(font1);

        verticalLayout_2->addWidget(botonGestionPreguntas);

        menuMain->setCentralWidget(centralwidget);

        retranslateUi(menuMain);

        QMetaObject::connectSlotsByName(menuMain);
    } // setupUi

    void retranslateUi(QMainWindow *menuMain)
    {
        menuMain->setWindowTitle(QCoreApplication::translate("menuMain", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("menuMain", "QUIZ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("menuMain", "Jugar", nullptr));
        botonEstadisticas->setText(QCoreApplication::translate("menuMain", "Estadisticas", nullptr));
        botonGestionUsuarios->setText(QCoreApplication::translate("menuMain", "Gestion de Usuarios", nullptr));
        botonGestionPreguntas->setText(QCoreApplication::translate("menuMain", "Gestion de Preguntas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuMain: public Ui_menuMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUMAIN_H
