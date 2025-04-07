/********************************************************************************
** Form generated from reading UI file 'ventanalistausuario.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANALISTAUSUARIO_H
#define UI_VENTANALISTAUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaListaUsuario
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *botonListaUsuariosAtras;
    QPushButton *botonListaUsuariosAdelante;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *labelNombreLista;
    QLabel *label_4;
    QLabel *labelAliasLista;
    QSpacerItem *verticalSpacer;
    QPushButton *botonEditarUsuario;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *botonEliminarUsuario;
    QPushButton *botonVolverGestion;

    void setupUi(QDialog *ventanaListaUsuario)
    {
        if (ventanaListaUsuario->objectName().isEmpty())
            ventanaListaUsuario->setObjectName("ventanaListaUsuario");
        ventanaListaUsuario->resize(500, 500);
        ventanaListaUsuario->setMinimumSize(QSize(500, 500));
        ventanaListaUsuario->setMaximumSize(QSize(500, 500));
        label = new QLabel(ventanaListaUsuario);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 501, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        horizontalLayoutWidget = new QWidget(ventanaListaUsuario);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 360, 501, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        botonListaUsuariosAtras = new QPushButton(horizontalLayoutWidget);
        botonListaUsuariosAtras->setObjectName("botonListaUsuariosAtras");
        botonListaUsuariosAtras->setMinimumSize(QSize(100, 35));
        botonListaUsuariosAtras->setMaximumSize(QSize(100, 35));
        QFont font1;
        font1.setPointSize(15);
        botonListaUsuariosAtras->setFont(font1);

        horizontalLayout->addWidget(botonListaUsuariosAtras);

        botonListaUsuariosAdelante = new QPushButton(horizontalLayoutWidget);
        botonListaUsuariosAdelante->setObjectName("botonListaUsuariosAdelante");
        botonListaUsuariosAdelante->setMinimumSize(QSize(100, 35));
        botonListaUsuariosAdelante->setMaximumSize(QSize(100, 35));
        botonListaUsuariosAdelante->setFont(font1);

        horizontalLayout->addWidget(botonListaUsuariosAdelante);

        formLayoutWidget = new QWidget(ventanaListaUsuario);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(0, 60, 501, 301));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(30, 30, 30, 30);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        labelNombreLista = new QLabel(formLayoutWidget);
        labelNombreLista->setObjectName("labelNombreLista");
        labelNombreLista->setMinimumSize(QSize(300, 0));
        labelNombreLista->setMaximumSize(QSize(35, 16777215));
        labelNombreLista->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelNombreLista);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        labelAliasLista = new QLabel(formLayoutWidget);
        labelAliasLista->setObjectName("labelAliasLista");
        labelAliasLista->setMinimumSize(QSize(300, 0));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelAliasLista);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(2, QFormLayout::LabelRole, verticalSpacer);

        botonEditarUsuario = new QPushButton(formLayoutWidget);
        botonEditarUsuario->setObjectName("botonEditarUsuario");
        botonEditarUsuario->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, botonEditarUsuario);

        horizontalLayoutWidget_2 = new QWidget(ventanaListaUsuario);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(-5, 428, 511, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(35);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(50, 0, 50, 0);
        botonEliminarUsuario = new QPushButton(horizontalLayoutWidget_2);
        botonEliminarUsuario->setObjectName("botonEliminarUsuario");
        botonEliminarUsuario->setMinimumSize(QSize(0, 35));
        botonEliminarUsuario->setMaximumSize(QSize(16777215, 35));
        botonEliminarUsuario->setFont(font1);

        horizontalLayout_2->addWidget(botonEliminarUsuario);

        botonVolverGestion = new QPushButton(horizontalLayoutWidget_2);
        botonVolverGestion->setObjectName("botonVolverGestion");
        botonVolverGestion->setMinimumSize(QSize(150, 35));
        botonVolverGestion->setMaximumSize(QSize(150, 35));
        botonVolverGestion->setFont(font1);
        botonVolverGestion->setCursor(QCursor(Qt::CursorShape::CrossCursor));
        botonVolverGestion->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        horizontalLayout_2->addWidget(botonVolverGestion);


        retranslateUi(ventanaListaUsuario);

        QMetaObject::connectSlotsByName(ventanaListaUsuario);
    } // setupUi

    void retranslateUi(QDialog *ventanaListaUsuario)
    {
        ventanaListaUsuario->setWindowTitle(QCoreApplication::translate("ventanaListaUsuario", "Lista de Usuarios", nullptr));
        label->setText(QCoreApplication::translate("ventanaListaUsuario", "Lista de Usuarios", nullptr));
        botonListaUsuariosAtras->setText(QCoreApplication::translate("ventanaListaUsuario", "<---", nullptr));
        botonListaUsuariosAdelante->setText(QCoreApplication::translate("ventanaListaUsuario", "---->", nullptr));
        label_2->setText(QCoreApplication::translate("ventanaListaUsuario", "Nombre:", nullptr));
        labelNombreLista->setText(QString());
        label_4->setText(QCoreApplication::translate("ventanaListaUsuario", "Alias:", nullptr));
        labelAliasLista->setText(QString());
        botonEditarUsuario->setText(QCoreApplication::translate("ventanaListaUsuario", "Editar", nullptr));
        botonEliminarUsuario->setText(QCoreApplication::translate("ventanaListaUsuario", "Eliminar este Usuario", nullptr));
        botonVolverGestion->setText(QCoreApplication::translate("ventanaListaUsuario", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaListaUsuario: public Ui_ventanaListaUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANALISTAUSUARIO_H
