#ifndef CARGO_REGISTRATION_H
#define CARGO_REGISTRATION_H

#include <QWidget>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class Cargo_Registration;
}

class Cargo_Registration : public QWidget
{
    Q_OBJECT

public:
    explicit Cargo_Registration(QWidget *parent = nullptr);
    ~Cargo_Registration();

private slots:

    void on_backButton123_clicked();

    void on_pushButton_clicked();

private:
    Ui::Cargo_Registration *ui;

    QSqlDatabase database;
};

#endif // CARGO_REGISTRATION_H
