/********************************************************************************
** Form generated from reading UI file 'cargo_registration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARGO_REGISTRATION_H
#define UI_CARGO_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cargo_Registration
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLineEdit *Owner_FName;
    QLabel *label_3;
    QLineEdit *Owner_LName;
    QLabel *label_4;
    QLineEdit *Owner_Email;
    QLabel *label_5;
    QLineEdit *Owner_Phone;
    QLabel *label_6;
    QLineEdit *Owner_Password;
    QLabel *label_7;
    QLineEdit *Owner_HAddress;
    QLabel *label_8;
    QLineEdit *Owner_BAddress;
    QPushButton *pushButton;
    QPushButton *backButton123;

    void setupUi(QWidget *Cargo_Registration)
    {
        if (Cargo_Registration->objectName().isEmpty())
            Cargo_Registration->setObjectName(QString::fromUtf8("Cargo_Registration"));
        Cargo_Registration->resize(821, 607);
        label = new QLabel(Cargo_Registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 30, 391, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        groupBox = new QGroupBox(Cargo_Registration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 80, 741, 491));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 101, 17));
        Owner_FName = new QLineEdit(groupBox);
        Owner_FName->setObjectName(QString::fromUtf8("Owner_FName"));
        Owner_FName->setGeometry(QRect(20, 80, 311, 25));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 101, 17));
        Owner_LName = new QLineEdit(groupBox);
        Owner_LName->setObjectName(QString::fromUtf8("Owner_LName"));
        Owner_LName->setGeometry(QRect(20, 150, 311, 25));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 200, 121, 17));
        Owner_Email = new QLineEdit(groupBox);
        Owner_Email->setObjectName(QString::fromUtf8("Owner_Email"));
        Owner_Email->setGeometry(QRect(20, 220, 311, 25));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 270, 161, 17));
        Owner_Phone = new QLineEdit(groupBox);
        Owner_Phone->setObjectName(QString::fromUtf8("Owner_Phone"));
        Owner_Phone->setGeometry(QRect(20, 290, 311, 25));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 340, 131, 17));
        Owner_Password = new QLineEdit(groupBox);
        Owner_Password->setObjectName(QString::fromUtf8("Owner_Password"));
        Owner_Password->setGeometry(QRect(20, 360, 311, 25));
        Owner_Password->setEchoMode(QLineEdit::Password);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(390, 60, 121, 17));
        Owner_HAddress = new QLineEdit(groupBox);
        Owner_HAddress->setObjectName(QString::fromUtf8("Owner_HAddress"));
        Owner_HAddress->setGeometry(QRect(390, 80, 331, 25));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(390, 130, 121, 17));
        Owner_BAddress = new QLineEdit(groupBox);
        Owner_BAddress->setObjectName(QString::fromUtf8("Owner_BAddress"));
        Owner_BAddress->setGeometry(QRect(390, 150, 331, 25));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 420, 151, 51));
        backButton123 = new QPushButton(Cargo_Registration);
        backButton123->setObjectName(QString::fromUtf8("backButton123"));
        backButton123->setGeometry(QRect(40, 20, 111, 41));

        retranslateUi(Cargo_Registration);

        QMetaObject::connectSlotsByName(Cargo_Registration);
    } // setupUi

    void retranslateUi(QWidget *Cargo_Registration)
    {
        Cargo_Registration->setWindowTitle(QApplication::translate("Cargo_Registration", "Form", nullptr));
        label->setText(QApplication::translate("Cargo_Registration", "Registration for Cargo Owner", nullptr));
        groupBox->setTitle(QApplication::translate("Cargo_Registration", "Registration Form", nullptr));
        label_2->setText(QApplication::translate("Cargo_Registration", "First Name", nullptr));
        label_3->setText(QApplication::translate("Cargo_Registration", "Last Name", nullptr));
        label_4->setText(QApplication::translate("Cargo_Registration", "Email Address", nullptr));
        label_5->setText(QApplication::translate("Cargo_Registration", "Telephone Number", nullptr));
        label_6->setText(QApplication::translate("Cargo_Registration", "Password", nullptr));
        label_7->setText(QApplication::translate("Cargo_Registration", "Home Address", nullptr));
        label_8->setText(QApplication::translate("Cargo_Registration", "Business Address", nullptr));
        pushButton->setText(QApplication::translate("Cargo_Registration", "Submit", nullptr));
        backButton123->setText(QApplication::translate("Cargo_Registration", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cargo_Registration: public Ui_Cargo_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARGO_REGISTRATION_H
