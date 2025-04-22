/********************************************************************************
** Form generated from reading UI file 'ventanausuario.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAUSUARIO_H
#define UI_VENTANAUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaUsuario
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelUsuariosGestion;
    QWidget *formLayoutWidget;
    QFormLayout *titleGestionLayout;
    QLabel *label_2;
    QLineEdit *nombreUsuarioInput;
    QLabel *label;
    QLineEdit *aliasUsuarioInput;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *formGestionLayout;
    QPushButton *botonVolver;
    QPushButton *botonCrearUsuario;
    QPushButton *botonListarUsuarios;

    void setupUi(QDialog *VentanaUsuario)
    {
        if (VentanaUsuario->objectName().isEmpty())
            VentanaUsuario->setObjectName("VentanaUsuario");
        VentanaUsuario->resize(700, 500);
        VentanaUsuario->setMinimumSize(QSize(700, 500));
        VentanaUsuario->setMaximumSize(QSize(700, 500));
        verticalLayoutWidget = new QWidget(VentanaUsuario);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 701, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(214, 0, 0, 0);
        labelUsuariosGestion = new QLabel(verticalLayoutWidget);
        labelUsuariosGestion->setObjectName("labelUsuariosGestion");
        QFont font;
        font.setPointSize(25);
        labelUsuariosGestion->setFont(font);

        verticalLayout->addWidget(labelUsuariosGestion);

        formLayoutWidget = new QWidget(VentanaUsuario);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(0, 90, 701, 295));
        titleGestionLayout = new QFormLayout(formLayoutWidget);
        titleGestionLayout->setObjectName("titleGestionLayout");
        titleGestionLayout->setHorizontalSpacing(25);
        titleGestionLayout->setVerticalSpacing(75);
        titleGestionLayout->setContentsMargins(150, 75, 150, 75);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);

        titleGestionLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        nombreUsuarioInput = new QLineEdit(formLayoutWidget);
        nombreUsuarioInput->setObjectName("nombreUsuarioInput");
        nombreUsuarioInput->setMinimumSize(QSize(0, 35));
        nombreUsuarioInput->setFont(font1);

        titleGestionLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, nombreUsuarioInput);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        label->setFont(font1);

        titleGestionLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        aliasUsuarioInput = new QLineEdit(formLayoutWidget);
        aliasUsuarioInput->setObjectName("aliasUsuarioInput");
        aliasUsuarioInput->setMinimumSize(QSize(0, 35));
        aliasUsuarioInput->setFont(font1);

        titleGestionLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, aliasUsuarioInput);

        horizontalLayoutWidget = new QWidget(VentanaUsuario);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 380, 701, 121));
        formGestionLayout = new QHBoxLayout(horizontalLayoutWidget);
        formGestionLayout->setSpacing(30);
        formGestionLayout->setObjectName("formGestionLayout");
        formGestionLayout->setContentsMargins(50, 0, 50, 0);
        botonVolver = new QPushButton(horizontalLayoutWidget);
        botonVolver->setObjectName("botonVolver");
        botonVolver->setMinimumSize(QSize(150, 35));
        botonVolver->setMaximumSize(QSize(150, 35));
        botonVolver->setFont(font1);

        formGestionLayout->addWidget(botonVolver);

        botonCrearUsuario = new QPushButton(horizontalLayoutWidget);
        botonCrearUsuario->setObjectName("botonCrearUsuario");
        botonCrearUsuario->setMinimumSize(QSize(150, 25));
        botonCrearUsuario->setMaximumSize(QSize(150, 35));
        botonCrearUsuario->setFont(font1);

        formGestionLayout->addWidget(botonCrearUsuario);

        botonListarUsuarios = new QPushButton(horizontalLayoutWidget);
        botonListarUsuarios->setObjectName("botonListarUsuarios");
        botonListarUsuarios->setMinimumSize(QSize(150, 35));
        botonListarUsuarios->setMaximumSize(QSize(150, 35));
        botonListarUsuarios->setFont(font1);

        formGestionLayout->addWidget(botonListarUsuarios);


        retranslateUi(VentanaUsuario);

        QMetaObject::connectSlotsByName(VentanaUsuario);
    } // setupUi

    void retranslateUi(QDialog *VentanaUsuario)
    {
        VentanaUsuario->setWindowTitle(QCoreApplication::translate("VentanaUsuario", "Gestion de Usuarios", nullptr));
        labelUsuariosGestion->setText(QCoreApplication::translate("VentanaUsuario", "Gestion de Usuarios", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaUsuario", "Nombre:", nullptr));
        label->setText(QCoreApplication::translate("VentanaUsuario", "Alias:", nullptr));
        botonVolver->setText(QCoreApplication::translate("VentanaUsuario", "Volver", nullptr));
        botonCrearUsuario->setText(QCoreApplication::translate("VentanaUsuario", "Crear Usuario", nullptr));
        botonListarUsuarios->setText(QCoreApplication::translate("VentanaUsuario", "Listar Usuario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaUsuario: public Ui_VentanaUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAUSUARIO_H
