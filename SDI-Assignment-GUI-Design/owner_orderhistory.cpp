#include <QStandardItemModel>
#include "owner_orderhistory.h"
#include "ui_owner_orderhistory.h"
#include "owner_interface.h"

Owner_OrderHistory::Owner_OrderHistory(QWidget *parent, int ownerId) :
    QWidget(parent),
    ui(new Ui::Owner_OrderHistory),
    ownerId(ownerId)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {


        QSqlQuery query;
        query.prepare("SELECT * FROM Cargo WHERE Cowner = :ownerId");
        query.bindValue(":ownerId", ownerId);

        if (query.exec()) {

            QSqlTableModel *model = new QSqlTableModel();
            model->setTable("Cargo");
            model->select();

            ui->tableView->setModel(model);

        }



    }else {
        QMessageBox::information(this, "Database not opened", "Database in not opened");
    }
}

Owner_OrderHistory::~Owner_OrderHistory()
{
    delete ui;
}


void Owner_OrderHistory::on_pushButton_clicked()
{
    hide();
    Owner_Interface* NewOwnerInterface1 = new Owner_Interface(nullptr, ownerId);
    NewOwnerInterface1->show();
}
