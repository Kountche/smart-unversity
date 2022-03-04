#include "mod_etudiant.h"
#include "ui_mod_etudiant.h"

Modifier_etudiant::Modifier_etudiant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modifier_etudiant)
{
    ui->setupUi(this);
}

Modifier_etudiant::~Modifier_etudiant()
{
    delete ui;
}
