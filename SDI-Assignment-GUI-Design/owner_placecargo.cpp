#include "owner_placecargo.h"
#include "ui_owner_placecargo.h"
#include "owner_interface.h"

Owner_PlaceCargo::Owner_PlaceCargo(QWidget *parent, int ownerId) :
    QWidget(parent),
    ui(new Ui::Owner_PlaceCargo),
    ownerId(ownerId)
{
    ui->setupUi(this);
}

Owner_PlaceCargo::~Owner_PlaceCargo()
{
    delete ui;
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");
}

void Owner_PlaceCargo::on_Calculate_price_clicked()
{
    int weight_price;
    int price;
    int total_price;
    int departurePoint = ui->Departure_combo->currentIndex();
    int deliveryPoint = ui->Delivery_combo->currentIndex();

    QSqlQuery query;
       query.prepare("SELECT Cost FROM AreaCost WHERE Start = :start AND End = :end");
       query.bindValue(":start", departurePoint);
       query.bindValue(":end", deliveryPoint);
       query.exec();

       int cargo_type = ui->Condtitions_combo->currentIndex();

       if(cargo_type == 0) {
          price = 100;
       } else if (cargo_type == 1){
            price = 120;
       } else if (cargo_type == 2){
           price = 80;
       } else {
           price = 150;
       }

       QString cargo_weight = ui->cargo_weight->text();
       int cargo_weight1 = cargo_weight.toInt();

       if (cargo_weight1 < 1000) {
           weight_price = 100;
       } else if (cargo_weight1 < 2000) {
           weight_price = 200;
       } else if (cargo_weight1 < 3000) {
           weight_price = 300;
       } else if (cargo_weight1 < 4000) {
           weight_price = 400;
       } else {
           weight_price = 500;
       }

       if (query.next()) {
               double cost = query.value(0).toDouble();
               total_price = cost + weight_price + price;
           } else {
           QMessageBox::information(this, "Database error", "Error");
       }

       ui->total_price_text->setText(QString::number(total_price));

}

void Owner_PlaceCargo::on_Place_cargo_button_clicked()
{
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/ntu-user/eclipse-workspace/SDI-assessment/SDI-Assignment-GUI-Design/1ver.db");

    if(database.open()) {
        int total_price;
        int weight_price;
        int price;
        int departurePoint = ui->Departure_combo->currentIndex();
        int deliveryPoint = ui->Delivery_combo->currentIndex();
        int cargo_type = ui->Condtitions_combo->currentIndex();
        QString cargo_note = ui->cargo_note->text();
        QString cargo_weight = ui->cargo_weight->text();

        QSqlQuery query;
           query.prepare("SELECT Cost FROM AreaCost WHERE Start = :start AND End = :end");
           query.bindValue(":start", departurePoint);
           query.bindValue(":end", deliveryPoint);
           query.exec();



           if(cargo_type == 0) {
              price = 100;
           } else if (cargo_type == 1){
                price = 120;
           } else if (cargo_type == 2){
               price = 80;
           } else {
               price = 150;
           }


           int cargo_weight1 = cargo_weight.toInt();

           if (cargo_weight1 < 1000) {
               weight_price = 100;
           } else if (cargo_weight1 < 2000) {
               weight_price = 200;
           } else if (cargo_weight1 < 3000) {
               weight_price = 300;
           } else if (cargo_weight1 < 4000) {
               weight_price = 400;
           } else {
               weight_price = 500;
           }

           if (query.next()) {
                   int cost = query.value(0).toInt();
                   total_price = cost + weight_price + price;
               } else {
               QMessageBox::information(this, "Database error", "Error");
           }



           QString state = "Submitted";

           query.prepare("INSERT INTO Cargo (departurePoint, deliveryPoint, Weight, StorageCon, state, Cowner, note, Cost)"
                         "VALUES (:start, :end, :weight, :type, :state, :ownerId, :note, :totalcost)");
           query.bindValue(":start", departurePoint);
           query.bindValue(":end", deliveryPoint);
           query.bindValue(":type",cargo_type);
           query.bindValue(":weight", cargo_weight1);
           query.bindValue(":state", state);
           query.bindValue(":ownerId", ownerId);
           query.bindValue(":note", cargo_note);
           query.bindValue(":totalcost", total_price);

           if(query.exec()) {
               QMessageBox::information(this, "Data Inserted", "Cargo Order submitted");
           }else {
               QMessageBox::information(this, "Not Inserted!", "Data is not Inserted");
           }

    }else {
        QMessageBox::information(this, "Not Connected", "The database is not connected");
    }


}

void Owner_PlaceCargo::on_Return_button_clicked()
{
    hide();
    Owner_Interface* newOwneInterface = new Owner_Interface(nullptr, ownerId);
    newOwneInterface->show();
}
