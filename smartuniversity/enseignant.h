#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

class enseignant
{
    int cin_ens;
    QString nom_ens,prenom_ens,sexe_ens,matiere,email_ens,password_ens;
    int salaire;

public:
    enseignant();
    enseignant(int, QString, QString, QString, QString);
       enseignant(int);
       int getcin();
       QString getnom_ens();
       QString getprenom_ens();
       QString getsexe_ens();
       QString getmatiere_ens();
       QString getemail_ens();
       QString getpassword_ens();
       double getsalaire();
       bool ajouter();
       bool Modifier();
       QSqlQueryModel * afficher();
       bool supprimer(int);
        QSqlQueryModel * sortcin();
        QSqlQueryModel * sortnom();
        QSqlQueryModel * sortprenom();
        QSqlQueryModel * cherchercin(int);
        QSqlQueryModel * cherchernom(QString);
        QSqlQueryModel * chercherprenom(QString);
        QSqlQueryModel * sortsalaire();
        QSqlQueryModel * cherchermatiere(QString matiere);
        bool cherchercin();
        bool notifier();
        bool verifierExcin(int);
        bool verifierExnom(QString);
        bool verifierExprenom(QString);
};

#endif // ENSEIGNANT_H
