/********************************************************************************
** Form generated from reading UI file 'driver_cargosubmission.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVER_CARGOSUBMISSION_H
#define UI_DRIVER_CARGOSUBMISSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Driver_CargoSubmission
{
public:
    QLabel *Delivery_Point;
    QLabel *label;
    QLabel *Conditions;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *Departure_Point;
    QLabel *Total_price;
    QLabel *label_6;
    QLabel *Weight;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *Acceptbutton;

    void setupUi(QWidget *Driver_CargoSubmission)
    {
        if (Driver_CargoSubmission->objectName().isEmpty())
            Driver_CargoSubmission->setObjectName(QString::fromUtf8("Driver_CargoSubmission"));
        Driver_CargoSubmission->resize(750, 593);
        Delivery_Point = new QLabel(Driver_CargoSubmission);
        Delivery_Point->setObjectName(QString::fromUtf8("Delivery_Point"));
        Delivery_Point->setGeometry(QRect(180, 120, 101, 17));
        label = new QLabel(Driver_CargoSubmission);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 80, 161, 17));
        Conditions = new QLabel(Driver_CargoSubmission);
        Conditions->setObjectName(QString::fromUtf8("Conditions"));
        Conditions->setGeometry(QRect(180, 200, 121, 17));
        label_2 = new QLabel(Driver_CargoSubmission);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 120, 111, 17));
        label_3 = new QLabel(Driver_CargoSubmission);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 160, 64, 17));
        Departure_Point = new QLabel(Driver_CargoSubmission);
        Departure_Point->setObjectName(QString::fromUtf8("Departure_Point"));
        Departure_Point->setGeometry(QRect(180, 80, 121, 17));
        Total_price = new QLabel(Driver_CargoSubmission);
        Total_price->setObjectName(QString::fromUtf8("Total_price"));
        Total_price->setGeometry(QRect(180, 240, 141, 17));
        label_6 = new QLabel(Driver_CargoSubmission);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 240, 81, 17));
        Weight = new QLabel(Driver_CargoSubmission);
        Weight->setObjectName(QString::fromUtf8("Weight"));
        Weight->setGeometry(QRect(180, 160, 121, 17));
        label_4 = new QLabel(Driver_CargoSubmission);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 200, 91, 17));
        label_5 = new QLabel(Driver_CargoSubmission);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 10, 311, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        pushButton = new QPushButton(Driver_CargoSubmission);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 370, 181, 61));
        Acceptbutton = new QPushButton(Driver_CargoSubmission);
        Acceptbutton->setObjectName(QString::fromUtf8("Acceptbutton"));
        Acceptbutton->setGeometry(QRect(300, 370, 171, 61));

        retranslateUi(Driver_CargoSubmission);

        QMetaObject::connectSlotsByName(Driver_CargoSubmission);
    } // setupUi

    void retranslateUi(QWidget *Driver_CargoSubmission)
    {
        Driver_CargoSubmission->setWindowTitle(QApplication::translate("Driver_CargoSubmission", "Form", nullptr));
        Delivery_Point->setText(QString());
        label->setText(QApplication::translate("Driver_CargoSubmission", "Departure Point:", nullptr));
        Conditions->setText(QString());
        label_2->setText(QApplication::translate("Driver_CargoSubmission", "Delivery Point:", nullptr));
        label_3->setText(QApplication::translate("Driver_CargoSubmission", "Weight:", nullptr));
        Departure_Point->setText(QString());
        Total_price->setText(QString());
        label_6->setText(QApplication::translate("Driver_CargoSubmission", "Total Price:", nullptr));
        Weight->setText(QString());
        label_4->setText(QApplication::translate("Driver_CargoSubmission", "Conditions:", nullptr));
        label_5->setText(QApplication::translate("Driver_CargoSubmission", "Cargo Order Confirmation", nullptr));
        pushButton->setText(QApplication::translate("Driver_CargoSubmission", "Reject", nullptr));
        Acceptbutton->setText(QApplication::translate("Driver_CargoSubmission", "Accept", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Driver_CargoSubmission: public Ui_Driver_CargoSubmission {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVER_CARGOSUBMISSION_H
