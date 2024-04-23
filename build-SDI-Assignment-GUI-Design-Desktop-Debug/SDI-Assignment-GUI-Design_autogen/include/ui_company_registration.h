/********************************************************************************
** Form generated from reading UI file 'company_registration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANY_REGISTRATION_H
#define UI_COMPANY_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Company_Registration
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *CName;
    QLineEdit *CAddress;
    QLineEdit *CEmail;
    QLineEdit *CPNumber;
    QLineEdit *CPassword;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Company_Registration)
    {
        if (Company_Registration->objectName().isEmpty())
            Company_Registration->setObjectName(QString::fromUtf8("Company_Registration"));
        Company_Registration->resize(791, 585);
        label = new QLabel(Company_Registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 501, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        groupBox = new QGroupBox(Company_Registration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 100, 371, 441));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 151, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 100, 171, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 160, 131, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 220, 191, 17));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 280, 81, 17));
        CName = new QLineEdit(groupBox);
        CName->setObjectName(QString::fromUtf8("CName"));
        CName->setGeometry(QRect(30, 60, 311, 25));
        CAddress = new QLineEdit(groupBox);
        CAddress->setObjectName(QString::fromUtf8("CAddress"));
        CAddress->setGeometry(QRect(30, 120, 311, 25));
        CEmail = new QLineEdit(groupBox);
        CEmail->setObjectName(QString::fromUtf8("CEmail"));
        CEmail->setGeometry(QRect(30, 180, 311, 25));
        CPNumber = new QLineEdit(groupBox);
        CPNumber->setObjectName(QString::fromUtf8("CPNumber"));
        CPNumber->setGeometry(QRect(30, 240, 311, 25));
        CPassword = new QLineEdit(groupBox);
        CPassword->setObjectName(QString::fromUtf8("CPassword"));
        CPassword->setGeometry(QRect(30, 300, 311, 25));
        CPassword->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 360, 111, 51));
        pushButton_2 = new QPushButton(Company_Registration);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 30, 101, 41));

        retranslateUi(Company_Registration);

        QMetaObject::connectSlotsByName(Company_Registration);
    } // setupUi

    void retranslateUi(QWidget *Company_Registration)
    {
        Company_Registration->setWindowTitle(QApplication::translate("Company_Registration", "Form", nullptr));
        label->setText(QApplication::translate("Company_Registration", "Registration for Transport Company", nullptr));
        groupBox->setTitle(QApplication::translate("Company_Registration", "Registration for Transport Company", nullptr));
        label_2->setText(QApplication::translate("Company_Registration", "Company Name", nullptr));
        label_3->setText(QApplication::translate("Company_Registration", "Company Address", nullptr));
        label_4->setText(QApplication::translate("Company_Registration", "Email Address", nullptr));
        label_5->setText(QApplication::translate("Company_Registration", "Company Phone Number", nullptr));
        label_6->setText(QApplication::translate("Company_Registration", "Password", nullptr));
        pushButton->setText(QApplication::translate("Company_Registration", "Submit", nullptr));
        pushButton_2->setText(QApplication::translate("Company_Registration", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Company_Registration: public Ui_Company_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANY_REGISTRATION_H
