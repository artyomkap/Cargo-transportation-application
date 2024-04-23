#include "driver_lorryregistration.h"
#include "ui_driver_lorryregistration.h"
#include "driver_interface.h"

Driver_LorryRegistration::Driver_LorryRegistration(QWidget *parent, int DriverId) :
    QWidget(parent),
    ui(new Ui::Driver_LorryRegistration),
    DriverId(DriverId)
{
    ui->setupUi(this);
}

Driver_LorryRegistration::~Driver_LorryRegistration()
{
    delete ui;
}

void Driver_LorryRegistration::on_Lorry_submit_clicked()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {
        QString RegNumber = ui->Reg_number->text();
        QString LorrySize = ui->Lorry_size->text();
        QString LorryWeight = ui->Lorry_weight->text();
        QString DCPCnumber = ui->CPCNumber->text();

        QSqlQuery qry;
        qry.prepare("INSERT INTO Driver_lorry (LregN, Lsize, Lweight, Driver_Id, DCPCnumber)"
                    "VALUES (:RegNum, :Lsize, :Lweight, :DriverId, :CPC)");

        qry.bindValue(":RegNum", RegNumber);
        qry.bindValue(":Lsize", LorrySize);
        qry.bindValue(":Lweight", LorryWeight);
        qry.bindValue(":DriverId", DriverId);
        qry.bindValue(":CPC", DCPCnumber);
        if(qry.exec()) {
            QMessageBox::information(this, "Data Inserted", "Lorry Successfully Registrated");
            hide();
            Driver_Interface* NewDriverInterface = new Driver_Interface(nullptr, DriverId);
            NewDriverInterface->show();

        }else {
            QMessageBox::information(this, "Not Inserted!", "Data is not Inserted");
        }

    }else {
        QMessageBox::information(this, "Not Connected", "The database is not connected");
    }
}
