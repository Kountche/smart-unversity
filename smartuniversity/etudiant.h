#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Etudiant
{
public:
    Etudiant();
    Etudiant(QString, QString, QString, QString, QString, QString,QString,QString);
       QString get_nom();
       QString get_prenom();
       QString get_sexe();
       QString get_date();
       QString get_num_tel();
       QString get_adresse_mail();
       QString get_classe();
       QString get_filier();
       QString get_mot_de_passe();
       QString get_CIN();
       bool ajouter();
       bool modifier();
       bool affecter(QString);
       QSqlQueryModel * afficher();
       QSqlQueryModel * afficherperso1(QString);
       QSqlQueryModel * afficher_trinom();
       QSqlQueryModel * afficher_triprenom();
       QSqlQueryModel * afficherlist();
       bool supprimer(QString);
private:
    QString CIN,nom,prenom,sexe,date,numtel,adressemail,classe,filier,motdepasse;
};

#endif // ETUDIANT_H
