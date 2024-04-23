/********************************************************************************
** Form generated from reading UI file 'company_cargosettings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPANY_CARGOSETTINGS_H
#define UI_COMPANY_CARGOSETTINGS_H

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

class Ui_Company_CargoSettings
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableView *tableView;
    QLabel *label_5;
    QGroupBox *groupBox;
    QPushButton *Choose_Driver;
    QLineEdit *Driver_Id_input;
    QLabel *label_6;
    QLabel *Departure_Point;
    QLabel *Delivery_Point;
    QLabel *Weight;
    QLabel *Conditions;
    QLabel *Total_price;
    QGroupBox *groupBox_2;
    QLineEdit *Total_Price_change;
    QPushButton *Total_Price_btn;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QPushButton *pushButton;

    void setupUi(QWidget *Company_CargoSettings)
    {
        if (Company_CargoSettings->objectName().isEmpty())
            Company_CargoSettings->setObjectName(QString::fromUtf8("Company_CargoSettings"));
        Company_CargoSettings->resize(825, 600);
        label = new QLabel(Company_CargoSettings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 70, 161, 17));
        label_2 = new QLabel(Company_CargoSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 110, 111, 17));
        label_3 = new QLabel(Company_CargoSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 150, 64, 17));
        label_4 = new QLabel(Company_CargoSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 190, 91, 17));
        tableView = new QTableView(Company_CargoSettings);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 280, 701, 141));
        label_5 = new QLabel(Company_CargoSettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 260, 121, 17));
        groupBox = new QGroupBox(Company_CargoSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 440, 241, 101));
        Choose_Driver = new QPushButton(groupBox);
        Choose_Driver->setObjectName(QString::fromUtf8("Choose_Driver"));
        Choose_Driver->setGeometry(QRect(80, 70, 83, 25));
        Driver_Id_input = new QLineEdit(groupBox);
        Driver_Id_input->setObjectName(QString::fromUtf8("Driver_Id_input"));
        Driver_Id_input->setGeometry(QRect(10, 30, 221, 25));
        label_6 = new QLabel(Company_CargoSettings);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 230, 81, 17));
        Departure_Point = new QLabel(Company_CargoSettings);
        Departure_Point->setObjectName(QString::fromUtf8("Departure_Point"));
        Departure_Point->setGeometry(QRect(190, 70, 121, 17));
        Delivery_Point = new QLabel(Company_CargoSettings);
        Delivery_Point->setObjectName(QString::fromUtf8("Delivery_Point"));
        Delivery_Point->setGeometry(QRect(190, 110, 101, 17));
        Weight = new QLabel(Company_CargoSettings);
        Weight->setObjectName(QString::fromUtf8("Weight"));
        Weight->setGeometry(QRect(190, 150, 121, 17));
        Conditions = new QLabel(Company_CargoSettings);
        Conditions->setObjectName(QString::fromUtf8("Conditions"));
        Conditions->setGeometry(QRect(190, 190, 121, 17));
        Total_price = new QLabel(Company_CargoSettings);
        Total_price->setObjectName(QString::fromUtf8("Total_price"));
        Total_price->setGeometry(QRect(190, 230, 141, 17));
        groupBox_2 = new QGroupBox(Company_CargoSettings);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(470, 440, 291, 101));
        Total_Price_change = new QLineEdit(groupBox_2);
        Total_Price_change->setObjectName(QString::fromUtf8("Total_Price_change"));
        Total_Price_change->setGeometry(QRect(10, 30, 271, 25));
        Total_Price_btn = new QPushButton(groupBox_2);
        Total_Price_btn->setObjectName(QString::fromUtf8("Total_Price_btn"));
        Total_Price_btn->setGeometry(QRect(100, 70, 83, 25));
        pushButton_3 = new QPushButton(Company_CargoSettings);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(330, 470, 111, 61));
        label_7 = new QLabel(Company_CargoSettings);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(240, 20, 351, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        pushButton = new QPushButton(Company_CargoSettings);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 20, 131, 31));

        retranslateUi(Company_CargoSettings);

        QMetaObject::connectSlotsByName(Company_CargoSettings);
    } // setupUi

    void retranslateUi(QWidget *Company_CargoSettings)
    {
        Company_CargoSettings->setWindowTitle(QApplication::translate("Company_CargoSettings", "Form", nullptr));
        label->setText(QApplication::translate("Company_CargoSettings", "Departure Point:", nullptr));
        label_2->setText(QApplication::translate("Company_CargoSettings", "Delivery Point:", nullptr));
        label_3->setText(QApplication::translate("Company_CargoSettings", "Weight:", nullptr));
        label_4->setText(QApplication::translate("Company_CargoSettings", "Conditions:", nullptr));
        label_5->setText(QApplication::translate("Company_CargoSettings", "Available Drivers:", nullptr));
        groupBox->setTitle(QApplication::translate("Company_CargoSettings", "Choose Driver for this Cargo by ID", nullptr));
        Choose_Driver->setText(QApplication::translate("Company_CargoSettings", "Submit", nullptr));
        label_6->setText(QApplication::translate("Company_CargoSettings", "Total Price:", nullptr));
        Departure_Point->setText(QString());
        Delivery_Point->setText(QString());
        Weight->setText(QString());
        Conditions->setText(QString());
        Total_price->setText(QString());
        groupBox_2->setTitle(QApplication::translate("Company_CargoSettings", "Change Total Price, assign Company's fees", nullptr));
        Total_Price_btn->setText(QApplication::translate("Company_CargoSettings", "Submit", nullptr));
        pushButton_3->setText(QApplication::translate("Company_CargoSettings", "Accept the\n"
" Order", nullptr));
        label_7->setText(QApplication::translate("Company_CargoSettings", "Cargo Order Customization", nullptr));
        pushButton->setText(QApplication::translate("Company_CargoSettings", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Company_CargoSettings: public Ui_Company_CargoSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPANY_CARGOSETTINGS_H
