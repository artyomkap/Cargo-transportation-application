#ifndef OWNER_ORDERHISTORY_H
#define OWNER_ORDERHISTORY_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QTableView>


namespace Ui {
class Owner_OrderHistory;
}

class Owner_OrderHistory : public QWidget
{
    Q_OBJECT

public:
    explicit Owner_OrderHistory(QWidget *parent = nullptr, int ownerId = -1);
    ~Owner_OrderHistory();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Owner_OrderHistory *ui;
    int ownerId;
    QSqlDatabase database;
};

#endif // OWNER_ORDERHISTORY_H
