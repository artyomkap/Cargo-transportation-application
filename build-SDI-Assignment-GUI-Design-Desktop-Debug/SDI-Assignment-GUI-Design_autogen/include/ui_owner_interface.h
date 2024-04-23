/********************************************************************************
** Form generated from reading UI file 'owner_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNER_INTERFACE_H
#define UI_OWNER_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Owner_Interface
{
public:
    QLabel *Welcome;
    QLabel *Owner_FirstName;
    QPushButton *owner_prof_button;
    QPushButton *pushButton_2;
    QPushButton *Place_cargo_button;
    QPushButton *History_button;
    QLabel *label;
    QLabel *Order_status;
    QTableView *tableView;
    QLabel *label_2;

    void setupUi(QWidget *Owner_Interface)
    {
        if (Owner_Interface->objectName().isEmpty())
            Owner_Interface->setObjectName(QString::fromUtf8("Owner_Interface"));
        Owner_Interface->resize(800, 608);
        Welcome = new QLabel(Owner_Interface);
        Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->setGeometry(QRect(180, 10, 431, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        Welcome->setFont(font);
        Owner_FirstName = new QLabel(Owner_Interface);
        Owner_FirstName->setObjectName(QString::fromUtf8("Owner_FirstName"));
        Owner_FirstName->setGeometry(QRect(470, 20, 211, 31));
        Owner_FirstName->setFont(font);
        owner_prof_button = new QPushButton(Owner_Interface);
        owner_prof_button->setObjectName(QString::fromUtf8("owner_prof_button"));
        owner_prof_button->setGeometry(QRect(620, 10, 151, 51));
        pushButton_2 = new QPushButton(Owner_Interface);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 70, 83, 25));
        Place_cargo_button = new QPushButton(Owner_Interface);
        Place_cargo_button->setObjectName(QString::fromUtf8("Place_cargo_button"));
        Place_cargo_button->setGeometry(QRect(50, 160, 171, 71));
        History_button = new QPushButton(Owner_Interface);
        History_button->setObjectName(QString::fromUtf8("History_button"));
        History_button->setGeometry(QRect(50, 330, 171, 71));
        label = new QLabel(Owner_Interface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 160, 111, 17));
        Order_status = new QLabel(Owner_Interface);
        Order_status->setObjectName(QString::fromUtf8("Order_status"));
        Order_status->setGeometry(QRect(360, 160, 64, 17));
        tableView = new QTableView(Owner_Interface);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(260, 210, 501, 192));
        label_2 = new QLabel(Owner_Interface);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 190, 101, 17));

        retranslateUi(Owner_Interface);

        QMetaObject::connectSlotsByName(Owner_Interface);
    } // setupUi

    void retranslateUi(QWidget *Owner_Interface)
    {
        Owner_Interface->setWindowTitle(QApplication::translate("Owner_Interface", "Form", nullptr));
        Welcome->setText(QApplication::translate("Owner_Interface", "Welcome to application,", nullptr));
        Owner_FirstName->setText(QString());
        owner_prof_button->setText(QApplication::translate("Owner_Interface", "View Profile", nullptr));
        pushButton_2->setText(QApplication::translate("Owner_Interface", "Sign Out", nullptr));
        Place_cargo_button->setText(QApplication::translate("Owner_Interface", "Place new order!", nullptr));
        History_button->setText(QApplication::translate("Owner_Interface", "Check order history", nullptr));
        label->setText(QApplication::translate("Owner_Interface", "Order Status:", nullptr));
        Order_status->setText(QString());
        label_2->setText(QApplication::translate("Owner_Interface", "Current Order", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Owner_Interface: public Ui_Owner_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNER_INTERFACE_H
