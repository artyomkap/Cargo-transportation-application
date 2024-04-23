#ifndef DRIVER_INTERFACE_H
#define DRIVER_INTERFACE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>
#include "driver_profile.h"
#include "driver_lorryregistration.h"
#include "modify_lorry.h"
#include "driver_cargosubmission.h"
#include "driver_acceptedcargos.h"

namespace Ui {
class Driver_Interface;
}

class Driver_Interface : public QWidget
{
    Q_OBJECT

public:
    explicit Driver_Interface(QWidget *parent = nullptr, int DriverId = -1);
    ~Driver_Interface();

private slots:
    void on_Driver_Profile_clicked();

    void on_Signout_button_clicked();

    void on_Lorry_registrate_clicked();

    void on_Lorry_update_clicked();

    void on_view_cargo_btn_clicked();

    void on_Accepted_Cargo_clicked();

private:
    Ui::Driver_Interface *ui;
    int DriverId;
    QSqlDatabase database;
    Driver_Profile *driver_prof;
    Driver_LorryRegistration *lorry_reg;
    Modify_Lorry *lorry_mod;
    Driver_CargoSubmission *driver_cargo;
    Driver_AcceptedCargos *driver_acc;

};

#endif // DRIVER_INTERFACE_H
