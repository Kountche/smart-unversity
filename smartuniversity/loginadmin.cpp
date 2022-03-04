#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QSqlError>
#include <QSqlQuery>
#include "loginadmin.h"
#include "menu.h"
#include "ui_loginadmin.h"

loginadmin::loginadmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginadmin)
{
    ui->setupUi(this);
    loginadmin::setWindowTitle("LOGN");

}

loginadmin::~loginadmin()
{
    delete ui;
}

void loginadmin::on_pushButton_clicked()
{
    QString username=ui->lineEdit->text();
       QString password= ui->lineEdit_2->text();
       QSqlQuery query;
           query.prepare("SELECT * FROM ADMIN WHERE ID_ADMIN= ? AND MOT_DE_PASSE= ?");
           query.addBindValue(username);
           query.addBindValue(password);
            query.exec();
              if(query.next())
              {
                  menu m;
                      m.setModal(true);
                      m.exec();

                  }
                    else
                        QMessageBox::critical(nullptr, QObject::tr("LOGIN"),
                                    QObject::tr("username ou mot de passe incorrecte réessayer !.\n"
                                                "Click Cancel to exit."), QMessageBox::Cancel);
              ui->lineEdit->clear();
              ui->lineEdit_2->clear();
}
