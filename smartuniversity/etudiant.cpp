#include "etudiant.h"
#include "classe.h"
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

Etudiant::Etudiant(QString CIN, QString nom, QString prenom, QString sexe, QString classe, QString numtel,QString filier,QString date)
{
  this->CIN=CIN;
  this->nom=nom;
  this->prenom=prenom;
  this->classe=classe;
  this->date=date;
  this->sexe=sexe;
  this->adressemail=nom+"."+prenom+"@technocrates.com";
  this->numtel=numtel;
  this->filier=filier;
  this->motdepasse=nom+"_"+prenom;
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

model->setQuery("select * from ETUDIANT order by CIN");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PrEnom"));

    return model;
}

QSqlQueryModel * Etudiant::afficherperso1(QString y)
{ QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from ETUDIANT e inner join CLASSE c on e.CLASSE = c.NOM_CLASSE AND c.NOM_CLASSE LIKE'"+y+"%'");
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

bool Etudiant::modifier()
{
QSqlQuery query;
query.prepare("UPDATE ETUDIANT SET CIN=:CIN,NOM=:nom,PRENOM=:prenom,SEXE=:sexe,DATE_NAIS=:date,ADRESSE_EMAIL=:adressemail,CLASSE=:classe,FILIER=:filier,MOT_DE_PASSE=:motdepasse where CIN = :CIN");
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

bool Etudiant::affecter(QString classeetud)
{
QSqlQuery query;
QSqlQuery query1;
Classe c;
int nbr_etudiant = 0;
query.prepare("UPDATE ETUDIANT SET CLASSE=:classe where CIN=:CIN");
query.bindValue(":classe", classeetud);
nbr_etudiant=c.nbretd(classeetud);
query1.prepare("UPDATE CLASSE SET NBR_ETUDIANT= ? ");
query1.addBindValue(nbr_etudiant+1);

return     query.exec();
}


QSqlQueryModel * Etudiant::afficher_trinom()
{ QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from ETUDIANT order by NOM");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PrEnom"));

    return model;
}

QSqlQueryModel * Etudiant::afficher_triprenom()
{ QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from ETUDIANT order by PRENOM");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("PrEnom"));

    return model;
}
