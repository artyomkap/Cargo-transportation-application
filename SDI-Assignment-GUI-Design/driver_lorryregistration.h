#ifndef DRIVER_LORRYREGISTRATION_H
#define DRIVER_LORRYREGISTRATION_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class Driver_LorryRegistration;
}

class Driver_LorryRegistration : public QWidget
{
    Q_OBJECT

public:
    explicit Driver_LorryRegistration(QWidget *parent = nullptr, int DriverId = -1);
    ~Driver_LorryRegistration();

private slots:
    void on_Lorry_submit_clicked();

private:
    Ui::Driver_LorryRegistration *ui;
    int DriverId;
    QSqlDatabase database;
};

#endif // DRIVER_LORRYREGISTRATION_H
