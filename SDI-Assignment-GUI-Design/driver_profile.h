#ifndef DRIVER_PROFILE_H
#define DRIVER_PROFILE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class Driver_Profile;
}

class Driver_Profile : public QWidget
{
    Q_OBJECT

public:
    explicit Driver_Profile(QWidget *parent = nullptr, int DriverId = -1);
    ~Driver_Profile();

private slots:
    void on_Return_button_clicked();

    void on_Update_FName_clicked();

    void on_Update_LName_clicked();

    void on_Update_Email_clicked();

    void on_Update_PNumber_clicked();

    void on_Update_NINumber_clicked();

    void on_Update_DLNumber_clicked();

private:
    Ui::Driver_Profile *ui;
    int DriverId;
    QSqlDatabase database;
};

#endif // DRIVER_PROFILE_H
