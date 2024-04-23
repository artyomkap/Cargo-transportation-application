#include "driver_acceptedcargos.h"
#include "ui_driver_acceptedcargos.h"
#include "driver_interface.h"

Driver_AcceptedCargos::Driver_AcceptedCargos(QWidget *parent, int DriverId) :
    QWidget(parent),
    ui(new Ui::Driver_AcceptedCargos),
    DriverId(DriverId)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {

        QSqlQuery qry;
        qry.prepare("SELECT * FROM Cargo WHERE state IN ('Accepted', 'Loading', 'On road', 'Delivered')");
        if(qry.exec()) {
            QSqlTableModel *model = new QSqlTableModel();
            model->setTable("Cargo");
            model->setFilter(QString("state IN ('Accepted', 'Loading', 'On road', 'Delivered')"));
            model->select();
            ui->tableView->setModel(model);
        }

    } else {
        QMessageBox::information(this, "Failed to open", "Database is not open");
    }
}

Driver_AcceptedCargos::~Driver_AcceptedCargos()
{
    delete ui;
}

void Driver_AcceptedCargos::on_pushButton_clicked()
{
    hide();
    Driver_Interface* NewDriverInterface = new Driver_Interface(nullptr, DriverId);
    NewDriverInterface->show();
}

void Driver_AcceptedCargos::on_pushButton_2_clicked()
{
    if(database.open()) {
        QString status = ui->Cargo_Status->currentText();
        QSqlQuery qry;
        qry.prepare("UPDATE Cargo SET state = :state WHERE state IN ('Accepted', 'Loading', 'On road', 'Delivered')");
        qry.bindValue(":state", status);

        if(qry.exec()) {
            QMessageBox::information(this, "Status Updated", "Status successfully updated on" + status);
        }
    }else {
        QMessageBox::information(this, "Database closed", "Data base is not opened");
    }
}
