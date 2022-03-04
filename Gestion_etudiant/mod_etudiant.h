#ifndef MODIFIER_ETUDIANT_H
#define MODIFIER_ETUDIANT_H

#include <QDialog>

namespace Ui {
class Modifier_etudiant;
}

class Modifier_etudiant : public QDialog
{
    Q_OBJECT

public:
    explicit Modifier_etudiant(QWidget *parent = nullptr);
    ~Modifier_etudiant();

private:
    Ui::Modifier_etudiant *ui;
};

#endif // MODIFIER_ETUDIANT_H
