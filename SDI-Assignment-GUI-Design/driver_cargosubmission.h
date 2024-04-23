#ifndef DRIVER_CARGOSUBMISSION_H
#define DRIVER_CARGOSUBMISSION_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class Driver_CargoSubmission;
}

class Driver_CargoSubmission : public QWidget
{
    Q_OBJECT

public:
    explicit Driver_CargoSubmission(QWidget *parent = nullptr, int DriverId = -1);
    ~Driver_CargoSubmission();

private slots:
    void on_Acceptbutton_clicked();

    void on_pushButton_clicked();

private:
    Ui::Driver_CargoSubmission *ui;
    int DriverId;
    QSqlDatabase database;
};

#endif // DRIVER_CARGOSUBMISSION_H
