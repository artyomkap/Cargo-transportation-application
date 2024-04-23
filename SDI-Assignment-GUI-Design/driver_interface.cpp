#include "driver_interface.h"
#include "ui_driver_interface.h"
#include "welcomewindow.h"

Driver_Interface::Driver_Interface(QWidget *parent, int DriverId) :
    QWidget(parent),
    ui(new Ui::Driver_Interface),
    DriverId(DriverId)
{
    ui->setupUi(this);    
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {
            QSqlQuery qry;
            qry.prepare("SELECT * FROM Driver WHERE Driver_Id = :DriverId");
            qry.bindValue(":DriverId", DriverId);

            if(qry.exec() && qry.next()) {
                QString DriverName = qry.value(0).toString();

                ui->Driver_Name->setText(DriverName);


            } else {
                QMessageBox::information(this, "Failed", "Failed to retrieve data from database");
            }

    } else {
           QMessageBox::information(this, "Failed to open", "Database is not open");
    }
}

Driver_Interface::~Driver_Interface()
{
    delete ui;
}

void Driver_Interface::on_Driver_Profile_clicked()
{
    hide();
    driver_prof = new Driver_Profile(nullptr, DriverId);
    driver_prof->show();
}

void Driver_Interface::on_Signout_button_clicked()
{
    hide();
    WelcomeWindow* newWelcomeWindow = new WelcomeWindow(this);
    newWelcomeWindow->show();
}

void Driver_Interface::on_Lorry_registrate_clicked()
{
    hide();
    lorry_reg = new Driver_LorryRegistration(nullptr, DriverId);
    lorry_reg->show();
}

void Driver_Interface::on_Lorry_update_clicked()
{

    hide();
    lorry_mod = new Modify_Lorry(nullptr, DriverId);
    lorry_mod->show();
}

void Driver_Interface::on_view_cargo_btn_clicked()
{
    hide();
    driver_cargo = new Driver_CargoSubmission(nullptr, DriverId);
    driver_cargo->show();

}

void Driver_Interface::on_Accepted_Cargo_clicked()
{
    hide();
    driver_acc = new Driver_AcceptedCargos(nullptr, DriverId);
    driver_acc->show();
}
