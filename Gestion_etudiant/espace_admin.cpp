#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QSqlError>
#include <QSqlQuery>
#include "espace_admin.h"
#include "ui_espace_admin.h"
#include "ajouter.h"
#include "connexion.h"
#include "gestion_etud.h"
#include "tout_gestions.h"
Espace_Admin::Espace_Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Espace_Admin)
{
    ui->setupUi(this);

}

Espace_Admin::~Espace_Admin()
{
    delete ui;
}

void Espace_Admin::on_pushButton_clicked()
{
     tout_gestions afficher;
        afficher.setModal(true);
        afficher.exec();

}
