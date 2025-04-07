/********************************************************************************
** Form generated from reading UI file 'ventanaeditarusuario.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAEDITARUSUARIO_H
#define UI_VENTANAEDITARUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaEditarUsuario
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *inputEditarNombre;
    QLineEdit *inputEditarAlias;
    QSpacerItem *verticalSpacer;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *botonVolverDestroy;
    QPushButton *botonGuardarEdicion;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *VentanaEditarUsuario)
    {
        if (VentanaEditarUsuario->objectName().isEmpty())
            VentanaEditarUsuario->setObjectName("VentanaEditarUsuario");
        VentanaEditarUsuario->resize(300, 300);
        VentanaEditarUsuario->setMinimumSize(QSize(300, 300));
        VentanaEditarUsuario->setMaximumSize(QSize(300, 300));
        formLayoutWidget = new QWidget(VentanaEditarUsuario);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(0, 50, 301, 191));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(25, 40, 25, 40);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        inputEditarNombre = new QLineEdit(formLayoutWidget);
        inputEditarNombre->setObjectName("inputEditarNombre");

        formLayout->setWidget(0, QFormLayout::FieldRole, inputEditarNombre);

        inputEditarAlias = new QLineEdit(formLayoutWidget);
        inputEditarAlias->setObjectName("inputEditarAlias");

        formLayout->setWidget(2, QFormLayout::FieldRole, inputEditarAlias);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        horizontalLayoutWidget = new QWidget(VentanaEditarUsuario);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 240, 301, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(25);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(25, 0, 25, 0);
        botonVolverDestroy = new QPushButton(horizontalLayoutWidget);
        botonVolverDestroy->setObjectName("botonVolverDestroy");

        horizontalLayout->addWidget(botonVolverDestroy);

        botonGuardarEdicion = new QPushButton(horizontalLayoutWidget);
        botonGuardarEdicion->setObjectName("botonGuardarEdicion");

        horizontalLayout->addWidget(botonGuardarEdicion);

        verticalLayoutWidget = new QWidget(VentanaEditarUsuario);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(-1, 0, 301, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(VentanaEditarUsuario);

        QMetaObject::connectSlotsByName(VentanaEditarUsuario);
    } // setupUi

    void retranslateUi(QDialog *VentanaEditarUsuario)
    {
        VentanaEditarUsuario->setWindowTitle(QCoreApplication::translate("VentanaEditarUsuario", "Editar Usuario", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaEditarUsuario", "Nombre: ", nullptr));
        label_3->setText(QCoreApplication::translate("VentanaEditarUsuario", "Alias:", nullptr));
        botonVolverDestroy->setText(QCoreApplication::translate("VentanaEditarUsuario", "Volver", nullptr));
        botonGuardarEdicion->setText(QCoreApplication::translate("VentanaEditarUsuario", "Guardar", nullptr));
        label->setText(QCoreApplication::translate("VentanaEditarUsuario", "Editar Usuario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaEditarUsuario: public Ui_VentanaEditarUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAEDITARUSUARIO_H
