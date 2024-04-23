/********************************************************************************
** Form generated from reading UI file 'company_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANY_INTERFACE_H
#define UI_COMPANY_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Company_Interface
{
public:
    QLabel *label;
    QLabel *Company_Name;
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label_2;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLineEdit *Cargo_Id_Input;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Company_Interface)
    {
        if (Company_Interface->objectName().isEmpty())
            Company_Interface->setObjectName(QString::fromUtf8("Company_Interface"));
        Company_Interface->resize(795, 592);
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        Company_Interface->setFont(font);
        label = new QLabel(Company_Interface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 20, 231, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        Company_Name = new QLabel(Company_Interface);
        Company_Name->setObjectName(QString::fromUtf8("Company_Name"));
        Company_Name->setGeometry(QRect(500, 20, 301, 31));
        Company_Name->setFont(font1);
        pushButton = new QPushButton(Company_Interface);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 20, 101, 41));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton->setFont(font2);
        tableView = new QTableView(Company_Interface);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 140, 501, 421));
        label_2 = new QLabel(Company_Interface);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 110, 181, 17));
        groupBox = new QGroupBox(Company_Interface);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(530, 120, 241, 241));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 40, 151, 17));
        Cargo_Id_Input = new QLineEdit(groupBox);
        Cargo_Id_Input->setObjectName(QString::fromUtf8("Cargo_Id_Input"));
        Cargo_Id_Input->setGeometry(QRect(10, 60, 221, 31));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 140, 83, 25));

        retranslateUi(Company_Interface);

        QMetaObject::connectSlotsByName(Company_Interface);
    } // setupUi

    void retranslateUi(QWidget *Company_Interface)
    {
        Company_Interface->setWindowTitle(QApplication::translate("Company_Interface", "Form", nullptr));
        label->setText(QApplication::translate("Company_Interface", "Welcome Company:", nullptr));
        Company_Name->setText(QString());
        pushButton->setText(QApplication::translate("Company_Interface", "Sign out", nullptr));
        label_2->setText(QApplication::translate("Company_Interface", "Available Cargo Orders", nullptr));
        groupBox->setTitle(QApplication::translate("Company_Interface", "Cargo Form", nullptr));
        label_3->setText(QApplication::translate("Company_Interface", "Choose Cargo by ID", nullptr));
        pushButton_2->setText(QApplication::translate("Company_Interface", "Choose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Company_Interface: public Ui_Company_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANY_INTERFACE_H
