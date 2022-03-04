#ifndef MENU_H
#define MENU_H
#include "etudiant.h"
#include "classe.h"
#include "enseignant.h"
#include <QDialog>

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_GestionEtud_clicked();

    void on_AjouterEtud_clicked();

    void on_SuppEtud_clicked();

    void on_ModifierEtud_clicked();

    void on_AffichRecherche_activated(const QModelIndex &index);

    void on_RecherchEtudNOM_textChanged(const QString &arg1);

    void on_TrieNom_clicked();

    void on_TriePrenom_clicked();

    void on_pushButton_clicked();

    void on_ListeEtud_activated(const QModelIndex &index);

    void on_pushButton_10_clicked();

    void on_AjouterClasse_clicked();

    void on_GestionClasse_clicked();

    void on_SupprimerClasse_clicked();

    void on_ListderClasse_currentTextChanged(const QString &arg1);

    void on_nomClasse_textChanged(const QString &arg1);

    void on_pushButton_19_clicked();

    void on_ListeEtudclasse_activated(const QModelIndex &index);

    void on_listeclasseEtud_currentTextChanged(const QString &arg1);

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_2_clicked();

    void on_AjouterEns_clicked();

    void on_GestionEnseig_clicked();

    void on_pushButton_3_clicked();

    void on_SuppEns_clicked();

    void on_AffichRechercheENS_activated(const QModelIndex &index);

    void on_RecherchENSNOM_textChanged(const QString &arg1);

    void on_ModifierEtud_2_clicked();

    void on_TrieNomENS_clicked();

    void on_TriePrenomEns_clicked();

    void on_TrieCinEns_clicked();

    void on_TrieSalaireEns_clicked();

    void on_listeclasseetud_currentTextChanged(const QString &arg1);

    void on_TabEtudiant_activated(const QModelIndex &index);

private:
    Ui::menu *ui;
    Etudiant tmpetudiant;
    Classe tmpclasse;
    enseignant tmpens;
};

#endif // MENU_H
