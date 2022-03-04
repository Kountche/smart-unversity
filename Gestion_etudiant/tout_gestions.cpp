#include "tout_gestions.h"
#include "ui_tout_gestions.h"
#include "gestion_etud.h"
tout_gestions::tout_gestions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tout_gestions)
{
    ui->setupUi(this);
}

tout_gestions::~tout_gestions()
{
    delete ui;
}

void tout_gestions::on_pushButton_clicked()
{
    gestion_etud afficher;
         afficher.setModal(true);
         afficher.exec();
}
