#include "company_cargosettings.h"
#include "ui_company_cargosettings.h"
#include "company_interface.h"

Company_CargoSettings::Company_CargoSettings(QWidget *parent, int CargoId, int companyId) :
    QWidget(parent),
    ui(new Ui::Company_CargoSettings),
    companyId(companyId),
    CargoId(CargoId)

{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {
        QSqlQuery qry;
        qry.prepare("SELECT * FROM Cargo WHERE Cargo_Id = :CargoId");
        qry.bindValue(":CargoId", CargoId);
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


    if(database.open()) {

        QString status = "Free";

        QSqlQuery query;
        query.prepare("SELECT * FROM Driver WHERE Driver_Status = :status");
        query.bindValue(":status", status);
        if (query.exec() && query.next()) {



            QSqlTableModel *model = new QSqlTableModel();
            model->setTable("Driver");

            model->select();

            ui->tableView->setModel(model);

        } else {
            QMessageBox::information(this, "Failed", "Failed to retrieve data from database") + query.lastError().text();
        }



    }else {
        QMessageBox::information(this, "Database not opened", "Database in not opened");
    }
}

Company_CargoSettings::~Company_CargoSettings()
{
    delete ui;
}

void Company_CargoSettings::on_Choose_Driver_clicked()
{
    QString driverId_int = ui->Driver_Id_input->text();

    int DriverId1 = driverId_int.toInt();


    QString Status = "BookedForOrder";

    if(database.open()) {
        QSqlQuery qry;
        qry.prepare("UPDATE Driver SET Driver_Status = :Status WHERE Driver_Id = :DriverId");
        qry.bindValue(":DriverId", DriverId1);
        qry.bindValue(":Status", Status);
        if (qry.exec()) {
            QMessageBox::information(this, "Success", "Driver Status updated successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update Status: " + qry.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }

}

void Company_CargoSettings::on_Total_Price_btn_clicked()
{

    QString cost = ui->Total_Price_change->text();

    int cost_int = cost.toInt();

    if(database.open()) {
        QSqlQuery qry;
        qry.prepare("UPDATE Cargo SET Cost = :cost WHERE Cargo_Id = :CargoId");
        qry.bindValue(":cost", cost_int);
        qry.bindValue(":CargoId", CargoId);
        if (qry.exec()) {
            QMessageBox::information(this, "Success", "Price updated successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update the price: " + qry.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }
}


void Company_CargoSettings::on_pushButton_3_clicked()
{


    if(database.open()) {
        QString state = "Booked";
        QSqlQuery qry;
        qry.prepare("UPDATE Cargo SET Tcompany = :companyId, state = :state WHERE Cargo_Id = :CargoId");
        qry.bindValue(":companyId", companyId);
        qry.bindValue(":CargoId", CargoId);
        qry.bindValue(":state", state);

        if (qry.exec()) {
            QMessageBox::information(this, "Success", "Order updated successfully!");
        } else {
            QMessageBox::warning(this, "Error", "Failed to update Order: " + qry.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
    }


}

void Company_CargoSettings::on_pushButton_clicked()
{
    hide();
    Company_Interface* NewCompanyInterface = new Company_Interface(nullptr, companyId);
    NewCompanyInterface->show();
}
