#include "menu.h"
#include "ui_menu.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtSql>
#include <QDialog>
#include <QtDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <qstackedwidget.h>
#include <QPixmap>
#include "etudiant.h"
#include "enseignant.h"
#include "classe.h"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    menu::setWindowTitle("Menu des gestionts");


    //gestion d'étudiant
    ui->AfficherEtud->setModel(tmpetudiant.afficher());
    ui->AffichRecherche->setModel(tmpetudiant.afficher());
    ui->ListeEtud->setModel(tmpetudiant.afficher());
    ui->TabEtudiant->setModel(tmpetudiant.afficher());
    ui->AfListeClass->setModel(tmpclasse.afficherlist());
    ui->listeclasseetud->setModel(tmpclasse.afficherlist());





    //gestion de classe
    ui->AfficherClasse->setModel(tmpclasse.afficher());
    ui->ListderClasse->setModel(tmpclasse.afficherlist());
    ui->listeclasseEtud->setModel(tmpclasse.afficherlist());
    ui->ListeEtudclasse->setModel(tmpetudiant.afficher());
    ui->AfficherRechClasse->setModel(tmpclasse.afficher());



    //gestion enseignant
    ui->AfficherEns->setModel(tmpens.afficher());
    ui->AffichRechercheENS->setModel(tmpens.afficher());

}

menu::~menu()
{
    delete ui;
}

//gestion d'etudiants
void menu::on_GestionEtud_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
     menu::setWindowTitle("gestiont d'etudiant");
}

