#include "cargo_registration.h"
#include "ui_cargo_registration.h"
#include "welcomewindow.h"


Cargo_Registration::Cargo_Registration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cargo_Registration)
{
    ui->setupUi(this);

    ui->Owner_FName->setPlaceholderText("Enter your First Name");
    ui->Owner_LName->setPlaceholderText("Enter your Last Name");
    ui->Owner_Email->setPlaceholderText("Enter your Email");
    ui->Owner_Phone->setPlaceholderText("Enter your Phone Number");
    ui->Owner_Password->setPlaceholderText("Enter your Password");
    ui->Owner_HAddress->setPlaceholderText("Enter your Home Address");
    ui->Owner_BAddress->setPlaceholderText("Enter your Business Address");

}

Cargo_Registration::~Cargo_Registration()
{
    delete ui;
}



void Cargo_Registration::on_backButton123_clicked()
{
    hide();
    WelcomeWindow* newWelcomeWindow = new WelcomeWindow(this);
    newWelcomeWindow->show();
}


void Cargo_Registration::on_pushButton_clicked()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {


        //Get data from inputs
        QString Owner_FName = ui->Owner_FName->text();
        QString Owner_LName = ui->Owner_LName->text();
        QString Owner_Email = ui->Owner_Email->text();
        QString Owner_Phone = ui->Owner_Phone->text();
        QString Owner_Password = ui->Owner_Password->text();
        QString Owner_HAddress = ui->Owner_HAddress->text();
        QString Owner_BAddress = ui->Owner_BAddress->text();



        QRegularExpression passwordRegex("^(?=.*[0-9])(?=.*[A-Z])(?=\\S+$).{8,}$");
        QRegularExpressionMatch passwordMatch = passwordRegex.match(Owner_Password);

        QRegularExpression emailRegex("[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}");
        QRegularExpressionMatch emailMatch = emailRegex.match(Owner_Email);

            if (!passwordMatch.hasMatch()) {
                QMessageBox::information(this, "Password Not Valid", "Try to youse at least 8 character, Uppercase letters");
            } else if (!emailMatch.hasMatch()) {
                QMessageBox::information(this, "Email Not Valid", "Please enter a valid email address");
            } else {
                // Password and email are valid, so hash the password and insert the data into the database
                QByteArray passwordHash = QCryptographicHash::hash(Owner_Password.toUtf8(), QCryptographicHash::Sha256);
                QString hashedPassword = QString(passwordHash.toHex());

                //Insert data from inputs to DB
                QSqlQuery qry;
                qry.prepare("INSERT INTO Owner (Fname, Lname, Password, Pnumber, Email, Baddress, Haddress)"
                            "VALUES (:Owner_FName, :Owner_LName, :Owner_Password, :Owner_Phone, :Owner_Email, :Owner_BAddress, :Owner_HAddress)");

                qry.bindValue(":Owner_FName", Owner_FName);
                qry.bindValue(":Owner_LName", Owner_LName);
                qry.bindValue(":Owner_Email", Owner_Email);
                qry.bindValue(":Owner_Phone", Owner_Phone);
                qry.bindValue(":Owner_Password", hashedPassword);
                qry.bindValue(":Owner_HAddress", Owner_HAddress);
                qry.bindValue(":Owner_BAddress", Owner_BAddress);

                if(qry.exec()) {
                    QMessageBox::information(this, "Data Inserted", "Successfully Registrated");
                }else {
                    QMessageBox::information(this, "Not Inserted!", "Data is not Inserted");
                }
            }

    }   else {

        QMessageBox::information(this, "Not Connected", "The database is not connected");
    }


}


