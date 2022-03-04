#ifndef ESPACE_ADMIN_H
#define ESPACE_ADMIN_H
#include <QSqlDatabase>
#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class Espace_Admin;
}

class Espace_Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Espace_Admin(QWidget *parent = nullptr);
    ~Espace_Admin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Espace_Admin *ui;
    QSqlDatabase db;
};

#endif // ESPACE_ADMIN_H
