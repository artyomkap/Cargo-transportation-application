#include "company_registration.h"
#include "ui_company_registration.h"
#include "welcomewindow.h"

Company_Registration::Company_Registration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Company_Registration)
{
    ui->setupUi(this);

    ui->CName->setPlaceholderText("Enter Company Name");
    ui->CAddress->setPlaceholderText("Enter Company Address");
    ui->CEmail->setPlaceholderText("Enter Company Email Address");
    ui->CPNumber->setPlaceholderText("Enter Company Phone Number");
    ui->CPassword->setPlaceholderText("Enter the Password");
}

Company_Registration::~Company_Registration()
{
    delete ui;    
}

void Company_Registration::on_pushButton_2_clicked()
{
    hide();
    WelcomeWindow* newWelcomeWindow = new WelcomeWindow(this);
    newWelcomeWindow->show();
}

void Company_Registration::on_pushButton_clicked()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {

        QString CName = ui->CName->text();
        QString CAddress = ui->CAddress->text();
        QString CEmail = ui->CEmail->text();
        QString CPNumber = ui->CPNumber->text();
        QString CPassword = ui->CPassword->text();

        QRegularExpression passwordRegex("^(?=.*[0-9])(?=.*[A-Z])(?=\\S+$).{8,}$");
        QRegularExpressionMatch passwordMatch = passwordRegex.match(CPassword);

        QRegularExpression emailRegex("[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}");
        QRegularExpressionMatch emailMatch = emailRegex.match(CEmail);

            if (!passwordMatch.hasMatch()) {
                QMessageBox::information(this, "Password Not Valid", "Try to youse at least 8 character, Uppercase letters");
            } else if (!emailMatch.hasMatch()) {
                QMessageBox::information(this, "Email Not Valid", "Please enter a valid email address");
            } else {
                // Password and email are valid, so hash the password and insert the data into the database
                QByteArray passwordHash = QCryptographicHash::hash(CPassword.toUtf8(), QCryptographicHash::Sha256);
                QString hashedPassword = QString(passwordHash.toHex());
                //Insert data from inputs to DB

                QSqlQuery qry;
                qry.prepare("INSERT INTO Tcompany (Cname, Caddress, CEmail, CPnumber, CPassword)"
                            "VALUES (:CName, :CAddress, :CEmail, :CPNumber, :CPassword)");
                qry.bindValue(":CName", CName);
                qry.bindValue(":CAddress", CAddress);
                qry.bindValue(":CEmail", CEmail);
                qry.bindValue(":CPNumber", CPNumber);
                qry.bindValue(":CPassword", hashedPassword);

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
