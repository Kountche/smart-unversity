#include "enseignant.h"
#include <QString>
enseignant::enseignant()
{
    cin_ens=0;
    nom_ens="";
    prenom_ens="";
    sexe_ens="";
    matiere="";
    email_ens="";
    password_ens="";
    salaire=0;
}

enseignant::enseignant(int a ,QString b,QString c, QString d, QString e)
{
    cin_ens=a;
    nom_ens=b;
    prenom_ens=c;
    sexe_ens=d;
    matiere=e;
    email_ens=nom_ens+"."+prenom_ens+"@technorates.com";
    password_ens=nom_ens+"_"+prenom_ens;
    salaire=0;
}


int enseignant::getcin(){return cin_ens;}
QString enseignant::getnom_ens(){return nom_ens;}
QString enseignant::getprenom_ens(){return prenom_ens;}
QString enseignant::getsexe_ens(){return sexe_ens;}
QString enseignant::getmatiere_ens(){return matiere;}
QString enseignant::getemail_ens(){return email_ens;}
QString enseignant::getpassword_ens(){return password_ens;}
double enseignant::getsalaire(){return salaire;}


bool enseignant::ajouter()
{
    QSqlQuery query;
       QString res=QString::number(cin_ens);
       query.prepare("INSERT INTO ENSEIGNANT(CIN_ENS, NOM_ENS, PRENOM_ENS, SEXE_ENS, MATIERE, EMAIL_ENS, PASSWORD_ENS, SALAIRE)"
                     "VALUES (:cin_ens, :nom_ens, :prenom_ens, :sexe_ens, :matiere, :email_ens, :password_ens, :salaire)");

       query.bindValue(":cin_ens",res);
       query.bindValue(":nom_ens",nom_ens);
       query.bindValue(":prenom_ens",prenom_ens);
       query.bindValue(":sexe_ens",sexe_ens);
       query.bindValue(":matiere",matiere);
       query.bindValue(":email_ens",email_ens);
       query.bindValue(":password_ens",password_ens);
       query.bindValue(":salaire",salaire);

       return query.exec();
}


bool enseignant::Modifier()
{
    QSqlQuery query;
    QString res=QString::number(cin_ens);
    query.prepare(" UPDATE ENSEIGNANT set NOM_ENS=:nom_ens , PRENOM_ENS=:prenom_ens , SEXE_ENS=:sexe_ens , MATIERE=:matiere , EMAIL_ENS=:email_ens , PASSWORD_ENS=:password_ens , SALAIRE=:salaire where CIN_ENS=:CIN_ens ");
    query.bindValue(":cin_ens",res);
    query.bindValue(":nom_ens",nom_ens);
    query.bindValue(":prenom_ens",prenom_ens);
    query.bindValue(":sexe_ens",sexe_ens);
    query.bindValue(":matiere",matiere);
    query.bindValue(":email_ens",email_ens);
    query.bindValue(":password_ens",password_ens);
    query.bindValue(":salaire",salaire);

    return query.exec();
}

