#ifndef DRIVER_ACCEPTEDCARGOS_H
#define DRIVER_ACCEPTEDCARGOS_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class Driver_AcceptedCargos;
}

class Driver_AcceptedCargos : public QWidget
{
    Q_OBJECT

public:
    explicit Driver_AcceptedCargos(QWidget *parent = nullptr, int DriverId = -1);
    ~Driver_AcceptedCargos();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Driver_AcceptedCargos *ui;
    QSqlDatabase database;
    int DriverId;
};

#endif // DRIVER_ACCEPTEDCARGOS_H
