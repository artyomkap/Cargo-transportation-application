/********************************************************************************
** Form generated from reading UI file 'driver_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVER_INTERFACE_H
#define UI_DRIVER_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Driver_Interface
{
public:
    QLabel *label;
    QLabel *Driver_Name;
    QPushButton *Driver_Profile;
    QPushButton *Signout_button;
    QPushButton *Lorry_registrate;
    QPushButton *Lorry_update;
    QPushButton *view_cargo_btn;
    QPushButton *Accepted_Cargo;

    void setupUi(QWidget *Driver_Interface)
    {
        if (Driver_Interface->objectName().isEmpty())
            Driver_Interface->setObjectName(QString::fromUtf8("Driver_Interface"));
        Driver_Interface->resize(762, 590);
        label = new QLabel(Driver_Interface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 30, 301, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        Driver_Name = new QLabel(Driver_Interface);
        Driver_Name->setObjectName(QString::fromUtf8("Driver_Name"));
        Driver_Name->setGeometry(QRect(440, 30, 231, 31));
        Driver_Name->setFont(font);
        Driver_Profile = new QPushButton(Driver_Interface);
        Driver_Profile->setObjectName(QString::fromUtf8("Driver_Profile"));
        Driver_Profile->setGeometry(QRect(580, 20, 171, 41));
        Signout_button = new QPushButton(Driver_Interface);
        Signout_button->setObjectName(QString::fromUtf8("Signout_button"));
        Signout_button->setGeometry(QRect(660, 70, 83, 25));
        Lorry_registrate = new QPushButton(Driver_Interface);
        Lorry_registrate->setObjectName(QString::fromUtf8("Lorry_registrate"));
        Lorry_registrate->setGeometry(QRect(50, 160, 151, 61));
        Lorry_update = new QPushButton(Driver_Interface);
        Lorry_update->setObjectName(QString::fromUtf8("Lorry_update"));
        Lorry_update->setGeometry(QRect(50, 250, 151, 61));
        view_cargo_btn = new QPushButton(Driver_Interface);
        view_cargo_btn->setObjectName(QString::fromUtf8("view_cargo_btn"));
        view_cargo_btn->setGeometry(QRect(270, 160, 131, 61));
        Accepted_Cargo = new QPushButton(Driver_Interface);
        Accepted_Cargo->setObjectName(QString::fromUtf8("Accepted_Cargo"));
        Accepted_Cargo->setGeometry(QRect(270, 250, 131, 61));

        retranslateUi(Driver_Interface);

        QMetaObject::connectSlotsByName(Driver_Interface);
    } // setupUi

    void retranslateUi(QWidget *Driver_Interface)
    {
        Driver_Interface->setWindowTitle(QApplication::translate("Driver_Interface", "Form", nullptr));
        label->setText(QApplication::translate("Driver_Interface", "Welcome to Driver Page, ", nullptr));
        Driver_Name->setText(QApplication::translate("Driver_Interface", "TextLabel", nullptr));
        Driver_Profile->setText(QApplication::translate("Driver_Interface", "View Profile", nullptr));
        Signout_button->setText(QApplication::translate("Driver_Interface", "Sign Out", nullptr));
        Lorry_registrate->setText(QApplication::translate("Driver_Interface", "Registrate the Lorry", nullptr));
        Lorry_update->setText(QApplication::translate("Driver_Interface", "Modify Lorry", nullptr));
        view_cargo_btn->setText(QApplication::translate("Driver_Interface", "View The Cargo", nullptr));
        Accepted_Cargo->setText(QApplication::translate("Driver_Interface", "Accepted Cargos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Driver_Interface: public Ui_Driver_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVER_INTERFACE_H
