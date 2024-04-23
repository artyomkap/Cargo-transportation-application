#include "owner_profile.h"
#include "ui_owner_profile.h"
#include "owner_interface.h"

Owner_Profile::Owner_Profile(QWidget *parent, int ownerId) :
    QWidget(parent),
    ui(new Ui::Owner_Profile),
    ownerId(ownerId)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {
            QSqlQuery qry1;
            qry1.prepare("SELECT * FROM Owner WHERE Owner_Id = :ownerId");
            qry1.bindValue(":ownerId", ownerId);

            if(qry1.exec() && qry1.next()) {
                      QString OFirstName = qry1.value(0).toString();
                      QString OLastName = qry1.value(1).toString();
                      QString OEmail = qry1.value(4).toString();
                      QString OPhone = qry1.value(3).toString();

                       ui->Owner_Fname->setPlaceholderText(OFirstName);
                       ui->Owner_Lname->setPlaceholderText(OLastName);
                       ui->Owner_Email->setPlaceholderText(OEmail);
                       ui->Owner_Phone->setPlaceholderText(OPhone);



            } else {
                QMessageBox::information(this, "Failed", "Failed to retrieve data from database");
            }

    } else {
           QMessageBox::information(this, "Failed to open", "Database is not open");
    }

}

Owner_Profile::~Owner_Profile()
{
    delete ui;
}

void Owner_Profile::on_Return_button_clicked()
{
    hide();
    Owner_Interface* owner_interface = new Owner_Interface(nullptr, ownerId);
    owner_interface->show();
}

void Owner_Profile::on_Update_Name_clicked()
{
    QString newName = ui->Owner_Fname->text();
        if (!newName.isEmpty()) {
            QSqlQuery query;
            query.prepare("UPDATE Owner SET Fname = :name WHERE Owner_Id = :ownerId");
            query.bindValue(":name", newName);
            query.bindValue(":ownerId", ownerId);
            if (query.exec()) {
                QMessageBox::information(this, "Success", "Owner name updated successfully!");
            } else {
                QMessageBox::warning(this, "Error", "Failed to update owner name: " + query.lastError().text());
            }
        } else {
            QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
        }
}

void Owner_Profile::on_Update_Surname_clicked()
{
    QString newLastName = ui->Owner_Lname->text();
        if (!newLastName.isEmpty()) {
            QSqlQuery query;
            query.prepare("UPDATE Owner SET Lname = :lname WHERE Owner_Id = :ownerId");
            query.bindValue(":lname", newLastName);
            query.bindValue(":ownerId", ownerId);
            if (query.exec()) {
                QMessageBox::information(this, "Success", "Owner Last Name updated successfully!");
            } else {
                QMessageBox::warning(this, "Error", "Failed to update owner last name: " + query.lastError().text());
            }
        } else {
            QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
        }
}

void Owner_Profile::on_Update_email_clicked()
{
    QString newEmail = ui->Owner_Email->text();
        if (!newEmail.isEmpty()) {
            QSqlQuery query;
            query.prepare("UPDATE Owner SET Email = :email WHERE Owner_Id = :ownerId");
            query.bindValue(":email", newEmail);
            query.bindValue(":ownerId", ownerId);
            if (query.exec()) {
                QMessageBox::information(this, "Success", "Owner Email updated successfully!");
            } else {
                QMessageBox::warning(this, "Error", "Failed to update owner Email: " + query.lastError().text());
            }
        } else {
            QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
        }
}

void Owner_Profile::on_Update_Phone_clicked()
{
    QString newPhone = ui->Owner_Phone->text();
        if (!newPhone.isEmpty()) {
            QSqlQuery query;
            query.prepare("UPDATE Owner SET Pnumber = :number WHERE Owner_Id = :ownerId");
            query.bindValue(":number", newPhone);
            query.bindValue(":ownerId", ownerId);
            if (query.exec()) {
                QMessageBox::information(this, "Success", "Owner Phone Number updated successfully!");
            } else {
                QMessageBox::warning(this, "Error", "Failed to update owner Phone Number: " + query.lastError().text());
            }
        } else {
            QMessageBox::warning(this, "Error", "Owner name cannot be empty!");
        }
}
