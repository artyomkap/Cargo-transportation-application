/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox_2;
    QStackedWidget *stackedWidget;
    QWidget *Cargo_Reg;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QLabel *label_10;
    QPushButton *pushButton_5;
    QWidget *Company_Reg;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_11;
    QPushButton *pushButton_6;
    QWidget *Driver_Reg;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton_4;
    QLabel *label_12;
    QPushButton *pushButton_7;
    QStackedWidget *LoginStack;
    QWidget *page;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLineEdit *Owner_Email;
    QLabel *label_3;
    QLineEdit *Owner_Password;
    QPushButton *Login_Owner;
    QPushButton *ChooseAnotherRole1;
    QWidget *page_2;
    QGroupBox *groupBox_3;
    QLabel *label_14;
    QLineEdit *Company_Email;
    QLabel *label_15;
    QLineEdit *Company_Password;
    QPushButton *Login_Company;
    QPushButton *ChooseRole2;
    QWidget *page_3;
    QGroupBox *groupBox_4;
    QLabel *label_16;
    QLineEdit *Driver_Email;
    QLabel *label_17;
    QLineEdit *Driver_Password;
    QPushButton *Login_Driver;
    QPushButton *ChooseRole3;
    QLabel *label_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName(QString::fromUtf8("WelcomeWindow"));
        WelcomeWindow->resize(800, 600);
        centralwidget = new QWidget(WelcomeWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 30, 481, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(420, 130, 341, 351));
        stackedWidget = new QStackedWidget(groupBox_2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 30, 321, 301));
        Cargo_Reg = new QWidget();
        Cargo_Reg->setObjectName(QString::fromUtf8("Cargo_Reg"));
        label_4 = new QLabel(Cargo_Reg);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 40, 241, 17));
        label_5 = new QLabel(Cargo_Reg);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 90, 191, 17));
        pushButton_2 = new QPushButton(Cargo_Reg);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 200, 121, 51));
        label_10 = new QLabel(Cargo_Reg);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 160, 231, 17));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setBold(true);
        font1.setWeight(75);
        label_10->setFont(font1);
        pushButton_5 = new QPushButton(Cargo_Reg);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(180, 200, 121, 51));
        stackedWidget->addWidget(Cargo_Reg);
        Company_Reg = new QWidget();
        Company_Reg->setObjectName(QString::fromUtf8("Company_Reg"));
        pushButton_3 = new QPushButton(Company_Reg);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 200, 121, 51));
        label_6 = new QLabel(Company_Reg);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 90, 261, 17));
        label_7 = new QLabel(Company_Reg);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 40, 241, 17));
        label_11 = new QLabel(Company_Reg);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(60, 160, 231, 17));
        label_11->setFont(font1);
        pushButton_6 = new QPushButton(Company_Reg);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 200, 121, 51));
        stackedWidget->addWidget(Company_Reg);
        Driver_Reg = new QWidget();
        Driver_Reg->setObjectName(QString::fromUtf8("Driver_Reg"));
        label_8 = new QLabel(Driver_Reg);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 40, 241, 17));
        label_9 = new QLabel(Driver_Reg);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 90, 261, 17));
        pushButton_4 = new QPushButton(Driver_Reg);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 200, 121, 51));
        label_12 = new QLabel(Driver_Reg);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(60, 160, 231, 17));
        label_12->setFont(font1);
        pushButton_7 = new QPushButton(Driver_Reg);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(180, 200, 121, 51));
        stackedWidget->addWidget(Driver_Reg);
        LoginStack = new QStackedWidget(centralwidget);
        LoginStack->setObjectName(QString::fromUtf8("LoginStack"));
        LoginStack->setGeometry(QRect(30, 130, 341, 351));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 311, 321));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 141, 17));
        Owner_Email = new QLineEdit(groupBox);
        Owner_Email->setObjectName(QString::fromUtf8("Owner_Email"));
        Owner_Email->setGeometry(QRect(30, 70, 251, 25));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 64, 17));
        Owner_Password = new QLineEdit(groupBox);
        Owner_Password->setObjectName(QString::fromUtf8("Owner_Password"));
        Owner_Password->setGeometry(QRect(30, 130, 251, 25));
        Owner_Password->setEchoMode(QLineEdit::Password);
        Login_Owner = new QPushButton(groupBox);
        Login_Owner->setObjectName(QString::fromUtf8("Login_Owner"));
        Login_Owner->setGeometry(QRect(160, 210, 121, 51));
        ChooseAnotherRole1 = new QPushButton(groupBox);
        ChooseAnotherRole1->setObjectName(QString::fromUtf8("ChooseAnotherRole1"));
        ChooseAnotherRole1->setGeometry(QRect(30, 210, 111, 51));
        LoginStack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 20, 311, 321));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 50, 141, 17));
        Company_Email = new QLineEdit(groupBox_3);
        Company_Email->setObjectName(QString::fromUtf8("Company_Email"));
        Company_Email->setGeometry(QRect(30, 70, 251, 25));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 110, 64, 17));
        Company_Password = new QLineEdit(groupBox_3);
        Company_Password->setObjectName(QString::fromUtf8("Company_Password"));
        Company_Password->setGeometry(QRect(30, 130, 251, 25));
        Company_Password->setEchoMode(QLineEdit::Password);
        Login_Company = new QPushButton(groupBox_3);
        Login_Company->setObjectName(QString::fromUtf8("Login_Company"));
        Login_Company->setGeometry(QRect(160, 210, 121, 51));
        ChooseRole2 = new QPushButton(groupBox_3);
        ChooseRole2->setObjectName(QString::fromUtf8("ChooseRole2"));
        ChooseRole2->setGeometry(QRect(30, 210, 111, 51));
        LoginStack->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 20, 311, 321));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 50, 141, 17));
        Driver_Email = new QLineEdit(groupBox_4);
        Driver_Email->setObjectName(QString::fromUtf8("Driver_Email"));
        Driver_Email->setGeometry(QRect(30, 70, 251, 25));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 110, 64, 17));
        Driver_Password = new QLineEdit(groupBox_4);
        Driver_Password->setObjectName(QString::fromUtf8("Driver_Password"));
        Driver_Password->setEnabled(true);
        Driver_Password->setGeometry(QRect(30, 130, 251, 25));
        Driver_Password->setEchoMode(QLineEdit::Password);
        Login_Driver = new QPushButton(groupBox_4);
        Login_Driver->setObjectName(QString::fromUtf8("Login_Driver"));
        Login_Driver->setGeometry(QRect(160, 210, 121, 51));
        ChooseRole3 = new QPushButton(groupBox_4);
        ChooseRole3->setObjectName(QString::fromUtf8("ChooseRole3"));
        ChooseRole3->setGeometry(QRect(30, 210, 111, 51));
        LoginStack->addWidget(page_3);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 100, 181, 21));
        WelcomeWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WelcomeWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        WelcomeWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(WelcomeWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WelcomeWindow->setStatusBar(statusbar);

        retranslateUi(WelcomeWindow);

        stackedWidget->setCurrentIndex(2);
        LoginStack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QApplication::translate("WelcomeWindow", "WelcomeWindow", nullptr));
        label->setText(QApplication::translate("WelcomeWindow", "Welcome in Transportation MarketPlace", nullptr));
        groupBox_2->setTitle(QApplication::translate("WelcomeWindow", "Registration", nullptr));
        label_4->setText(QApplication::translate("WelcomeWindow", "Choose the role for Registration:", nullptr));
        label_5->setText(QApplication::translate("WelcomeWindow", "Register as Cargo Owner", nullptr));
        pushButton_2->setText(QApplication::translate("WelcomeWindow", "Choose another\n"
" role", nullptr));
        label_10->setText(QApplication::translate("WelcomeWindow", "Press proceed to Continue", nullptr));
        pushButton_5->setText(QApplication::translate("WelcomeWindow", "Proceed", nullptr));
        pushButton_3->setText(QApplication::translate("WelcomeWindow", "Choose another\n"
" role", nullptr));
        label_6->setText(QApplication::translate("WelcomeWindow", "Register as Transportation Company", nullptr));
        label_7->setText(QApplication::translate("WelcomeWindow", "Choose the role for Registration:", nullptr));
        label_11->setText(QApplication::translate("WelcomeWindow", "Press proceed to Continue", nullptr));
        pushButton_6->setText(QApplication::translate("WelcomeWindow", "Proceed", nullptr));
        label_8->setText(QApplication::translate("WelcomeWindow", "Choose the role for Registration:", nullptr));
        label_9->setText(QApplication::translate("WelcomeWindow", "Register as a Driver", nullptr));
        pushButton_4->setText(QApplication::translate("WelcomeWindow", "Choose another\n"
" role", nullptr));
        label_12->setText(QApplication::translate("WelcomeWindow", "Press proceed to Continue", nullptr));
        pushButton_7->setText(QApplication::translate("WelcomeWindow", "Proceed", nullptr));
        groupBox->setTitle(QApplication::translate("WelcomeWindow", "Login for Cargo Owner", nullptr));
        label_2->setText(QApplication::translate("WelcomeWindow", "Email Address", nullptr));
        label_3->setText(QApplication::translate("WelcomeWindow", "Password", nullptr));
        Login_Owner->setText(QApplication::translate("WelcomeWindow", "Login", nullptr));
        ChooseAnotherRole1->setText(QApplication::translate("WelcomeWindow", "Choose another\n"
" role", nullptr));
        groupBox_3->setTitle(QApplication::translate("WelcomeWindow", "Login for Transportation Company", nullptr));
        label_14->setText(QApplication::translate("WelcomeWindow", "Email Address", nullptr));
        label_15->setText(QApplication::translate("WelcomeWindow", "Password", nullptr));
        Login_Company->setText(QApplication::translate("WelcomeWindow", "Login", nullptr));
        ChooseRole2->setText(QApplication::translate("WelcomeWindow", "Choose another\n"
" role", nullptr));
        groupBox_4->setTitle(QApplication::translate("WelcomeWindow", "Login for Driver", nullptr));
        label_16->setText(QApplication::translate("WelcomeWindow", "Email Address", nullptr));
        label_17->setText(QApplication::translate("WelcomeWindow", "Password", nullptr));
        Login_Driver->setText(QApplication::translate("WelcomeWindow", "Login", nullptr));
        ChooseRole3->setText(QApplication::translate("WelcomeWindow", "Choose another\n"
" role", nullptr));
        label_13->setText(QApplication::translate("WelcomeWindow", "Choose the role for login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