void menu::on_AjouterEtud_clicked()
{
    QString CIN=ui->CinEtud->text();
    QString nom= ui->NomEtud->text();
    QString prenom= ui->PrenomEtud->text();
    QString sexe= ui->SexeEtud->text();
    QString classe= ui->ClasseEtud->text();
    QString numtel= ui->NumTelEtud->text();
    QString filier= ui->FilierEtud->text();
    QString date= ui->DateEtud->text();

  Etudiant e(CIN,nom,prenom,sexe,classe,numtel,filier,date);

  bool test=e.ajouter();

  if(test)
{
      ui->AffichRecherche->setModel(tmpetudiant.afficher());
      ui->TabEtudiant->setModel(tmpetudiant.afficher());
      ui->AfficherEtud->setModel(tmpetudiant.afficher());
      ui->ListeEtudclasse->setModel(tmpetudiant.afficher());

QMessageBox::information(nullptr, QObject::tr("Ajouter un étudiant"),
                  QObject::tr("Etudiant ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
  }
        ui->CinEtud->clear();
        ui->NomEtud->clear();
        ui->PrenomEtud->clear();
        ui->SexeEtud->clear();
        ui->ClasseEtud->clear();   
        ui->NumTelEtud->clear();
        ui->FilierEtud->clear();
        ui->DateEtud->clear();     
        ui->ClasseEtud->clear();

}

void menu::on_SuppEtud_clicked()
{
    QString CIN=ui->SuppEtudCIN->text();
    bool test=tmpetudiant.supprimer(CIN);
    if(test)
    {   ui->AffichRecherche->setModel(tmpetudiant.afficher());
        ui->TabEtudiant->setModel(tmpetudiant.afficher());
        ui->AfficherEtud->setModel(tmpetudiant.afficher());
        ui->ListeEtudclasse->setModel(tmpetudiant.afficher());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un étudiant"),
                    QObject::tr("Etudiant supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un étudiant"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->SuppEtudCIN->clear();
}

void menu::on_ModifierEtud_clicked()
{
    QString CIN=ui->ModCin->text();
    QString nom= ui->ModNom->text();
    QString prenom= ui->ModPrenom->text();
    QString sexe=ui->ModSexe->text();
    QString classe=ui->ModClasse->text();
    QString adressemail=ui->ModAdresse->text();
    QString numtel=ui->ModTel->text();
    QString filier=ui->ModFilier->text();
    QString date=ui->ModDate->text();
    QString motdepasse=ui->ModMot->text();
  Etudiant e(CIN,nom,prenom,sexe,classe,numtel,filier,date);
  bool test=e.modifier();
  if(test)
  {   ui->AffichRecherche->setModel(tmpetudiant.afficher());
      ui->TabEtudiant->setModel(tmpetudiant.afficher());
      ui->AfficherEtud->setModel(tmpetudiant.afficher());
      ui->ListeEtudclasse->setModel(tmpetudiant.afficher());
  QMessageBox::information(nullptr, QObject::tr("Modifier un étudiant"),
                  QObject::tr("Etudiant Modifier.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
  }
  else
      QMessageBox::critical(nullptr, QObject::tr("Modifier un étudiant"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
  ui->ModCin->clear();
  ui->ModNom->clear();
  ui->ModPrenom->clear();
  ui->ModSexe->clear();
  ui->ModClasse->clear();
  ui->ModAdresse->clear();
  ui->ModTel->clear();
  ui->ModFilier->clear();
  ui->ModDate->clear();
  ui->ModMot->clear();
}

void menu::on_AffichRecherche_activated(const QModelIndex &index)
{
    QString val=ui->AffichRecherche->model()->data(index).toString();
    QSqlQuery query;
    query.prepare("select * from ETUDIANT where CIN= :val or NOM= :val or PRENOM= :val or SEXE= :val or DATE_NAIS= :val or NUM_TEL= :val or ADRESSE_EMAIL= :val or CLASSE= :val or FILIER= :val or MOT_DE_PASSE= :val ");
    query.bindValue(":val", val);

    if(query.exec())
    {
        while(query.next())
                {

                    ui->ModCin->setText(query.value(0).toString());
                    ui->ModNom->setText(query.value(1).toString());
                    ui->ModPrenom->setText(query.value(2).toString());
                    ui->ModSexe->setText(query.value(3).toString());
                    ui->ModDate->setText(query.value(4).toString());
                    ui->ModTel->setText(query.value(5).toString());
                    ui->ModAdresse->setText(query.value(6).toString());
                    ui->ModClasse->setText(query.value(7).toString());
                    ui->ModFilier->setText(query.value(8).toString());
                    ui->ModMot->setText(query.value(9).toString());
                }

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un étudiant"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void menu::on_RecherchEtudNOM_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();

     query->prepare("SELECT * FROM ETUDIANT WHERE NOM LIKE'"+arg1+"%'");
     query->exec();
     model->setQuery(*query);
     ui->AffichRecherche->setModel(model);
}

void menu::on_TrieNom_clicked()
{
      ui->AfficherEtud->setModel(tmpetudiant.afficher_trinom());
}

void menu::on_TriePrenom_clicked()
{
    ui->AfficherEtud->setModel(tmpetudiant.afficher_triprenom());
}

void menu::on_ListeEtud_activated(const QModelIndex &index)
{
    QString val=ui->ListeEtud->model()->data(index).toString();
    QSqlQuery query;
    query.prepare("select * from ETUDIANT where CIN= :val or NOM= :val or PRENOM= :val or SEXE= :val or DATE_NAIS= :val or NUM_TEL= :val or ADRESSE_EMAIL= :val or CLASSE= :val or FILIER= :val or MOT_DE_PASSE= :val ");
    query.bindValue(":val", val);

    if(query.exec())
    {
        while(query.next())
                {


                    ui->AfCINETUD->setText(query.value(0).toString());

                }

    }
}

void menu::on_pushButton_10_clicked()
{
    QString classeetud=ui->AfListeClass->currentText();
    QString CIN=ui->AfCINETUD->text();
    bool test=tmpetudiant.affecter(classeetud);
  if(test)
  {   ui->AffichRecherche->setModel(tmpetudiant.afficher());
      ui->TabEtudiant->setModel(tmpetudiant.afficher());
      ui->AfficherEtud->setModel(tmpetudiant.afficher());
  QMessageBox::information(nullptr, QObject::tr("Affecter un étudiant"),
                  QObject::tr("Etudiant Affecté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
  }
  else
      QMessageBox::critical(nullptr, QObject::tr("Affecter un étudiant"),
                  QObject::tr("Impossible d'affecter !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void menu::on_listeclasseetud_currentTextChanged(const QString &arg1)
{
    QString y=arg1;
    ui->affichetudlistclasse->setModel(tmpetudiant.afficherperso1(y));
}

void menu::on_TabEtudiant_activated(const QModelIndex &index)
{
    QString val=ui->ListeEtudclasse->model()->data(index).toString();

    ui->claseelisteetud1->setModel(tmpclasse.afficherperso2(val));
}

void menu::on_pushButton_11_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}

void menu::on_pushButton_12_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}

void menu::on_pushButton_14_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}

void menu::on_pushButton_13_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void menu::on_pushButton_15_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void menu::on_pushButton_16_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}


void menu::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    menu::setWindowTitle("Menu des gestionts");
}

















//gestion de classe

void menu::on_GestionClasse_clicked()
{
  ui->stackedWidget->setCurrentIndex(2);
  menu::setWindowTitle("gestiont de classe");
}

void menu::on_AjouterClasse_clicked()
{
    QString nom_classe= ui->classe->text();
     int nbr_etud = ui->nbrClasse->text().toInt();
  Classe c(nom_classe,nbr_etud);
  bool test=c.ajouter();
  if(test)
 {  ui->AfficherClasse->setModel(tmpclasse.afficher());
    ui->ListderClasse->setModel(tmpclasse.afficherlist());
    ui->AfficherRechClasse->setModel(tmpclasse.afficher());
    ui->listeclasseEtud->setModel(tmpclasse.afficherlist());
QMessageBox::information(nullptr, QObject::tr("Ajouter un étudiant"),
                  QObject::tr("Etudiant ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
 }
    ui->classe->clear();
    ui->nbrClasse->clear();
}



void menu::on_SupprimerClasse_clicked()
{
    QString nom_classe=ui->ClasseSupp->text();
    bool test=tmpclasse.supprimer(nom_classe);
    if(test)
    {   ui->AfficherClasse->setModel(tmpclasse.afficher());
        ui->ListderClasse->setModel(tmpclasse.afficherlist());
        ui->AfficherRechClasse->setModel(tmpclasse.afficher());
        ui->listeclasseEtud->setModel(tmpclasse.afficherlist());
        QMessageBox::information(nullptr, QObject::tr("Supprimer un étudiant"),
                    QObject::tr("Etudiant supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un étudiant"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->ClasseSupp->clear();
}



void menu::on_ListderClasse_currentTextChanged(const QString &arg1)
{
    QString nom_classe=ui->ListderClasse->currentText();
    QSqlQuery query;
    query.prepare("select * from CLASSE where NOM_CLASSE= :nom_classe ");
    query.bindValue(":nom_classe", nom_classe);

    if(query.exec())
    {
        while(query.next())
                {

                    ui->ModClasse_2->setText(query.value(0).toString());
                    ui->ModNbrEtud->setText(query.value(1).toString());
                }

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un étudiant"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void menu::on_pushButton_19_clicked()
{
    QString nom_classe= ui->ModClasse_2->text();
     int nbr_etud = ui->ModNbrEtud->text().toInt();
  Classe c(nom_classe,nbr_etud);
  bool test=c.modifier();
  if(test)
{
             ui->AfficherClasse->setModel(tmpclasse.afficher());
             ui->ListderClasse->setModel(tmpclasse.afficherlist());
             ui->AfficherRechClasse->setModel(tmpclasse.afficher());
             ui->listeclasseEtud->setModel(tmpclasse.afficherlist());
QMessageBox::information(nullptr, QObject::tr("Modifier un étudiant"),
                  QObject::tr("Etudiant Modifié.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}
  else
      QMessageBox::critical(nullptr, QObject::tr("Modifier un étudiant"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
        ui->ModClasse_2->clear();
        ui->ModNbrEtud->clear();
}

void menu::on_nomClasse_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();

     query->prepare("SELECT * FROM CLASSE WHERE NOM_CLASSE LIKE'"+arg1+"%'");
     query->exec();
     model->setQuery(*query);
     ui->AfficherRechClasse->setModel(model);
}



void menu::on_ListeEtudclasse_activated(const QModelIndex &index)
{

     QString val=ui->ListeEtudclasse->model()->data(index).toString();

     ui->classdedunetud->setModel(tmpclasse.afficherperso2(val));
}

void menu::on_listeclasseEtud_currentTextChanged(const QString &arg1)
{
    QString y=arg1;
    ui->listeetuddunclasse->setModel(tmpetudiant.afficherperso1(y));
}


void menu::on_pushButton_21_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(0);
}

void menu::on_pushButton_20_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(1);
}

void menu::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    menu::setWindowTitle("Menu des gestionts");
}












//Gestion Enseignant

void menu::on_GestionEnseig_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    menu::setWindowTitle("gestiont d'enseignant");
}

void menu::on_AjouterEns_clicked()
{
    int cin_ens = ui->CinEns->text().toInt();
                QString nom_ens= ui->NomEns->text();
                QString prenom_ens= ui->PrenomEns->text();
                QString sexe_ens= ui->SexeEns->text();
                QString matiere= ui->MatEns->text();
              enseignant e(cin_ens,nom_ens,prenom_ens,sexe_ens,matiere);
              bool test=e.ajouter();
              if(test)
            {
                  ui->AfficherEns->setModel(tmpens.afficher());
                  ui->AffichRechercheENS->setModel(tmpens.afficher());

            QMessageBox::information(nullptr, QObject::tr("Ajouter un Enseignant"),
                              QObject::tr("Enseignant ajouté.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);

            }
              else
                  QMessageBox::critical(nullptr, QObject::tr("Ajouter un Enseignant"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
}



void menu::on_pushButton_3_clicked()
{

 ui->stackedWidget->setCurrentIndex(0);
 menu::setWindowTitle("Menu des gestionts");

}

void menu::on_SuppEns_clicked()
{
    int cin_ens = ui->SuppEnsCIN->text().toInt();
            bool test2=tmpens.verifierExcin(cin_ens);
               if (test2==true)
               {
                   bool test=tmpens.supprimer(cin_ens);

                   if(test)
                   {
                       ui->AfficherEns->setModel(tmpens.afficher());
                       ui->AffichRechercheENS->setModel(tmpens.afficher());
                       QMessageBox::information(nullptr, QObject::tr("Supprimer un Enseignant"),
                                   QObject::tr("Enseignant supprime.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);}


               }
               else

                   QMessageBox::critical(nullptr, QObject::tr("Supprimer un Enseignant"),
                               QObject::tr("Enseignant n existe pas !.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);
}

void menu::on_AffichRechercheENS_activated(const QModelIndex &index)
{
    QString val=ui->AffichRechercheENS->model()->data(index).toString();
    QSqlQuery query;
    query.prepare("select * from ENSEIGNANT where CIN_ENS= :val or NOM_ENS= :val or PRENOM_ENS= :val or SEXE_ENS= :val or EMAIL_ENS= :val or SALAIRE= :val or PASSWORD_ENS= :val or MATIERE= :val ");
    query.bindValue(":val", val);

    if(query.exec())
    {
        while(query.next())
                {

                    ui->ModCinENS->setText(query.value(0).toString());
                    ui->ModNOMENS->setText(query.value(1).toString());
                    ui->ModPrenomENS->setText(query.value(2).toString());
                    ui->ModSEXEENS->setText(query.value(3).toString());
                    ui->ModadresseENS->setText(query.value(4).toString());
                    ui->ModSalaireENS->setText(query.value(5).toString());
                    ui->ModMotENS->setText(query.value(6).toString());
                    ui->ModMATENS->setText(query.value(7).toString());

                }

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Modifier un enseignant"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void menu::on_RecherchENSNOM_textChanged(const QString &arg1)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QSqlQuery   *query= new QSqlQuery();

     query->prepare("SELECT * FROM ENSEIGNANT WHERE NOM_ENS LIKE'"+arg1+"%'");
     query->exec();
     model->setQuery(*query);
     ui->AffichRechercheENS->setModel(model);
}

void menu::on_ModifierEtud_2_clicked()
{
    int CIN=ui->ModCinENS->text().toInt();
    int salaire=ui->ModSalaireENS->text().toInt();
    QString nom= ui->ModNOMENS->text();
    QString prenom= ui->ModPrenomENS->text();
    QString sexe=ui->ModSEXEENS->text();
    QString adressemail=ui->ModadresseENS->text();
    QString motdepasse=ui->ModMot->text();
    QString matiere=ui->ModMATENS->text();
 enseignant e(CIN,nom,prenom,sexe,matiere);
  bool test=e.Modifier();
  if(test)
  {
  QMessageBox::information(nullptr, QObject::tr("Modifier un enseignant"),
                  QObject::tr("enseignant Modifier.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
  }
  else
      QMessageBox::critical(nullptr, QObject::tr("Modifier un enseignant"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

}

void menu::on_TrieNomENS_clicked()
{
    ui->AfficherEns->setModel(tmpens.sortnom());
}

void menu::on_TriePrenomEns_clicked()
{
  ui->AfficherEns->setModel(tmpens.sortprenom());
}

void menu::on_TrieCinEns_clicked()
{
    ui->AfficherEns->setModel(tmpens.sortcin());
}

void menu::on_TrieSalaireEns_clicked()
{
    ui->AfficherEns->setModel(tmpens.sortsalaire());
}




