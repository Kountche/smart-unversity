#ifndef CLASSE_H
#define CLASSE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Classe
{public:
    Classe();
    Classe(QString,int);
    QString get_nom_classe();
    int get_id_nbr_etud();
    bool ajouter();
    bool modifier();
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficherperso2(QString);
    QSqlQueryModel * afficherlist();
    bool supprimer(QString);
    int nbretd(QString nomClass);

private:
    QString nom_classe;
    int nbr_etud;


};

#endif // CLASSE_H
