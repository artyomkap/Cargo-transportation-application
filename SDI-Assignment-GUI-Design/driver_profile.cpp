#include "driver_profile.h"
#include "ui_driver_profile.h"
#include "driver_interface.h"

Driver_Profile::Driver_Profile(QWidget *parent, int DriverId) :
    QWidget(parent),
    ui(new Ui::Driver_Profile),
    DriverId(DriverId)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {
            QSqlQuery qry1;
            qry1.prepare("SELECT * FROM Driver WHERE Driver_Id = :DriverId");
            qry1.bindValue(":DriverId", DriverId);

             if(qry1.exec() && qry1.next()) {
                 QString DFName = qry1.value(0).toString();
                 QString DLName = qry1.value(1).toString();
                 QString DEmail = qry1.value(2).toString();
                 QString DPNumber = qry1.value(3).toString();
                 QString DNINumber= qry1.value(7).toString();
                 QString DLNumber = qry1.value(8).toString();

                 ui->Driver_FName->setPlaceholderText(DFName);
                 ui->Driver_LName->setPlaceholderText(DLName);
                 ui->Driver_Email->setPlaceholderText(DEmail);
                 ui->Driver_PNumber->setPlaceholderText(DPNumber);
                 ui->Driver_NINumber->setPlaceholderText(DNINumber);
                 ui->Driver_DLNumber->setPlaceholderText(DLNumber);
             } else {
                 QMessageBox::information(this, "Failed", "Failed to retrieve data from database");
             }

     } else {
            QMessageBox::information(this, "Failed to open", "Database is not open");
     }


}

Driver_Profile::~Driver_Profile()
{
    delete ui;
}

void Driver_Profile::on_Return_button_clicked()
{
    hide();
    Driver_Interface* NewDriverInterface = new Driver_Interface(nullptr, DriverId);
    NewDriverInterface->show();

}

void Driver_Profile::on_Update_FName_clicked()
{
    QString NewName = ui->Driver_FName->text();
    if (!NewName.isEmpty()) {
        QSqlQuery query;
        query.prepare("UPDATE Driver SET DFname = :name WHERE Driver_Id = :driverId");
        query.bindValue(":name", NewName);
        query.bindValue(":driverId", DriverId);
        if (query.exec()) {
            QMessageBox::information(this, "Success", "Driver First Name updated successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update driver name: " + query.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }
}

void Driver_Profile::on_Update_LName_clicked()
{
    QString NewName = ui->Driver_LName->text();
    if (!NewName.isEmpty()) {
        QSqlQuery query;
        query.prepare("UPDATE Driver SET DLname = :name WHERE Driver_Id = :driverId");
        query.bindValue(":name", NewName);
        query.bindValue(":driverId", DriverId);
        if (query.exec()) {
            QMessageBox::information(this, "Success", "Driver Last Name updated successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update driver name: " + query.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }

}

void Driver_Profile::on_Update_Email_clicked()
{
    QString NewEmail = ui->Driver_Email->text();
    if (!NewEmail.isEmpty()) {
        QSqlQuery query;
        query.prepare("UPDATE Driver SET DEmail = :name WHERE Driver_Id = :driverId");
        query.bindValue(":name", NewEmail);
        query.bindValue(":driverId", DriverId);
        if (query.exec()) {
            QMessageBox::information(this, "Success", "Driver Email updated successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update driver email: " + query.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }

}

void Driver_Profile::on_Update_PNumber_clicked()
{
    QString NewPhone = ui->Driver_PNumber->text();
    if (!NewPhone.isEmpty()) {
        QSqlQuery query;
        query.prepare("UPDATE Driver SET Pnumber = :name WHERE Driver_Id = :driverId");
        query.bindValue(":name", NewPhone);
        query.bindValue(":driverId", DriverId);
        if (query.exec()) {
            QMessageBox::information(this, "Success", "Driver Phone Number updated successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update driver Phone Number: " + query.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }
}

void Driver_Profile::on_Update_NINumber_clicked()
{
    QString NewNIN = ui->Driver_NINumber->text();
    if (!NewNIN.isEmpty()) {
        QSqlQuery query;
        query.prepare("UPDATE Driver SET NINumber = :name WHERE Driver_Id = :driverId");
        query.bindValue(":name", NewNIN);
        query.bindValue(":driverId", DriverId);
        if (query.exec()) {
            QMessageBox::information(this, "Success", "Driver National Insurance updated successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update driver National Insurance: " + query.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }
}


void Driver_Profile::on_Update_DLNumber_clicked()
{
    QString NewDL = ui->Driver_DLNumber->text();
    if (!NewDL.isEmpty()) {
        QSqlQuery query;
        query.prepare("UPDATE Driver SET DLNumber = :name WHERE Driver_Id = :driverId");
        query.bindValue(":name", NewDL);
        query.bindValue(":driverId", DriverId);
        if (query.exec()) {
            QMessageBox::information(this, "Success", "Driving License Number updated successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update Driving License Number: " + query.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }
}
