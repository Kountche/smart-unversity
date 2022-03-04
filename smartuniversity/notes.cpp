#include "notes.h"
#include <QString>


Notes::Notes()
{

}

Notes::Notes(int a,double b,double c,QString m)
{
    id_etudiant=a;
    notecc=b;
    noteexam=c;
    moy=((notecc*0.4)+(noteexam*0.6));
    matiere=m;

}

int Notes::getID_ETUDIANT(){return id_etudiant;}
double Notes::getNOTECC(){return notecc;}
double Notes::getNOTEEXAM(){return noteexam;}
double Notes:: getMOY(){return moy;}
QString Notes::getmatiere(){return  matiere;}

bool Notes::ajouterN()
{
QSqlQuery query;
QString res=QString::number(id_etudiant);

query.prepare("INSERT INTO NOTES (ID_ETUDIANT, NOTECC, NOTEEXAM, MOY)"
            "VALUES (:id_etudiant, :notecc, :noteexam, :moy)");

query.bindValue(":id_etudiant",res);
query.bindValue(":notecc",notecc);
query.bindValue(":noteexam",noteexam);
query.bindValue(":moy",moy);



return query.exec();
}

double Notes::MoyClasse()
{
  QSqlQuery query;
  QSqlQuery query1;
  double x=0.0;
  double y=0.0;

query.prepare("select sum (MOY) from NOTES");
if (query.exec())
{
    while(query.next())
    {
        x=query.value(0).toDouble();
    }
}

query1.prepare("select count (ID_ETUDIANT) from NOTES");
if (query1.exec())
{
    while(query1.next())
    {
        y=query1.value(0).toDouble();
    }
}

return  (x/y);
}

bool Notes::ModifierN()
{
    QSqlQuery query;

    QString res=QString::number(id_etudiant);
    query.prepare(" UPDATE NOTES set NOTECC=:notecc , NOTEEXAM=:noteexam, MOY=:moy where ID_ETUDIANT=:id_etudiant ");
    query.bindValue(":id_etudiant",res);
    query.bindValue(":notecc",notecc);
    query.bindValue(":noteexam",noteexam);
    query.bindValue(":moy",(notecc*0.4)+(noteexam*0.6));


    return query.exec();
}

/*bool Notes::verifierExid_etudiant(int id_etudiant)
{
    int i=0;

    QSqlQuery query;
    query.prepare("select * from NOTES where ID_ETUDIANT= ? ");
   query.addBindValue(id_etudiant);
    if(query.exec())
    {while(query.next())
        {i++;}}

    if(i!=0)
        return true ;
    else
        return false;

}*/

bool Notes:: supprimer(int idd)
{
    QSqlQuery query;
    QString res=QString::number(idd);
    query.prepare("delete from NOTES where ID_ETUDIANT=:id_etudiant");
    query.bindValue(":id_etudiant",res);

    return query.exec();
}

QSqlQueryModel * Notes:: afficherN()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    QSqlQueryModel * model2=new QSqlQueryModel();

    model->setQuery("select *from NOTES , ETUDIANT WHERE ID=ID_ETUDIANT");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID_ETUDIANT"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOTECC"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("NOTEEXAM"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("MOYENNE"));
    model2->setHeaderData(4,Qt::Horizontal,QObject::tr("NOM"));
    model2->setHeaderData(5,Qt::Horizontal,QObject::tr("PRENOM"));


    return model;
}
