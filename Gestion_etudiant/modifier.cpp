#include "modifier.h"
#include "ui_modifier.h"
#include "mod_etudiant.h"

Modifier::Modifier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modifier)
{
    ui->setupUi(this);
}

Modifier::~Modifier()
{
    delete ui;
}

void Modifier::on_pushButton_clicked()
{
         Modifier_etudiant afficher;
        afficher.setModal(true);
        afficher.exec();
}
