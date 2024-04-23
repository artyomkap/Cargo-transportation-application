#ifndef OWNER_PLACECARGO_H
#define OWNER_PLACECARGO_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class Owner_PlaceCargo;
}

class Owner_PlaceCargo : public QWidget
{
    Q_OBJECT

public:
    explicit Owner_PlaceCargo(QWidget *parent = nullptr, int ownerId = -1);
    ~Owner_PlaceCargo();

private slots:
    void on_Place_cargo_button_clicked();

    void on_Calculate_price_clicked();

    void on_Return_button_clicked();

private:
    Ui::Owner_PlaceCargo *ui;
    int ownerId;
     QSqlDatabase database;
};

#endif // OWNER_PLACECARGO_H
