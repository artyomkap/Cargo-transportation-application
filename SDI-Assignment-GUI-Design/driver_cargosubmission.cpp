#include "driver_cargosubmission.h"
#include "ui_driver_cargosubmission.h"

Driver_CargoSubmission::Driver_CargoSubmission(QWidget *parent, int DriverId) :
    QWidget(parent),
    ui(new Ui::Driver_CargoSubmission),
    DriverId(DriverId)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {
        QString state = "Booked";
        QSqlQuery qry;
        qry.prepare("SELECT * FROM Cargo WHERE state = :state");
        qry.bindValue(":state", state);
        qDebug() << "Query:" << qry.lastQuery();

        if(qry.exec() && qry.next()) {
            QString Dep_Point = qry.value(1).toString();
            QString Del_Point = qry.value(2).toString();
            int Weight = qry.value(3).toInt();
            QString Conditions = qry.value(4).toString();
            int Total_Price = qry.value(11).toInt();

            if (Dep_Point == "0") {
                QString Dep_Point_str = "North UK";
                ui->Departure_Point->setText(Dep_Point_str);
            } else if (Dep_Point == "1") {
                QString Dep_Point_str = "East UK";
                ui->Departure_Point->setText(Dep_Point_str);
            } else if (Dep_Point == "2") {
                QString Dep_Point_str = "West UK";
                ui->Departure_Point->setText(Dep_Point_str);
            } else if (Dep_Point == "3") {
                QString Dep_Point_str = "South UK";
                ui->Departure_Point->setText(Dep_Point_str);
            }

            if (Del_Point == "0") {
                QString Del_Point_str = "North UK";
                ui->Delivery_Point->setText(Del_Point_str);
            } else if (Del_Point == "1") {
                QString Del_Point_str = "East UK";
                ui->Delivery_Point->setText(Del_Point_str);
            } else if (Del_Point == "2") {
                QString Del_Point_str = "West UK";
                ui->Delivery_Point->setText(Del_Point_str);
            } else if (Del_Point == "3") {
                QString Del_Point_str = "South UK";
                ui->Delivery_Point->setText(Del_Point_str);
            }


            if(Conditions == "0") {
                QString store_con = "Fridge(frozen goods)";
                ui->Conditions->setText(store_con);
            }else if (Conditions == "1") {
                QString store_con = "Fragile Cargo";
                ui->Conditions->setText(store_con);
            }else if (Conditions == "2") {
                QString store_con = "Liquid goods";
                ui->Conditions->setText(store_con);
            }else if (Conditions == "3") {
                QString store_con = "Chemicals";
                ui->Conditions->setText(store_con);
            }

            QString Weight_str = QString::number(Weight);

            QString Price_str = QString::number(Total_Price);


            ui->Weight->setText(Weight_str);
            ui->Total_price->setText(Price_str);

        } else {
            qDebug() << "Error:" << qry.lastError().text();
            QMessageBox::information(this, "Failed", "Failed to retrieve data from database") + qry.lastError().text();
        }

    }
}

Driver_CargoSubmission::~Driver_CargoSubmission()
{
    delete ui;
}

void Driver_CargoSubmission::on_Acceptbutton_clicked()
{
    QString state = "Booked";
    QString set_state1 = "Accepted";

    if(database.open()) {
        QSqlQuery qry;
        qry.prepare("UPDATE Cargo SET Driver = :DriverId, state = :set_state WHERE state = :state");
        qry.bindValue(":DriverId", DriverId);
        qry.bindValue(":state", state);
        qry.bindValue(":set_state", set_state1);
        if (qry.exec()) {
            QMessageBox::information(this, "Success", "Cargo Order Accepted successfully, Status of Order Updated!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update Status: " + qry.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }
}



void Driver_CargoSubmission::on_pushButton_clicked()
{
    QString state = "Booked";
    QString set_state = "Submitted";

    if(database.open()) {
        QSqlQuery qry;
        qry.prepare("UPDATE Cargo SET state = :set_state WHERE state = :state");
        qry.bindValue(":State", state);
        qry.bindValue(":set_state", set_state);
        if (qry.exec()) {
            QMessageBox::information(this, "Success", "Cargo Order was Declined successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update Status: " + qry.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }
}
