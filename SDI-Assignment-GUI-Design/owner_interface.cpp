#include "owner_interface.h"
#include "ui_owner_interface.h"
#include "welcomewindow.h"


Owner_Interface::Owner_Interface(QWidget *parent, int ownerId) :
    QWidget(parent),
    ui(new Ui::Owner_Interface),
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

                ui->Owner_FirstName->setText(OFirstName);


            } else {
                QMessageBox::information(this, "Failed", "Failed to retrieve data from database");
            }

    } else {
           QMessageBox::information(this, "Failed to open", "Database is not open");
    }

    if(database.open()) {
        QSqlQuery qry;
        qry.prepare("SELECT state FROM Cargo WHERE Cowner = :ownerId");
        qry.bindValue(":ownerId", ownerId);
        if(qry.exec() && qry.next()){

            QString status = qry.value(0).toString();
            ui->Order_status->setText(status);

            QSqlTableModel *model = new QSqlTableModel();
            model->setTable("Cargo");
            model->setFilter("Cowner = " + QString::number(ownerId));

            model->select();

            ui->tableView->setModel(model);

            }else {
                QMessageBox::information(this, "Failed", "Failed to retrieve data from database");
            }

        }else {
            QMessageBox::information(this, "Failed to open", "Database is not open");
     }

}


Owner_Interface::~Owner_Interface()
{
    delete ui;
}

void Owner_Interface::on_owner_prof_button_clicked()
{
    hide();
    own_prof = new Owner_Profile(nullptr, ownerId);
    own_prof->show();
}

void Owner_Interface::on_pushButton_2_clicked()
{
    hide();
    WelcomeWindow* newWelcomeWindow = new WelcomeWindow(this);
    newWelcomeWindow->show();
}

void Owner_Interface::on_Place_cargo_button_clicked()
{
    hide();
    own_cargo = new Owner_PlaceCargo(nullptr, ownerId);
    own_cargo->show();
}


void Owner_Interface::on_History_button_clicked()
{
    hide();
    own_history = new Owner_OrderHistory(nullptr, ownerId);
    own_history->show();
}
