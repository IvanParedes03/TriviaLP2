/********************************************************************************
** Form generated from reading UI file 'estadisticas.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTADISTICAS_H
#define UI_ESTADISTICAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_estadisticas
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tablaEstadisticas;

    void setupUi(QDialog *estadisticas)
    {
        if (estadisticas->objectName().isEmpty())
            estadisticas->setObjectName("estadisticas");
        estadisticas->resize(400, 500);
        estadisticas->setMinimumSize(QSize(400, 500));
        estadisticas->setMaximumSize(QSize(400, 500));
        verticalLayoutWidget = new QWidget(estadisticas);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 401, 71));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        tablaEstadisticas = new QTableWidget(estadisticas);
        tablaEstadisticas->setObjectName("tablaEstadisticas");
        tablaEstadisticas->setGeometry(QRect(15, 80, 371, 401));

        retranslateUi(estadisticas);

        QMetaObject::connectSlotsByName(estadisticas);
    } // setupUi

    void retranslateUi(QDialog *estadisticas)
    {
        estadisticas->setWindowTitle(QCoreApplication::translate("estadisticas", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("estadisticas", "Ranking de puntajes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class estadisticas: public Ui_estadisticas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTADISTICAS_H
