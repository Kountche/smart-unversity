#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QSqlError>
#include <QSqlQuery>
#include "loginenseignant.h"
#include "ui_loginenseignant.h"

loginenseignant::loginenseignant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginenseignant)
{
    ui->setupUi(this);
    loginenseignant::setWindowTitle("LOGN");
}

loginenseignant::~loginenseignant()
{
    delete ui;
}

void loginenseignant::on_pushButton_clicked()
{
    QString email=ui->lineEdit->text();
       QString password= ui->lineEdit_2->text();
       QSqlQuery query;
           query.prepare("SELECT * FROM ENSEIGNANT WHERE EMAIL_ENS= ? AND PASSWORD_ENS= ?");
          query.addBindValue(email);
          query.addBindValue(password);
            query.exec();
              if(query.next())
              {


                  }
                    else
                        QMessageBox::critical(nullptr, QObject::tr("LOGIN"),
                                    QObject::tr("username ou mot de passe incorrecte réessayer !.\n"
                                                "Click Cancel to exit."), QMessageBox::Cancel);
              ui->lineEdit->clear();
              ui->lineEdit_2->clear();
}
