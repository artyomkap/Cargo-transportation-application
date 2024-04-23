#include "welcomewindow.h"
#include "./ui_welcomewindow.h"

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WelcomeWindow)

{
    ui->setupUi(this);

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void WelcomeWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void WelcomeWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void WelcomeWindow::on_pushButton_5_clicked()
{
    hide();
    window = new Cargo_Registration;
    window->show();
}

void WelcomeWindow::on_pushButton_6_clicked()
{
    hide();
    company = new Company_Registration;
    company->show();
}

void WelcomeWindow::on_pushButton_7_clicked()
{
    hide();
    driver = new Driver_Registration;
    driver->show();
}

void WelcomeWindow::on_ChooseAnotherRole1_clicked()
{
    ui->LoginStack->setCurrentIndex(1);
}

void WelcomeWindow::on_ChooseRole2_clicked()
{
    ui->LoginStack->setCurrentIndex(2);
}

void WelcomeWindow::on_ChooseRole3_clicked()
{
    ui->LoginStack->setCurrentIndex(0);
}

void WelcomeWindow::on_Login_Owner_clicked()
{
    QString OEmail = ui->Owner_Email->text();
    QString OPassword = ui->Owner_Password->text();

    if(database.open()) {
        QSqlQuery qry1;
        qry1.prepare("SELECT Owner_Id, Password FROM Owner WHERE Email = :OEmail");
        qry1.bindValue(":OEmail", OEmail);


        if(!qry1.exec()) {
                    QMessageBox::information(this, "Not Selected", "Wrong Login or Password, try again");
                } else {
                    if(qry1.next()) {
                        QString hashedPassword = qry1.value(1).toString();
                        QByteArray passwordHash = QCryptographicHash::hash(OPassword.toUtf8(), QCryptographicHash::Sha256);
                        QString hashedInputPassword = QString(passwordHash.toHex());

                        if(hashedInputPassword == hashedPassword) {
                            ownerId = qry1.value(0).toInt();
                            QMessageBox::information(this, "Success Login","You successfully logined in");
                            hide();
                            owner_int = new Owner_Interface(nullptr, ownerId);
                            owner_int->show();
                        } else {
                            QMessageBox::information(this, "Failed Login", "Wrong Login or Password, try again");
                        }
                    } else {
                        QMessageBox::information(this, "Failed Login", "Login Failed");
                    }
                }

    }else {
        QMessageBox::information(this, "Not Connected", "Database is not connected");
    }
}

void WelcomeWindow::on_Login_Company_clicked()
{
    QString CEmail = ui->Company_Email->text();
    QString CPassword = ui->Company_Password->text();

    if(database.open()) {

        QSqlQuery qry;
        qry.prepare("SELECT Company_Id, CPassword FROM Tcompany WHERE CEmail = :CEmail");
        qry.bindValue(":CEmail", CEmail);

        if(!qry.exec()) {
                    QMessageBox::information(this, "Not Selected", "Wrong Login or Password, try again");
                } else {                    
                    if(qry.next()) {
                        QString hashedPassword = qry.value(1).toString();
                        QByteArray passwordHash = QCryptographicHash::hash(CPassword.toUtf8(), QCryptographicHash::Sha256);
                        QString hashedInputPassword = QString(passwordHash.toHex());

                        if(hashedInputPassword == hashedPassword) {
                            companyId = qry.value(0).toInt();
                            QMessageBox::information(this, "Success Login", "You successfully logined in");
                            hide();
                            comp_int = new Company_Interface(nullptr, companyId);
                            comp_int->show();
                        } else {
                            QMessageBox::information(this, "Failed Login", "Wrong Login or Password, try again");
                        }
                    } else {
                        QMessageBox::information(this, "Failed Login", "Login Failed");
                    }
                }

    }else {
        QMessageBox::information(this, "Not Connected", "Database is not connected");
    }
}

void WelcomeWindow::on_Login_Driver_clicked()
{
    QString DEmail = ui->Driver_Email->text();
    QString DPassword = ui->Driver_Password->text();

    if(database.open()) {
        QSqlQuery qry2;
        qry2.prepare("SELECT Driver_Id, DPassword FROM Driver WHERE DEmail = :DEmail");
        qry2.bindValue(":DEmail", DEmail);


        if(!qry2.exec()) {
                    QMessageBox::information(this, "Not Selected", "Wrong Login or Password, try again");
                } else {
                    if(qry2.next()) {
                        QString hashedPassword = qry2.value(1).toString();
                        QByteArray passwordHash = QCryptographicHash::hash(DPassword.toUtf8(), QCryptographicHash::Sha256);
                        QString hashedInputPassword = QString(passwordHash.toHex());

                        if(hashedInputPassword == hashedPassword) {
                            DriverId = qry2.value(0).toInt();
                            QMessageBox::information(this, "Success Login", "You successfully logined in");
                            hide();
                            drive_int = new Driver_Interface(nullptr, DriverId);
                            drive_int->show();
                        } else {
                            QMessageBox::information(this, "Failed Login", "Wrong Login or Password, try again");
                        }

                    } else {
                        QMessageBox::information(this, "Failed Login", "Login Failed");
                    }
                }


    }else {
        QMessageBox::information(this, "Not Connected", "Database is not connected");
    }
}
