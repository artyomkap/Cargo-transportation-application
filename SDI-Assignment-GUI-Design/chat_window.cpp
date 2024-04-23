#include "chat_window.h"
#include "ui_chat_window.h"

Chat_Window::Chat_Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Chat_Window)
{
    ui->setupUi(this);
}

Chat_Window::~Chat_Window()
{
    delete ui;
}
