/********************************************************************************
** Form generated from reading UI file 'owner_placecargo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNER_PLACECARGO_H
#define UI_OWNER_PLACECARGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Owner_PlaceCargo
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *Departure_combo;
    QLabel *label_3;
    QComboBox *Delivery_combo;
    QLineEdit *cargo_weight;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *Condtitions_combo;
    QPushButton *Place_cargo_button;
    QPushButton *Return_button;
    QPushButton *Calculate_price;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *total_price_text;
    QLineEdit *cargo_note;
    QLabel *label_9;

    void setupUi(QWidget *Owner_PlaceCargo)
    {
        if (Owner_PlaceCargo->objectName().isEmpty())
            Owner_PlaceCargo->setObjectName(QString::fromUtf8("Owner_PlaceCargo"));
        Owner_PlaceCargo->resize(801, 609);
        label = new QLabel(Owner_PlaceCargo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 10, 251, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Owner_PlaceCargo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 90, 121, 17));
        Departure_combo = new QComboBox(Owner_PlaceCargo);
        Departure_combo->addItem(QString());
        Departure_combo->addItem(QString());
        Departure_combo->addItem(QString());
        Departure_combo->addItem(QString());
        Departure_combo->addItem(QString());
        Departure_combo->addItem(QString());
        Departure_combo->setObjectName(QString::fromUtf8("Departure_combo"));
        Departure_combo->setGeometry(QRect(40, 110, 161, 31));
        label_3 = new QLabel(Owner_PlaceCargo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 170, 121, 17));
        Delivery_combo = new QComboBox(Owner_PlaceCargo);
        Delivery_combo->addItem(QString());
        Delivery_combo->addItem(QString());
        Delivery_combo->addItem(QString());
        Delivery_combo->addItem(QString());
        Delivery_combo->setObjectName(QString::fromUtf8("Delivery_combo"));
        Delivery_combo->setGeometry(QRect(40, 190, 161, 31));
        cargo_weight = new QLineEdit(Owner_PlaceCargo);
        cargo_weight->setObjectName(QString::fromUtf8("cargo_weight"));
        cargo_weight->setGeometry(QRect(40, 270, 431, 31));
        label_4 = new QLabel(Owner_PlaceCargo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 250, 151, 17));
        label_5 = new QLabel(Owner_PlaceCargo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 330, 181, 17));
        Condtitions_combo = new QComboBox(Owner_PlaceCargo);
        Condtitions_combo->addItem(QString());
        Condtitions_combo->addItem(QString());
        Condtitions_combo->addItem(QString());
        Condtitions_combo->addItem(QString());
        Condtitions_combo->addItem(QString());
        Condtitions_combo->addItem(QString());
        Condtitions_combo->setObjectName(QString::fromUtf8("Condtitions_combo"));
        Condtitions_combo->setGeometry(QRect(40, 350, 161, 31));
        Place_cargo_button = new QPushButton(Owner_PlaceCargo);
        Place_cargo_button->setObjectName(QString::fromUtf8("Place_cargo_button"));
        Place_cargo_button->setGeometry(QRect(470, 460, 151, 61));
        Return_button = new QPushButton(Owner_PlaceCargo);
        Return_button->setObjectName(QString::fromUtf8("Return_button"));
        Return_button->setGeometry(QRect(40, 10, 111, 41));
        Calculate_price = new QPushButton(Owner_PlaceCargo);
        Calculate_price->setObjectName(QString::fromUtf8("Calculate_price"));
        Calculate_price->setGeometry(QRect(180, 460, 151, 61));
        label_6 = new QLabel(Owner_PlaceCargo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(200, 250, 201, 17));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setBold(true);
        font1.setWeight(75);
        label_6->setFont(font1);
        label_7 = new QLabel(Owner_PlaceCargo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(480, 270, 231, 17));
        label_8 = new QLabel(Owner_PlaceCargo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 410, 241, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans"));
        font2.setPointSize(14);
        label_8->setFont(font2);
        total_price_text = new QLabel(Owner_PlaceCargo);
        total_price_text->setObjectName(QString::fromUtf8("total_price_text"));
        total_price_text->setGeometry(QRect(280, 410, 131, 21));
        total_price_text->setFont(font2);
        cargo_note = new QLineEdit(Owner_PlaceCargo);
        cargo_note->setObjectName(QString::fromUtf8("cargo_note"));
        cargo_note->setGeometry(QRect(280, 350, 481, 31));
        label_9 = new QLabel(Owner_PlaceCargo);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(280, 330, 481, 17));

        retranslateUi(Owner_PlaceCargo);

        QMetaObject::connectSlotsByName(Owner_PlaceCargo);
    } // setupUi

    void retranslateUi(QWidget *Owner_PlaceCargo)
    {
        Owner_PlaceCargo->setWindowTitle(QApplication::translate("Owner_PlaceCargo", "Form", nullptr));
        label->setText(QApplication::translate("Owner_PlaceCargo", "Create New Order", nullptr));
        label_2->setText(QApplication::translate("Owner_PlaceCargo", " Departure Point", nullptr));
        Departure_combo->setItemText(0, QApplication::translate("Owner_PlaceCargo", "North UK", "1"));
        Departure_combo->setItemText(1, QApplication::translate("Owner_PlaceCargo", "East UK", "2"));
        Departure_combo->setItemText(2, QApplication::translate("Owner_PlaceCargo", "West UK", "3"));
        Departure_combo->setItemText(3, QApplication::translate("Owner_PlaceCargo", "South UK", "4"));
        Departure_combo->setItemText(4, QString());
        Departure_combo->setItemText(5, QString());

        label_3->setText(QApplication::translate("Owner_PlaceCargo", "Delivery Point", nullptr));
        Delivery_combo->setItemText(0, QApplication::translate("Owner_PlaceCargo", "North UK", nullptr));
        Delivery_combo->setItemText(1, QApplication::translate("Owner_PlaceCargo", "East UK", nullptr));
        Delivery_combo->setItemText(2, QApplication::translate("Owner_PlaceCargo", "West UK", nullptr));
        Delivery_combo->setItemText(3, QApplication::translate("Owner_PlaceCargo", "South UK", nullptr));

        label_4->setText(QApplication::translate("Owner_PlaceCargo", "Weight of your Cargo", nullptr));
        label_5->setText(QApplication::translate("Owner_PlaceCargo", "Conditions of the storing", nullptr));
        Condtitions_combo->setItemText(0, QApplication::translate("Owner_PlaceCargo", "Fridge(frozen goods)", nullptr));
        Condtitions_combo->setItemText(1, QApplication::translate("Owner_PlaceCargo", "Fragile Cargo", nullptr));
        Condtitions_combo->setItemText(2, QApplication::translate("Owner_PlaceCargo", "Liquid goods", nullptr));
        Condtitions_combo->setItemText(3, QApplication::translate("Owner_PlaceCargo", "Chemicals", nullptr));
        Condtitions_combo->setItemText(4, QString());
        Condtitions_combo->setItemText(5, QString());

        Place_cargo_button->setText(QApplication::translate("Owner_PlaceCargo", "Submit", nullptr));
        Return_button->setText(QApplication::translate("Owner_PlaceCargo", "Return", nullptr));
        Calculate_price->setText(QApplication::translate("Owner_PlaceCargo", "Calculate The\n"
" Price", nullptr));
        label_6->setText(QApplication::translate("Owner_PlaceCargo", "Type in the number in KG", nullptr));
        label_7->setText(QApplication::translate("Owner_PlaceCargo", "The maximum weight is 5000kg", nullptr));
        label_8->setText(QApplication::translate("Owner_PlaceCargo", "Estimated shipping cost:", nullptr));
        total_price_text->setText(QString());
        label_9->setText(QApplication::translate("Owner_PlaceCargo", "Note(you can explain what is inside your cargo or sprecify conditions)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Owner_PlaceCargo: public Ui_Owner_PlaceCargo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNER_PLACECARGO_H
