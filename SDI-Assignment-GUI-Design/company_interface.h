#ifndef COMPANY_INTERFACE_H
#define COMPANY_INTERFACE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>
#include "company_cargosettings.h"


namespace Ui {
class Company_Interface;
}

class Company_Interface : public QWidget
{
    Q_OBJECT

public:
    explicit Company_Interface(QWidget *parent = nullptr, int companyId = -1);
    ~Company_Interface();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Company_Interface *ui;
    int companyId;
    QSqlDatabase database;
    Company_CargoSettings *cargo_set;
};

#endif // COMPANY_INTERFACE_H
