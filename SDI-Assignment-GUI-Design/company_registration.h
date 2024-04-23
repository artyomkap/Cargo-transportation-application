#ifndef COMPANY_REGISTRATION_H
#define COMPANY_REGISTRATION_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>


namespace Ui {
class Company_Registration;
}

class Company_Registration : public QWidget
{
    Q_OBJECT

public:
    explicit Company_Registration(QWidget *parent = nullptr);
    ~Company_Registration();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Company_Registration *ui;

    QSqlDatabase database;
};

#endif // COMPANY_REGISTRATION_H
