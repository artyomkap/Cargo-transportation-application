#ifndef CHAT_WINDOW_H
#define CHAT_WINDOW_H

#include <QWidget>

namespace Ui {
class Chat_Window;
}

class Chat_Window : public QWidget
{
    Q_OBJECT

public:
    explicit Chat_Window(QWidget *parent = nullptr);
    ~Chat_Window();

private:
    Ui::Chat_Window *ui;
};

#endif // CHAT_WINDOW_H
