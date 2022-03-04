#ifndef AJOUTER_H
#define AJOUTER_H
#include "etudiant.h"
#include <QDialog>

namespace Ui {
class Ajouter;
}

class Ajouter : public QDialog
{
    Q_OBJECT

public:
    explicit Ajouter(QWidget *parent = nullptr);
    ~Ajouter();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Ajouter *ui;
    Etudiant tmpetudiant;

};

#endif // AJOUTER_H
