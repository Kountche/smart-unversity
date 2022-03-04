#ifndef NOTES_H
#define NOTES_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>


class Notes
{
    int id_etudiant;
    double notecc,noteexam;
    double moy;
    QString matiere;
public:
    Notes();
    Notes(int,double,double,QString);
    int getID_ETUDIANT();
    double getNOTECC();
    double getNOTEEXAM();
    double getMOY();
    bool ajouterN();
    double MoyClasse();
    QString getmatiere();
    QSqlQueryModel * afficherN();
    bool ModifierN();
    bool verifierExid_etudiant(int);
    bool supprimer(int);
};

#endif // NOTES_H
