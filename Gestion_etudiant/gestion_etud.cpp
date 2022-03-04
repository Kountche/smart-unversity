#include "gestion_etud.h"
#include "ui_gestion_etud.h"
#include "ajouter.h"
#include "modifier.h"
#include "afficher.h"
#include "supprimer.h"
gestion_etud::gestion_etud(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestion_etud)
{
    ui->setupUi(this);
}

gestion_etud::~gestion_etud()
{
    delete ui;
}

void gestion_etud::on_pushButton_clicked()
{
    Ajouter afficher;
        afficher.setModal(true);
        afficher.exec();
}

void gestion_etud::on_pushButton_4_clicked()
{
   Modifier afficher;
        afficher.setModal(true);
        afficher.exec();
}

void gestion_etud::on_pushButton_2_clicked()
{
    afficher afficher;
         afficher.setModal(true);
         afficher.exec();
}

void gestion_etud::on_pushButton_3_clicked()
{
    supprimer afficher;
         afficher.setModal(true);
         afficher.exec();
}
