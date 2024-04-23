#include "company_interface.h"
#include "ui_company_interface.h"
#include "welcomewindow.h"

Company_Interface::Company_Interface(QWidget *parent, int companyId) :
    QWidget(parent),
    ui(new Ui::Company_Interface),
    companyId(companyId)
{
    ui->setupUi(this);    
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {
            QSqlQuery qry;
            qry.prepare("SELECT * FROM Tcompany WHERE Company_Id = :CompanyId");
            qry.bindValue(":CompanyId", companyId);

            if(qry.exec() && qry.next()) {
                QString CompanyName = qry.value(0).toString();

                ui->Company_Name->setText(CompanyName);


            } else {
                QMessageBox::information(this, "Failed", "Failed to retrieve data from database");
            }

    } else {
           QMessageBox::information(this, "Failed to open", "Database is not open");
    }

    if(database.open()) {
        QSqlQuery query;
        query.prepare("SELECT * FROM Cargo");

        if (query.exec()) {

            QSqlTableModel *model = new QSqlTableModel();
            model->setTable("Cargo");
            model->select();

            ui->tableView->setModel(model);

        }
    }
}

Company_Interface::~Company_Interface()
{
    delete ui;
}

void Company_Interface::on_pushButton_2_clicked()
{
    QString CargoId1 = ui->Cargo_Id_Input->text();
    int CargoId = CargoId1.toInt();
    hide();
    cargo_set = new Company_CargoSettings(nullptr, CargoId, companyId);
    cargo_set->show();

}

void Company_Interface::on_pushButton_clicked()
{
    hide();
    WelcomeWindow* NewWelcomeWindow = new WelcomeWindow(nullptr);
    NewWelcomeWindow->show();
}
