#ifndef OWNER_PROFILE_H
#define OWNER_PROFILE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>



namespace Ui {
class Owner_Profile;
}

class Owner_Profile : public QWidget
{
    Q_OBJECT

public:
    explicit Owner_Profile(QWidget *parent = nullptr, int ownerId = -1);
    ~Owner_Profile();

private slots:
    void on_Return_button_clicked();

    void on_Update_Name_clicked();

    void on_Update_Surname_clicked();

    void on_Update_email_clicked();

    void on_Update_Phone_clicked();

private:
    Ui::Owner_Profile *ui;
    int ownerId;
    QSqlDatabase database;
};

#endif // OWNER_PROFILE_H
