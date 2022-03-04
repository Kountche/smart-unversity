#ifndef AFFICHER_H
#define AFFICHER_H
#include "etudiant.h"
#include <QDialog>

namespace Ui {
class afficher;
}

class afficher : public QDialog
{
    Q_OBJECT

public:
    explicit afficher(QWidget *parent = nullptr);
    ~afficher();

private slots:
    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::afficher *ui;
    Etudiant tmpetudiant;
};

#endif // AFFICHER_H
