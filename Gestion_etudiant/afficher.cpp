#include "afficher.h"
#include "ui_afficher.h"
#include "etudiant.h"
afficher::afficher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::afficher)
{
    ui->setupUi(this);
    ui->tableView->setModel(tmpetudiant.afficher());

}

afficher::~afficher()
{
    delete ui;
}



