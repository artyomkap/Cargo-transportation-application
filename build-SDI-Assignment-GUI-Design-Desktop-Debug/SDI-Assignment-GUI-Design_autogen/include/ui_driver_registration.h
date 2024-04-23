/********************************************************************************
** Form generated from reading UI file 'driver_registration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVER_REGISTRATION_H
#define UI_DRIVER_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Driver_Registration
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *DFname;
    QLineEdit *DLname;
    QLineEdit *DEmail;
    QLineEdit *DPNumber;
    QLineEdit *DPassword;
    QLineEdit *DHaddress;
    QLineEdit *DBaddress;
    QLineEdit *DNINumber;
    QLineEdit *DLnumber;
    QPushButton *pushButton;
    QLineEdit *TCname;
    QLabel *label_11;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Driver_Registration)
    {
        if (Driver_Registration->objectName().isEmpty())
            Driver_Registration->setObjectName(QString::fromUtf8("Driver_Registration"));
        Driver_Registration->resize(861, 576);
        label = new QLabel(Driver_Registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 30, 311, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        groupBox = new QGroupBox(Driver_Registration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 90, 821, 461));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 131, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 141, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 170, 171, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 230, 181, 17));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 290, 131, 17));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(430, 50, 161, 17));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(430, 110, 231, 17));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(430, 170, 201, 17));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(430, 230, 171, 17));
        DFname = new QLineEdit(groupBox);
        DFname->setObjectName(QString::fromUtf8("DFname"));
        DFname->setGeometry(QRect(30, 70, 361, 25));
        DLname = new QLineEdit(groupBox);
        DLname->setObjectName(QString::fromUtf8("DLname"));
        DLname->setGeometry(QRect(30, 130, 361, 25));
        DEmail = new QLineEdit(groupBox);
        DEmail->setObjectName(QString::fromUtf8("DEmail"));
        DEmail->setGeometry(QRect(30, 190, 361, 25));
        DPNumber = new QLineEdit(groupBox);
        DPNumber->setObjectName(QString::fromUtf8("DPNumber"));
        DPNumber->setGeometry(QRect(30, 250, 361, 25));
        DPassword = new QLineEdit(groupBox);
        DPassword->setObjectName(QString::fromUtf8("DPassword"));
        DPassword->setGeometry(QRect(30, 310, 361, 25));
        DPassword->setEchoMode(QLineEdit::Password);
        DHaddress = new QLineEdit(groupBox);
        DHaddress->setObjectName(QString::fromUtf8("DHaddress"));
        DHaddress->setGeometry(QRect(430, 70, 361, 25));
        DBaddress = new QLineEdit(groupBox);
        DBaddress->setObjectName(QString::fromUtf8("DBaddress"));
        DBaddress->setGeometry(QRect(430, 130, 361, 25));
        DNINumber = new QLineEdit(groupBox);
        DNINumber->setObjectName(QString::fromUtf8("DNINumber"));
        DNINumber->setGeometry(QRect(430, 190, 361, 25));
        DLnumber = new QLineEdit(groupBox);
        DLnumber->setObjectName(QString::fromUtf8("DLnumber"));
        DLnumber->setGeometry(QRect(430, 250, 361, 25));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 370, 141, 51));
        TCname = new QLineEdit(groupBox);
        TCname->setObjectName(QString::fromUtf8("TCname"));
        TCname->setGeometry(QRect(430, 310, 361, 25));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(430, 290, 241, 17));
        pushButton_2 = new QPushButton(Driver_Registration);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 20, 101, 41));

        retranslateUi(Driver_Registration);

        QMetaObject::connectSlotsByName(Driver_Registration);
    } // setupUi

    void retranslateUi(QWidget *Driver_Registration)
    {
        Driver_Registration->setWindowTitle(QApplication::translate("Driver_Registration", "Form", nullptr));
        label->setText(QApplication::translate("Driver_Registration", "Registration for Driver", nullptr));
        groupBox->setTitle(QApplication::translate("Driver_Registration", "Registration for Driver", nullptr));
        label_2->setText(QApplication::translate("Driver_Registration", "First Name", nullptr));
        label_3->setText(QApplication::translate("Driver_Registration", "Last Name", nullptr));
        label_4->setText(QApplication::translate("Driver_Registration", "Email Address", nullptr));
        label_5->setText(QApplication::translate("Driver_Registration", "Phone Number", nullptr));
        label_6->setText(QApplication::translate("Driver_Registration", "Password", nullptr));
        label_7->setText(QApplication::translate("Driver_Registration", "Home Address", nullptr));
        label_8->setText(QApplication::translate("Driver_Registration", "Business Address", nullptr));
        label_9->setText(QApplication::translate("Driver_Registration", "National Insurance Number", nullptr));
        label_10->setText(QApplication::translate("Driver_Registration", "Driving License Number", nullptr));
        pushButton->setText(QApplication::translate("Driver_Registration", "Submit", nullptr));
        label_11->setText(QApplication::translate("Driver_Registration", "Transportation Company Name", nullptr));
        pushButton_2->setText(QApplication::translate("Driver_Registration", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Driver_Registration: public Ui_Driver_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVER_REGISTRATION_H
