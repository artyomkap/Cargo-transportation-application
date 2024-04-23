#include "modify_lorry.h"
#include "ui_modify_lorry.h"
#include "driver_interface.h"

Modify_Lorry::Modify_Lorry(QWidget *parent, int DriverId) :
    QWidget(parent),
    ui(new Ui::Modify_Lorry),
    DriverId(DriverId)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {
        QSqlQuery qry1;
        qry1.prepare("SELECT * FROM Driver_lorry WHERE Driver_Id = :DriverId1");
        qry1.bindValue(":DriverId1", DriverId);

          if(qry1.exec() && qry1.next()) {
              QString reg_num = qry1.value(0).toString();
              QString lsize = qry1.value(1).toString();
              QString lweight = qry1.value(2).toString();

              ui->Reg_number->setPlaceholderText(reg_num);
              ui->Lorry_size->setPlaceholderText(lsize);
              ui->Lorry_Weight->setPlaceholderText(lweight);
              } else {
                  QMessageBox::information(this, "Failed", "Failed to retrieve data from database"+ qry1.lastError().text());
              }

      } else {
             QMessageBox::information(this, "Failed to open", "Database is not open");
      }
}

Modify_Lorry::~Modify_Lorry()
{
    delete ui;
}

void Modify_Lorry::on_Reg_number_upd_clicked()
{
    QString NewReg = ui->Reg_number->text();
    if (!NewReg.isEmpty()) {
        QSqlQuery query;
        query.prepare("UPDATE Driver_lorry SET LregN = :name WHERE Driver_Id = :driverId");
        query.bindValue(":name", NewReg);
        query.bindValue(":driverId", DriverId);
        if (query.exec()) {
            QMessageBox::information(this, "Success", "Regional number updated successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update value: " + query.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }
}

void Modify_Lorry::on_Lorry_size_upd_clicked()
{
    QString NewSize = ui->Lorry_size->text();
    if (!NewSize.isEmpty()) {
        QSqlQuery query;
        query.prepare("UPDATE Driver_lorry SET Lsize = :name WHERE Driver_Id = :driverId");
        query.bindValue(":name", NewSize);
        query.bindValue(":driverId", DriverId);
        if (query.exec()) {
            QMessageBox::information(this, "Success", "Lorry Size updated successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update value: " + query.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }

}

void Modify_Lorry::on_Lorry_weight_upd_clicked()
{
    QString NewWeight = ui->Lorry_size->text();
    if (!NewWeight.isEmpty()) {
        QSqlQuery query;
        query.prepare("UPDATE Driver_lorry SET Lweight = :name WHERE Driver_Id = :driverId");
        query.bindValue(":name", NewWeight);
        query.bindValue(":driverId", DriverId);
        if (query.exec()) {
            QMessageBox::information(this, "Success", "Lorry Weight updated successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update value: " + query.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }
}

void Modify_Lorry::on_Return_button_clicked()
{
    hide();
    Driver_Interface* NewDriverInterface = new Driver_Interface(nullptr, DriverId);
    NewDriverInterface->show();
}
