#ifndef DRIVER_REGISTRATION_H
#define DRIVER_REGISTRATION_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class Driver_Registration;
}

class Driver_Registration : public QWidget
{
    Q_OBJECT

public:
    explicit Driver_Registration(QWidget *parent = nullptr);
    ~Driver_Registration();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Driver_Registration *ui;

    QSqlDatabase database;
};

#endif // DRIVER_REGISTRATION_H
