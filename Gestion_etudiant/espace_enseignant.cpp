#include "espace_enseignant.h"
#include "ui_espace_enseignant.h"

Espace_Enseignant::Espace_Enseignant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Espace_Enseignant)
{
    ui->setupUi(this);
}

Espace_Enseignant::~Espace_Enseignant()
{
    delete ui;
}
