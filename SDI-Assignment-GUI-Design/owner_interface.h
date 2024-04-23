#ifndef OWNER_INTERFACE_H
#define OWNER_INTERFACE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>
#include "owner_profile.h"
#include "owner_placecargo.h"
#include "owner_orderhistory.h"


namespace Ui {
class Owner_Interface;
}

class Owner_Interface : public QWidget
{
    Q_OBJECT

public:
    explicit Owner_Interface(QWidget *parent = nullptr, int ownerId = -1);
    ~Owner_Interface();

private slots:    

    void on_pushButton_2_clicked();

    void on_owner_prof_button_clicked();

    void on_Place_cargo_button_clicked();

    void on_History_button_clicked();

private:
    Ui::Owner_Interface *ui;
    int ownerId;
    QSqlDatabase database;
    Owner_Profile *own_prof;
    Owner_PlaceCargo *own_cargo;
    Owner_OrderHistory *own_history;

};

#endif // OWNER_INTERFACE_H
