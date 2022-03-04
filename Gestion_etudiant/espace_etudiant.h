#ifndef ESPACE_ETUDIANT_H
#define ESPACE_ETUDIANT_H

#include <QDialog>

namespace Ui {
class Espace_Etudiant;
}

class Espace_Etudiant : public QDialog
{
    Q_OBJECT

public:
    explicit Espace_Etudiant(QWidget *parent = nullptr);
    ~Espace_Etudiant();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Espace_Etudiant *ui;
};

#endif // ESPACE_ETUDIANT_H
