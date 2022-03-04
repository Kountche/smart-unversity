#include "classe.h"
#include <QDebug>
Classe::Classe()
{
nom_classe="";
nbr_etud=0;
}
Classe::Classe(QString nom_classe,int nbr_etud)
{
  this->nom_classe=nom_classe;
  this->nbr_etud=nbr_etud;
}

QString Classe::get_nom_classe(){return  nom_classe;}
int Classe::get_id_nbr_etud(){return nbr_etud;}


bool Classe::ajouter()
{

    QSqlQuery query,query1;
int y=0;
query1.prepare("SELECT COUNT (*) FROM ETUDIANT WHERE CLASSE= ? ");
query1.addBindValue(nom_classe);
if (query1.exec())
{
    while (query1.next())
    {
       y=query1.value(0).toInt();
    }
}

query.prepare("INSERT INTO CLASSE (NOM_CLASSE, NBR_ETUDIANT) "
                    "VALUES (:nom_classe, :nbr_etud)");

query.bindValue(":nom_classe", nom_classe);
query.bindValue(":nbr_etud",y);
return    query.exec();
}



QSqlQueryModel *  Classe::afficher()
{ QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from CLASSE order by NOM_CLASSE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Classe"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nombre d'etudiant"));


    return model;
}

QSqlQueryModel * Classe::afficherperso2(QString val)
{ QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from CLASSE c inner join ETUDIANT e on e.CLASSE = c.NOM_CLASSE AND where CIN= :val or e.NOM= :val or e.PRENOM= :val or e.SEXE= :val or e.DATE_NAIS= :val or e.NUM_TEL= :val or e.ADRESSE_EMAIL= :val or e.CLASSE= :val or e.FILIER= :val or e.MOT_DE_PASSE= :val ");
model->query().bindValue(":val", val);
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Classe"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nombre d'etudiant"));


    return model;
}


bool Classe::supprimer(QString nom_classe)
{
QSqlQuery query;
query.prepare("Delete from CLASSE where NOM_CLASSE= :nom_classe ");
query.bindValue(":nom_classe", nom_classe);
return    query.exec();
}

int Classe::nbretd(QString nomClass)
{
    QSqlQuery query1;
int y=0;
query1.prepare("SELECT COUNT (*) FROM ETUDIANT WHERE CLASSE= ? ");
query1.addBindValue(nomClass);
if (query1.exec())
{
    while (query1.next())
    {
       y=query1.value(0).toInt();
    }
}
return y+1;
}


bool Classe::modifier()
{
QSqlQuery query;
QString res= QString::number(nbr_etud);
query.prepare("UPDATE CLASSE SET NOM_CLASSE=:nom_classe,NBR_ETUDIANT=:nbr_etud where NOM_CLASSE = :nom_classe");
query.bindValue(":nom_classe", nom_classe);
query.bindValue(":nbr_etud",res);

return    query.exec();
}


QSqlQueryModel *  Classe::afficherlist()
{ QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select NOM_CLASSE from CLASSE order by NOM_CLASSE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("Classe"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nombre d'etudiant"));


    return model;
}


