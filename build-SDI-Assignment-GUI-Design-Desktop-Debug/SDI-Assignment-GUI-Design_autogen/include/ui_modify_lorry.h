/********************************************************************************
** Form generated from reading UI file 'modify_lorry.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_LORRY_H
#define UI_MODIFY_LORRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Modify_Lorry
{
public:
    QLabel *label;
    QLineEdit *Reg_number;
    QLineEdit *Lorry_size;
    QLineEdit *Lorry_Weight;
    QPushButton *Reg_number_upd;
    QPushButton *Lorry_size_upd;
    QPushButton *Lorry_weight_upd;
    QPushButton *Return_button;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Modify_Lorry)
    {
        if (Modify_Lorry->objectName().isEmpty())
            Modify_Lorry->setObjectName(QString::fromUtf8("Modify_Lorry"));
        Modify_Lorry->resize(554, 345);
        label = new QLabel(Modify_Lorry);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 20, 191, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        Reg_number = new QLineEdit(Modify_Lorry);
        Reg_number->setObjectName(QString::fromUtf8("Reg_number"));
        Reg_number->setGeometry(QRect(40, 130, 361, 31));
        Lorry_size = new QLineEdit(Modify_Lorry);
        Lorry_size->setObjectName(QString::fromUtf8("Lorry_size"));
        Lorry_size->setGeometry(QRect(40, 200, 361, 31));
        Lorry_Weight = new QLineEdit(Modify_Lorry);
        Lorry_Weight->setObjectName(QString::fromUtf8("Lorry_Weight"));
        Lorry_Weight->setGeometry(QRect(40, 270, 361, 31));
        Reg_number_upd = new QPushButton(Modify_Lorry);
        Reg_number_upd->setObjectName(QString::fromUtf8("Reg_number_upd"));
        Reg_number_upd->setGeometry(QRect(420, 130, 91, 31));
        Lorry_size_upd = new QPushButton(Modify_Lorry);
        Lorry_size_upd->setObjectName(QString::fromUtf8("Lorry_size_upd"));
        Lorry_size_upd->setGeometry(QRect(420, 200, 91, 31));
        Lorry_weight_upd = new QPushButton(Modify_Lorry);
        Lorry_weight_upd->setObjectName(QString::fromUtf8("Lorry_weight_upd"));
        Lorry_weight_upd->setGeometry(QRect(420, 270, 91, 31));
        Return_button = new QPushButton(Modify_Lorry);
        Return_button->setObjectName(QString::fromUtf8("Return_button"));
        Return_button->setGeometry(QRect(50, 20, 111, 31));
        label_2 = new QLabel(Modify_Lorry);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 110, 131, 17));
        label_3 = new QLabel(Modify_Lorry);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 180, 111, 17));
        label_4 = new QLabel(Modify_Lorry);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 250, 161, 17));

        retranslateUi(Modify_Lorry);

        QMetaObject::connectSlotsByName(Modify_Lorry);
    } // setupUi

    void retranslateUi(QWidget *Modify_Lorry)
    {
        Modify_Lorry->setWindowTitle(QApplication::translate("Modify_Lorry", "Form", nullptr));
        label->setText(QApplication::translate("Modify_Lorry", "Modify Lorry", nullptr));
        Reg_number_upd->setText(QApplication::translate("Modify_Lorry", "Update", nullptr));
        Lorry_size_upd->setText(QApplication::translate("Modify_Lorry", "Update", nullptr));
        Lorry_weight_upd->setText(QApplication::translate("Modify_Lorry", "Update", nullptr));
        Return_button->setText(QApplication::translate("Modify_Lorry", "Return", nullptr));
        label_2->setText(QApplication::translate("Modify_Lorry", "Regional Number", nullptr));
        label_3->setText(QApplication::translate("Modify_Lorry", "Lorry Size", nullptr));
        label_4->setText(QApplication::translate("Modify_Lorry", "Lorry Maximum Weight", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Modify_Lorry: public Ui_Modify_Lorry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_LORRY_H
