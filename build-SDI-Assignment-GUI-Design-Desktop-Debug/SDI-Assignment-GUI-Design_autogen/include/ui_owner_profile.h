/********************************************************************************
** Form generated from reading UI file 'owner_profile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNER_PROFILE_H
#define UI_OWNER_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Owner_Profile
{
public:
    QLabel *label;
    QLineEdit *Owner_Fname;
    QLabel *label_2;
    QLineEdit *Owner_Lname;
    QLabel *label_3;
    QLineEdit *Owner_Email;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *Owner_Phone;
    QPushButton *Update_Name;
    QPushButton *Update_Surname;
    QPushButton *Update_email;
    QPushButton *Update_Phone;
    QPushButton *Return_button;

    void setupUi(QWidget *Owner_Profile)
    {
        if (Owner_Profile->objectName().isEmpty())
            Owner_Profile->setObjectName(QString::fromUtf8("Owner_Profile"));
        Owner_Profile->resize(769, 603);
        label = new QLabel(Owner_Profile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 30, 161, 17));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        Owner_Fname = new QLineEdit(Owner_Profile);
        Owner_Fname->setObjectName(QString::fromUtf8("Owner_Fname"));
        Owner_Fname->setGeometry(QRect(30, 150, 331, 31));
        label_2 = new QLabel(Owner_Profile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 130, 121, 17));
        Owner_Lname = new QLineEdit(Owner_Profile);
        Owner_Lname->setObjectName(QString::fromUtf8("Owner_Lname"));
        Owner_Lname->setGeometry(QRect(30, 220, 331, 31));
        label_3 = new QLabel(Owner_Profile);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 200, 91, 17));
        Owner_Email = new QLineEdit(Owner_Profile);
        Owner_Email->setObjectName(QString::fromUtf8("Owner_Email"));
        Owner_Email->setGeometry(QRect(30, 290, 331, 31));
        label_4 = new QLabel(Owner_Profile);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 270, 64, 17));
        label_5 = new QLabel(Owner_Profile);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 340, 111, 17));
        Owner_Phone = new QLineEdit(Owner_Profile);
        Owner_Phone->setObjectName(QString::fromUtf8("Owner_Phone"));
        Owner_Phone->setGeometry(QRect(30, 360, 331, 31));
        Update_Name = new QPushButton(Owner_Profile);
        Update_Name->setObjectName(QString::fromUtf8("Update_Name"));
        Update_Name->setGeometry(QRect(390, 150, 91, 31));
        Update_Surname = new QPushButton(Owner_Profile);
        Update_Surname->setObjectName(QString::fromUtf8("Update_Surname"));
        Update_Surname->setGeometry(QRect(390, 220, 91, 31));
        Update_email = new QPushButton(Owner_Profile);
        Update_email->setObjectName(QString::fromUtf8("Update_email"));
        Update_email->setGeometry(QRect(390, 290, 91, 31));
        Update_Phone = new QPushButton(Owner_Profile);
        Update_Phone->setObjectName(QString::fromUtf8("Update_Phone"));
        Update_Phone->setGeometry(QRect(390, 360, 91, 31));
        Return_button = new QPushButton(Owner_Profile);
        Return_button->setObjectName(QString::fromUtf8("Return_button"));
        Return_button->setGeometry(QRect(30, 30, 131, 41));

        retranslateUi(Owner_Profile);

        QMetaObject::connectSlotsByName(Owner_Profile);
    } // setupUi

    void retranslateUi(QWidget *Owner_Profile)
    {
        Owner_Profile->setWindowTitle(QApplication::translate("Owner_Profile", "Form", nullptr));
        label->setText(QApplication::translate("Owner_Profile", "Your Profile", nullptr));
        label_2->setText(QApplication::translate("Owner_Profile", "First Name", nullptr));
        label_3->setText(QApplication::translate("Owner_Profile", "Last Name", nullptr));
        label_4->setText(QApplication::translate("Owner_Profile", "Email", nullptr));
        label_5->setText(QApplication::translate("Owner_Profile", "Phone Number", nullptr));
        Update_Name->setText(QApplication::translate("Owner_Profile", "Update", nullptr));
        Update_Surname->setText(QApplication::translate("Owner_Profile", "Update", nullptr));
        Update_email->setText(QApplication::translate("Owner_Profile", "Update", nullptr));
        Update_Phone->setText(QApplication::translate("Owner_Profile", "Update", nullptr));
        Return_button->setText(QApplication::translate("Owner_Profile", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Owner_Profile: public Ui_Owner_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNER_PROFILE_H
