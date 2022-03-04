#ifndef SUPPRIMER_H
#define SUPPRIMER_H
#include<etudiant.h>
#include <QDialog>

namespace Ui {
class supprimer;
}

class supprimer : public QDialog
{
    Q_OBJECT

public:
    explicit supprimer(QWidget *parent = nullptr);
    ~supprimer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::supprimer *ui;
    Etudiant tmpetudiant;
};

#endif // SUPPRIMER_H
