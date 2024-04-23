/********************************************************************************
** Form generated from reading UI file 'owner_orderhistory.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNER_ORDERHISTORY_H
#define UI_OWNER_ORDERHISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Owner_OrderHistory
{
public:
    QLabel *label;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QWidget *Owner_OrderHistory)
    {
        if (Owner_OrderHistory->objectName().isEmpty())
            Owner_OrderHistory->setObjectName(QString::fromUtf8("Owner_OrderHistory"));
        Owner_OrderHistory->resize(763, 616);
        Owner_OrderHistory->setMinimumSize(QSize(10, 0));
        label = new QLabel(Owner_OrderHistory);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 20, 221, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableView = new QTableView(Owner_OrderHistory);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 80, 681, 491));
        pushButton = new QPushButton(Owner_OrderHistory);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 20, 151, 31));

        retranslateUi(Owner_OrderHistory);

        QMetaObject::connectSlotsByName(Owner_OrderHistory);
    } // setupUi

    void retranslateUi(QWidget *Owner_OrderHistory)
    {
        Owner_OrderHistory->setWindowTitle(QApplication::translate("Owner_OrderHistory", "Form", nullptr));
        label->setText(QApplication::translate("Owner_OrderHistory", "Orders History", nullptr));
        pushButton->setText(QApplication::translate("Owner_OrderHistory", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Owner_OrderHistory: public Ui_Owner_OrderHistory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNER_ORDERHISTORY_H
