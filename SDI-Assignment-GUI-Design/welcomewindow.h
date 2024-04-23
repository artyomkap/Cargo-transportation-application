#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include "cargo_registration.h"
#include "company_registration.h"
#include "driver_registration.h"
#include "owner_interface.h"
#include "company_interface.h"
#include "driver_interface.h"
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class WelcomeWindow; }
QT_END_NAMESPACE

class WelcomeWindow : public QMainWindow
{
    Q_OBJECT

public:
    WelcomeWindow(QWidget *parent = nullptr);
    ~WelcomeWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_ChooseAnotherRole1_clicked();

    void on_ChooseRole2_clicked();

    void on_ChooseRole3_clicked();

    void on_Login_Owner_clicked();

    void on_Login_Company_clicked();

    void on_Login_Driver_clicked();

private:
    Ui::WelcomeWindow *ui;
    Cargo_Registration *window;
    Company_Registration *company;
    Driver_Registration *driver;
    Owner_Interface *owner_int;
    Company_Interface *comp_int;
    Driver_Interface *drive_int;
    QSqlDatabase database;
    int ownerId;
    int companyId;
    int DriverId;

};
#endif // WELCOMEWINDOW_H
