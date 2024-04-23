#ifndef COMPANY_CARGOSETTINGS_H
#define COMPANY_CARGOSETTINGS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class Company_CargoSettings;
}

class Company_CargoSettings : public QWidget
{
    Q_OBJECT

public:
    explicit Company_CargoSettings(QWidget *parent = nullptr, int companyId = -1, int CargoId = 0);
    ~Company_CargoSettings();

private slots:
    void on_Choose_Driver_clicked();

    void on_Total_Price_btn_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::Company_CargoSettings *ui;
    int companyId;
    int CargoId;
    QSqlDatabase database;
};

#endif // COMPANY_CARGOSETTINGS_H
