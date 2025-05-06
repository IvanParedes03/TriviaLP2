/********************************************************************************
** Form generated from reading UI file 'ventanalistarcategorias.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANALISTARCATEGORIAS_H
#define UI_VENTANALISTARCATEGORIAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaListarCategorias
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget_listaCategorias;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_borrarCategoriaSeleccionada;

    void setupUi(QWidget *VentanaListarCategorias)
    {
        if (VentanaListarCategorias->objectName().isEmpty())
            VentanaListarCategorias->setObjectName("VentanaListarCategorias");
        VentanaListarCategorias->resize(700, 500);
        VentanaListarCategorias->setMinimumSize(QSize(700, 500));
        VentanaListarCategorias->setMaximumSize(QSize(700, 500));
        verticalLayout = new QVBoxLayout(VentanaListarCategorias);
        verticalLayout->setObjectName("verticalLayout");
        listWidget_listaCategorias = new QListWidget(VentanaListarCategorias);
        listWidget_listaCategorias->setObjectName("listWidget_listaCategorias");
        listWidget_listaCategorias->setMinimumSize(QSize(600, 450));
        listWidget_listaCategorias->setMaximumSize(QSize(690, 450));

        verticalLayout->addWidget(listWidget_listaCategorias);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_borrarCategoriaSeleccionada = new QPushButton(VentanaListarCategorias);
        pushButton_borrarCategoriaSeleccionada->setObjectName("pushButton_borrarCategoriaSeleccionada");

        horizontalLayout->addWidget(pushButton_borrarCategoriaSeleccionada);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VentanaListarCategorias);

        QMetaObject::connectSlotsByName(VentanaListarCategorias);
    } // setupUi

    void retranslateUi(QWidget *VentanaListarCategorias)
    {
        VentanaListarCategorias->setWindowTitle(QCoreApplication::translate("VentanaListarCategorias", "Form", nullptr));
        pushButton_borrarCategoriaSeleccionada->setText(QCoreApplication::translate("VentanaListarCategorias", "Borrar Categoria", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaListarCategorias: public Ui_VentanaListarCategorias {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANALISTARCATEGORIAS_H
