/********************************************************************************
** Form generated from reading UI file 'chat_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_WINDOW_H
#define UI_CHAT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat_Window
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Chat_Window)
    {
        if (Chat_Window->objectName().isEmpty())
            Chat_Window->setObjectName(QString::fromUtf8("Chat_Window"));
        Chat_Window->resize(778, 584);
        label = new QLabel(Chat_Window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 20, 211, 17));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        lineEdit = new QLineEdit(Chat_Window);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 60, 251, 41));
        textEdit = new QTextEdit(Chat_Window);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 370, 561, 181));
        pushButton = new QPushButton(Chat_Window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 420, 121, 71));
        textEdit_2 = new QTextEdit(Chat_Window);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(30, 130, 551, 201));
        label_2 = new QLabel(Chat_Window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 350, 111, 17));
        label_3 = new QLabel(Chat_Window);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 131, 17));
        pushButton_2 = new QPushButton(Chat_Window);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 10, 111, 51));

        retranslateUi(Chat_Window);

        QMetaObject::connectSlotsByName(Chat_Window);
    } // setupUi

    void retranslateUi(QWidget *Chat_Window)
    {
        Chat_Window->setWindowTitle(QApplication::translate("Chat_Window", "Form", nullptr));
        label->setText(QApplication::translate("Chat_Window", "Chat Window", nullptr));
        pushButton->setText(QApplication::translate("Chat_Window", "Send", nullptr));
        label_2->setText(QApplication::translate("Chat_Window", "Send Message", nullptr));
        label_3->setText(QApplication::translate("Chat_Window", "Receive Message", nullptr));
        pushButton_2->setText(QApplication::translate("Chat_Window", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat_Window: public Ui_Chat_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_WINDOW_H
