/********************************************************************************
** Form generated from reading UI file 'ventanaeditarcategorias.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAEDITARCATEGORIAS_H
#define UI_VENTANAEDITARCATEGORIAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaEditarCategorias
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget_listaCategorias;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_borrarCategoriaSeleccionada;

    void setupUi(QWidget *VentanaEditarCategorias)
    {
        if (VentanaEditarCategorias->objectName().isEmpty())
            VentanaEditarCategorias->setObjectName("VentanaEditarCategorias");
        VentanaEditarCategorias->resize(700, 500);
        VentanaEditarCategorias->setMinimumSize(QSize(700, 500));
        VentanaEditarCategorias->setMaximumSize(QSize(700, 500));
        verticalLayout = new QVBoxLayout(VentanaEditarCategorias);
        verticalLayout->setObjectName("verticalLayout");
        listWidget_listaCategorias = new QListWidget(VentanaEditarCategorias);
        listWidget_listaCategorias->setObjectName("listWidget_listaCategorias");
        listWidget_listaCategorias->setMinimumSize(QSize(600, 450));
        listWidget_listaCategorias->setMaximumSize(QSize(690, 450));

        verticalLayout->addWidget(listWidget_listaCategorias);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_borrarCategoriaSeleccionada = new QPushButton(VentanaEditarCategorias);
        pushButton_borrarCategoriaSeleccionada->setObjectName("pushButton_borrarCategoriaSeleccionada");

        horizontalLayout->addWidget(pushButton_borrarCategoriaSeleccionada);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VentanaEditarCategorias);

        QMetaObject::connectSlotsByName(VentanaEditarCategorias);
    } // setupUi

    void retranslateUi(QWidget *VentanaEditarCategorias)
    {
        VentanaEditarCategorias->setWindowTitle(QCoreApplication::translate("VentanaEditarCategorias", "Form", nullptr));
        pushButton_borrarCategoriaSeleccionada->setText(QCoreApplication::translate("VentanaEditarCategorias", "Borrar Categoria", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaEditarCategorias: public Ui_VentanaEditarCategorias {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAEDITARCATEGORIAS_H
