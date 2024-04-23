#include "driver_registration.h"
#include "ui_driver_registration.h"
#include "welcomewindow.h"

Driver_Registration::Driver_Registration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Driver_Registration)
{
    ui->setupUi(this);

    ui->DFname->setPlaceholderText("Enter First Name");
    ui->DLname->setPlaceholderText("Enter Last Name");
    ui->DEmail->setPlaceholderText("Enter your Email Address");
    ui->DPNumber->setPlaceholderText("Enter your Phone Number");
    ui->DPassword->setPlaceholderText("Enter the Passwrord");
    ui->DHaddress->setPlaceholderText("Enter your Home Address");
    ui->DBaddress->setPlaceholderText("Enter your Business Address");
    ui->DNINumber->setPlaceholderText("Enter your National Insurance Number");
    ui->DLnumber->setPlaceholderText("Enter your Driving License Number");
    ui->TCname->setPlaceholderText("Enter the Name of your Transport Company");
}

Driver_Registration::~Driver_Registration()
{
    delete ui;
}

void Driver_Registration::on_pushButton_2_clicked()
{
    hide();
    WelcomeWindow* newWelcomeWindow = new WelcomeWindow(this);
    newWelcomeWindow->show();
}

void Driver_Registration::on_pushButton_clicked()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {

        QString DFname = ui->DFname->text();
        QString DLname = ui->DLname->text();
        QString DEmail = ui->DEmail->text();
        QString DPNumber = ui->DPNumber->text();
        QString DPassword = ui->DPassword->text();
        QString DHaddress = ui->DHaddress->text();
        QString DBaddress = ui->DBaddress->text();
        QString DNINumber = ui->DNINumber->text();
        QString DLnumber = ui->DLnumber->text();
        QString TCname = ui->TCname->text();
        QString Driver_Status = "Free";

        QRegularExpression passwordRegex("^(?=.*[0-9])(?=.*[A-Z])(?=\\S+$).{8,}$");
        QRegularExpressionMatch passwordMatch = passwordRegex.match(DPassword);

        QRegularExpression emailRegex("[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}");
        QRegularExpressionMatch emailMatch = emailRegex.match(DEmail);

        if (!passwordMatch.hasMatch()) {
            QMessageBox::information(this, "Password Not Valid", "Try to youse at least 8 character, Uppercase letters");
        } else if (!emailMatch.hasMatch()) {
            QMessageBox::information(this, "Email Not Valid", "Please enter a valid email address");
        } else {
            // Password and email are valid, so hash the password and insert the data into the database
            QByteArray passwordHash = QCryptographicHash::hash(DPassword.toUtf8(), QCryptographicHash::Sha256);
            QString hashedPassword = QString(passwordHash.toHex());

            //Insert data from inputs to DB

            QSqlQuery qry;
            qry.prepare("INSERT INTO Driver (DFname, DLname, DEmail, Pnumber, DPassword, DHaddress, DBaddress, NINumber, DLNumber, Driver_Status, Company_Name)"
                        "VALUES (:DFname, :DLname, :DEmail, :DPNumber, :DPassword, :DHaddress, :DBaddress, :DNINumber, :DLnumber, :Driver_Status, :TCname)");

            qry.bindValue(":DFname", DFname);
            qry.bindValue(":DLname", DLname);
            qry.bindValue(":DEmail", DEmail);
            qry.bindValue(":DPNumber", DPNumber);
            qry.bindValue(":DPassword", hashedPassword);
            qry.bindValue(":DHaddress", DHaddress);
            qry.bindValue(":DBaddress", DBaddress);
            qry.bindValue(":DNINumber", DNINumber);
            qry.bindValue(":DLnumber", DLnumber);
            qry.bindValue(":Driver_Status", Driver_Status);
            qry.bindValue(":TCname", TCname);

            if(qry.exec()) {
                QMessageBox::information(this, "Data Inserted", "Successfully Registrated");
            }else {
                QMessageBox::information(this, "Not Inserted!", "Data is not Inserted");
            }
        }
            }else {
        QMessageBox::information(this, "Not Connected", "The database is not connected");
    }

}