QSqlQueryModel * enseignant:: afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select *from ENSEIGNANT");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN_ENS"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM_ENS"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM_ENS"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("SEXE_ENS"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("EMAIL_ENS"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("SALAIRE"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("PASSWORD_ENS"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("MATIERE"));

    return model;
}



bool enseignant:: supprimer(int cin)
{
    QSqlQuery query;
    QString res=QString::number(cin);
    query.prepare("delete from ENSEIGNANT where CIN_ENS=:cin");
    query.bindValue(":cin",res);

    return query.exec();
}



QSqlQueryModel *enseignant::sortcin()
{


    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select *from ENSEIGNANT ORDER BY CIN_ENS");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN_ENS"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM_ENS"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM_ENS"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("SEXE_ENS"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("EMAIL_ENS"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("SALAIRE"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("PASSWORD_ENS"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("MATIERE"));


    return model;
}


QSqlQueryModel * enseignant::sortnom()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select *from ENSEIGNANT ORDER BY NOM_ENS");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN_ENS"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM_ENS"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM_ENS"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("SEXE_ENS"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("EMAIL_ENS"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("SALAIRE"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("PASSWORD_ENS"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("MATIERE"));


    return model;
}

QSqlQueryModel * enseignant::sortprenom()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select *from ENSEIGNANT ORDER BY PRENOM_ENS");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN_ENS"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM_ENS"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM_ENS"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("SEXE_ENS"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("EMAIL_ENS"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("SALAIRE"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("PASSWORD_ENS"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("MATIERE"));


    return model;
}

QSqlQueryModel * enseignant::sortsalaire()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select *from ENSEIGNANT ORDER BY SALAIRE");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN_ENS"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM_ENS"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM_ENS"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("SEXE_ENS"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("EMAIL_ENS"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("SALAIRE"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("PASSWORD_ENS"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("MATIERE"));


    return model;
}

QSqlQueryModel * enseignant::cherchercin(int cin)
{
    QSqlQueryModel * model=new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from ENSEIGNANT where CIN_ENS= ? ");
    query.addBindValue(cin);
    query.exec();


    model->setQuery(query);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN_ENS"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM_ENS"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM_ENS"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("SEXE_ENS"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("EMAIL_ENS"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("SALAIRE"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("PASSWORD_ENS"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("MATIERE"));



  return model;
}

QSqlQueryModel * enseignant::cherchernom(QString nom)
{
    QSqlQueryModel * model=new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from ENSEIGNANT where NOM_ENS= ? ");
    query.addBindValue(nom);
    query.exec();


    model->setQuery(query);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN_ENS"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM_ENS"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM_ENS"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("SEXE_ENS"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("EMAIL_ENS"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("SALAIRE"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("PASSWORD_ENS"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("MATIERE"));




  return model;
}

QSqlQueryModel * enseignant::chercherprenom(QString prenom)
{
    QSqlQueryModel * model=new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from ENSEIGNANT where PRENOM_ENS= ? ");
    query.addBindValue(prenom);
    query.exec();


    model->setQuery(query);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN_ENS"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM_ENS"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM_ENS"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("SEXE_ENS"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("EMAIL_ENS"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("SALAIRE"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("PASSWORD_ENS"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("MATIERE"));




  return model;
}

QSqlQueryModel * enseignant::cherchermatiere(QString matiere)
{
    QSqlQueryModel * model=new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from ENSEIGNANT where MATIERE= ? ");
    query.addBindValue(matiere);
    query.exec();


    model->setQuery(query);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("CIN_ENS"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("NOM_ENS"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("PRENOM_ENS"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("SEXE_ENS"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("EMAIL_ENS"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("SALAIRE"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("PASSWORD_ENS"));
    model->setHeaderData(7,Qt::Horizontal,QObject::tr("MATIERE"));



  return model;
}



bool enseignant::verifierExcin(int cin)
{
    int i=0;

    QSqlQuery query;
    query.prepare("select * from ENSEIGNANT where CIN_ENS= ? ");
   query.addBindValue(cin);
    if(query.exec())
    {while(query.next())
        {i++;}}

    if(i!=0)
        return true ;
    else
        return false;

}

bool enseignant::verifierExnom(QString nom)
{
    int i=0;

    QSqlQuery query;
    query.prepare("select * from ENSEIGNANT where NOM_ENS= ? ");
   query.addBindValue(nom);
    if(query.exec())
    {while(query.next())
        {i++;}}

    if(i!=0)
        return true ;
    else
        return false;

}

bool enseignant::verifierExprenom(QString prenom)
{
    int i=0;

    QSqlQuery query;
    query.prepare("select * from ENSEIGNANT where PRENOM_ENS= ? ");
   query.addBindValue(prenom);
    if(query.exec())
    {while(query.next())
        {i++;}}

    if(i!=0)
        return true ;
    else
        return false;

}
