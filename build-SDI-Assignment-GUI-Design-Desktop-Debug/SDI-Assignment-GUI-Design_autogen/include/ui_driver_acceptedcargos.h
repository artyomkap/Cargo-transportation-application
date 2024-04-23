/********************************************************************************
** Form generated from reading UI file 'driver_acceptedcargos.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVER_ACCEPTEDCARGOS_H
#define UI_DRIVER_ACCEPTEDCARGOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Driver_AcceptedCargos
{
public:
    QLabel *label;
    QTableView *tableView;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *label_2;
    QComboBox *Cargo_Status;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Driver_AcceptedCargos)
    {
        if (Driver_AcceptedCargos->objectName().isEmpty())
            Driver_AcceptedCargos->setObjectName(QString::fromUtf8("Driver_AcceptedCargos"));
        Driver_AcceptedCargos->resize(713, 559);
        label = new QLabel(Driver_AcceptedCargos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 10, 241, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableView = new QTableView(Driver_AcceptedCargos);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 70, 651, 192));
        pushButton = new QPushButton(Driver_AcceptedCargos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 83, 25));
        groupBox = new QGroupBox(Driver_AcceptedCargos);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(220, 270, 271, 271));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 131, 17));
        Cargo_Status = new QComboBox(groupBox);
        Cargo_Status->addItem(QString());
        Cargo_Status->addItem(QString());
        Cargo_Status->addItem(QString());
        Cargo_Status->setObjectName(QString::fromUtf8("Cargo_Status"));
        Cargo_Status->setGeometry(QRect(20, 60, 231, 31));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 140, 131, 61));

        retranslateUi(Driver_AcceptedCargos);

        QMetaObject::connectSlotsByName(Driver_AcceptedCargos);
    } // setupUi

    void retranslateUi(QWidget *Driver_AcceptedCargos)
    {
        Driver_AcceptedCargos->setWindowTitle(QApplication::translate("Driver_AcceptedCargos", "Form", nullptr));
        label->setText(QApplication::translate("Driver_AcceptedCargos", "Accepted Cargos", nullptr));
        pushButton->setText(QApplication::translate("Driver_AcceptedCargos", "Return", nullptr));
        groupBox->setTitle(QApplication::translate("Driver_AcceptedCargos", "Change status of cargo", nullptr));
        label_2->setText(QApplication::translate("Driver_AcceptedCargos", "Change the status:", nullptr));
        Cargo_Status->setItemText(0, QApplication::translate("Driver_AcceptedCargos", "Loading", nullptr));
        Cargo_Status->setItemText(1, QApplication::translate("Driver_AcceptedCargos", "On road", nullptr));
        Cargo_Status->setItemText(2, QApplication::translate("Driver_AcceptedCargos", "Delivered", nullptr));

        pushButton_2->setText(QApplication::translate("Driver_AcceptedCargos", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Driver_AcceptedCargos: public Ui_Driver_AcceptedCargos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVER_ACCEPTEDCARGOS_H
