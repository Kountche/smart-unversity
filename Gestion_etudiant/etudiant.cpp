#include "etudiant.h"
#include <QDebug>

Etudiant::Etudiant()
{
  CIN="";
  nom="";
  prenom="";
  classe="";
  date="";
  sexe="";
  adressemail="";
  numtel="";
  filier="";
  motdepasse="";
}

Etudiant::Etudiant(QString CIN,QString nom,QString prenom,QString sexe,QString classe,QString adressemail,QString numtel,QString filier,QString date,QString motdepasse)
{
  this->CIN=CIN;
  this->nom=nom;
  this->prenom=prenom;
  this->classe=classe;
  this->date=date;
  this->sexe=sexe;
  this->adressemail=adressemail;
  this->numtel=numtel;
  this->filier=filier;
  this->motdepasse=motdepasse;
}
QString Etudiant::get_nom(){return  nom;}
QString Etudiant::get_prenom(){return prenom;}
QString Etudiant::get_CIN(){return  CIN;}
QString Etudiant::get_classe(){return classe;}
QString Etudiant::get_sexe(){return  sexe;}
QString Etudiant::get_adresse_mail(){return adressemail;}
QString Etudiant::get_num_tel(){return  numtel;}
QString Etudiant::get_filier(){return filier;}
QString Etudiant::get_date(){return  date;}
QString Etudiant::get_mot_de_passe(){return motdepasse;}

bool Etudiant::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO ETUDIANT (CIN, NOM, PRENOM,SEXE,DATE_NAIS,NUM_TEL,ADRESSE_EMAIL,CLASSE,FILIER,MOT_DE_PASSE) "
                    "VALUES (:CIN, :nom, :prenom, :sexe, :date, :numtel, :adressemail, :classe, :filier, :motdepasse)");
query.bindValue(":CIN", CIN);
query.bindValue(":nom", nom);
query.bindValue(":sexe", sexe);
query.bindValue(":date", date);
query.bindValue(":numtel", numtel);
query.bindValue(":adressemail", adressemail);
query.bindValue(":classe", classe);
query.bindValue(":filier", filier);
query.bindValue(":motdepasse", motdepasse);
query.bindValue(":prenom", prenom);
return     query.exec();
}


QSqlQueryModel * Etudiant::afficher()
{ QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from ETUDIANT");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PrEnom"));

    return model;
}


bool Etudiant::supprimer(QString CIN)
{
QSqlQuery query;
query.prepare("Delete from etudiant where CIN= :CIN ");
query.bindValue(":CIN", CIN);
return    query.exec();
}




