/********************************************************************************
** Form generated from reading UI file 'driver_lorryregistration.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVER_LORRYREGISTRATION_H
#define UI_DRIVER_LORRYREGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Driver_LorryRegistration
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLineEdit *Reg_number;
    QLineEdit *Lorry_size;
    QLineEdit *Lorry_weight;
    QLineEdit *CPCNumber;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *Lorry_submit;

    void setupUi(QWidget *Driver_LorryRegistration)
    {
        if (Driver_LorryRegistration->objectName().isEmpty())
            Driver_LorryRegistration->setObjectName(QString::fromUtf8("Driver_LorryRegistration"));
        Driver_LorryRegistration->resize(726, 583);
        label = new QLabel(Driver_LorryRegistration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 20, 221, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        groupBox = new QGroupBox(Driver_LorryRegistration);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(180, 90, 371, 451));
        Reg_number = new QLineEdit(groupBox);
        Reg_number->setObjectName(QString::fromUtf8("Reg_number"));
        Reg_number->setGeometry(QRect(20, 60, 331, 25));
        Lorry_size = new QLineEdit(groupBox);
        Lorry_size->setObjectName(QString::fromUtf8("Lorry_size"));
        Lorry_size->setGeometry(QRect(20, 120, 331, 25));
        Lorry_weight = new QLineEdit(groupBox);
        Lorry_weight->setObjectName(QString::fromUtf8("Lorry_weight"));
        Lorry_weight->setGeometry(QRect(20, 180, 331, 25));
        CPCNumber = new QLineEdit(groupBox);
        CPCNumber->setObjectName(QString::fromUtf8("CPCNumber"));
        CPCNumber->setGeometry(QRect(20, 240, 331, 25));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 131, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 100, 91, 17));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 160, 181, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 220, 321, 17));
        Lorry_submit = new QPushButton(groupBox);
        Lorry_submit->setObjectName(QString::fromUtf8("Lorry_submit"));
        Lorry_submit->setGeometry(QRect(100, 330, 161, 61));

        retranslateUi(Driver_LorryRegistration);

        QMetaObject::connectSlotsByName(Driver_LorryRegistration);
    } // setupUi

    void retranslateUi(QWidget *Driver_LorryRegistration)
    {
        Driver_LorryRegistration->setWindowTitle(QApplication::translate("Driver_LorryRegistration", "Form", nullptr));
        label->setText(QApplication::translate("Driver_LorryRegistration", "Lorry Registration", nullptr));
        groupBox->setTitle(QApplication::translate("Driver_LorryRegistration", "Registrate your Lorry", nullptr));
        label_2->setText(QApplication::translate("Driver_LorryRegistration", "Regional Number", nullptr));
        label_3->setText(QApplication::translate("Driver_LorryRegistration", "Lorry Size", nullptr));
        label_4->setText(QApplication::translate("Driver_LorryRegistration", "Lorry weight in kilograms", nullptr));
        label_5->setText(QApplication::translate("Driver_LorryRegistration", "Driver Certificate of Professional Competence", nullptr));
        Lorry_submit->setText(QApplication::translate("Driver_LorryRegistration", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Driver_LorryRegistration: public Ui_Driver_LorryRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVER_LORRYREGISTRATION_H
