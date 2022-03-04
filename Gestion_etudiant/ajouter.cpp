#include "ajouter.h"
#include "ui_ajouter.h"
#include "etudiant.h"
#include <QMessageBox>
Ajouter::Ajouter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ajouter)
{
    ui->setupUi(this);
}

Ajouter::~Ajouter()
{
    delete ui;

}



void Ajouter::on_pushButton_clicked()
{

        QString CIN=ui->lineEdit->text();
        QString nom= ui->lineEdit_2->text();
        QString prenom= ui->lineEdit_3->text();
        QString sexe= ui->lineEdit_7->text();
        QString classe= ui->lineEdit_9->text();
        QString adressemail= ui->lineEdit_6->text();
        QString numtel= ui->lineEdit_5->text();
        QString filier= ui->lineEdit_10->text();
        QString date= ui->lineEdit_8->text();
        QString motdepasse= ui->lineEdit_4->text();
      Etudiant e(CIN,nom,prenom,sexe,classe,adressemail,numtel,filier,date,motdepasse);
      bool test=e.ajouter();
      if(test)
   {
    QMessageBox::information(nullptr, QObject::tr("Ajouter un étudiant"),
                      QObject::tr("Etudiant ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
      }

}
