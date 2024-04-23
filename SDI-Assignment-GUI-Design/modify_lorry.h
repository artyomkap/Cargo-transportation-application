#ifndef MODIFY_LORRY_H
#define MODIFY_LORRY_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class Modify_Lorry;
}

class Modify_Lorry : public QWidget
{
    Q_OBJECT

public:
    explicit Modify_Lorry(QWidget *parent = nullptr, int DriverId = -1);
    ~Modify_Lorry();

private slots:
    void on_Reg_number_upd_clicked();

    void on_Lorry_size_upd_clicked();

    void on_Lorry_weight_upd_clicked();

    void on_Return_button_clicked();

private:
    Ui::Modify_Lorry *ui;
    int DriverId;
    QSqlDatabase database;
};

#endif // MODIFY_LORRY_H
