#include "espace_etudiant.h"
#include "ui_espace_etudiant.h"

Espace_Etudiant::Espace_Etudiant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Espace_Etudiant)
{
    ui->setupUi(this);
}

Espace_Etudiant::~Espace_Etudiant()
{
    delete ui;
}

