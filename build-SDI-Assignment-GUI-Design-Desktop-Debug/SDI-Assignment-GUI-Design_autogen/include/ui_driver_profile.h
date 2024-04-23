/********************************************************************************
** Form generated from reading UI file 'driver_profile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVER_PROFILE_H
#define UI_DRIVER_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Driver_Profile
{
public:
    QLabel *label;
    QLineEdit *Driver_FName;
    QLineEdit *Driver_LName;
    QLineEdit *Driver_Email;
    QLineEdit *Driver_PNumber;
    QPushButton *Update_FName;
    QPushButton *Update_LName;
    QPushButton *Update_Email;
    QPushButton *Update_PNumber;
    QLineEdit *Driver_NINumber;
    QLineEdit *Driver_DLNumber;
    QPushButton *Update_NINumber;
    QPushButton *Update_DLNumber;
    QPushButton *Return_button;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *Driver_Profile)
    {
        if (Driver_Profile->objectName().isEmpty())
            Driver_Profile->setObjectName(QString::fromUtf8("Driver_Profile"));
        Driver_Profile->resize(781, 548);
        label = new QLabel(Driver_Profile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 30, 171, 17));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        Driver_FName = new QLineEdit(Driver_Profile);
        Driver_FName->setObjectName(QString::fromUtf8("Driver_FName"));
        Driver_FName->setGeometry(QRect(40, 130, 491, 31));
        Driver_LName = new QLineEdit(Driver_Profile);
        Driver_LName->setObjectName(QString::fromUtf8("Driver_LName"));
        Driver_LName->setGeometry(QRect(40, 190, 491, 31));
        Driver_Email = new QLineEdit(Driver_Profile);
        Driver_Email->setObjectName(QString::fromUtf8("Driver_Email"));
        Driver_Email->setGeometry(QRect(40, 250, 491, 31));
        Driver_PNumber = new QLineEdit(Driver_Profile);
        Driver_PNumber->setObjectName(QString::fromUtf8("Driver_PNumber"));
        Driver_PNumber->setGeometry(QRect(40, 310, 491, 31));
        Update_FName = new QPushButton(Driver_Profile);
        Update_FName->setObjectName(QString::fromUtf8("Update_FName"));
        Update_FName->setGeometry(QRect(560, 130, 121, 31));
        Update_LName = new QPushButton(Driver_Profile);
        Update_LName->setObjectName(QString::fromUtf8("Update_LName"));
        Update_LName->setGeometry(QRect(560, 190, 121, 31));
        Update_Email = new QPushButton(Driver_Profile);
        Update_Email->setObjectName(QString::fromUtf8("Update_Email"));
        Update_Email->setGeometry(QRect(560, 250, 121, 31));
        Update_PNumber = new QPushButton(Driver_Profile);
        Update_PNumber->setObjectName(QString::fromUtf8("Update_PNumber"));
        Update_PNumber->setGeometry(QRect(560, 310, 121, 31));
        Driver_NINumber = new QLineEdit(Driver_Profile);
        Driver_NINumber->setObjectName(QString::fromUtf8("Driver_NINumber"));
        Driver_NINumber->setGeometry(QRect(40, 370, 491, 31));
        Driver_DLNumber = new QLineEdit(Driver_Profile);
        Driver_DLNumber->setObjectName(QString::fromUtf8("Driver_DLNumber"));
        Driver_DLNumber->setGeometry(QRect(40, 430, 491, 31));
        Update_NINumber = new QPushButton(Driver_Profile);
        Update_NINumber->setObjectName(QString::fromUtf8("Update_NINumber"));
        Update_NINumber->setGeometry(QRect(560, 370, 121, 31));
        Update_DLNumber = new QPushButton(Driver_Profile);
        Update_DLNumber->setObjectName(QString::fromUtf8("Update_DLNumber"));
        Update_DLNumber->setGeometry(QRect(560, 430, 121, 31));
        Return_button = new QPushButton(Driver_Profile);
        Return_button->setObjectName(QString::fromUtf8("Return_button"));
        Return_button->setGeometry(QRect(40, 20, 121, 31));
        label_2 = new QLabel(Driver_Profile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 110, 131, 17));
        label_3 = new QLabel(Driver_Profile);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 170, 81, 17));
        label_4 = new QLabel(Driver_Profile);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 230, 64, 17));
        label_5 = new QLabel(Driver_Profile);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 290, 111, 17));
        label_6 = new QLabel(Driver_Profile);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 350, 241, 17));
        label_7 = new QLabel(Driver_Profile);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 410, 171, 17));

        retranslateUi(Driver_Profile);

        QMetaObject::connectSlotsByName(Driver_Profile);
    } // setupUi

    void retranslateUi(QWidget *Driver_Profile)
    {
        Driver_Profile->setWindowTitle(QApplication::translate("Driver_Profile", "Form", nullptr));
        label->setText(QApplication::translate("Driver_Profile", "Driver Profile", nullptr));
        Update_FName->setText(QApplication::translate("Driver_Profile", "Update", nullptr));
        Update_LName->setText(QApplication::translate("Driver_Profile", "Update", nullptr));
        Update_Email->setText(QApplication::translate("Driver_Profile", "Update", nullptr));
        Update_PNumber->setText(QApplication::translate("Driver_Profile", "Update", nullptr));
        Update_NINumber->setText(QApplication::translate("Driver_Profile", "Update", nullptr));
        Update_DLNumber->setText(QApplication::translate("Driver_Profile", "Update", nullptr));
        Return_button->setText(QApplication::translate("Driver_Profile", "Return", nullptr));
        label_2->setText(QApplication::translate("Driver_Profile", "First Name", nullptr));
        label_3->setText(QApplication::translate("Driver_Profile", "Last Name", nullptr));
        label_4->setText(QApplication::translate("Driver_Profile", "Email", nullptr));
        label_5->setText(QApplication::translate("Driver_Profile", "Phone Number", nullptr));
        label_6->setText(QApplication::translate("Driver_Profile", "National Insurance Number", nullptr));
        label_7->setText(QApplication::translate("Driver_Profile", "Driving License Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Driver_Profile: public Ui_Driver_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVER_PROFILE_H
