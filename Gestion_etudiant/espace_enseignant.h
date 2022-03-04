#ifndef ESPACE_ENSEIGNANT_H
#define ESPACE_ENSEIGNANT_H

#include <QDialog>

namespace Ui {
class Espace_Enseignant;
}

class Espace_Enseignant : public QDialog
{
    Q_OBJECT

public:
    explicit Espace_Enseignant(QWidget *parent = nullptr);
    ~Espace_Enseignant();

private:
    Ui::Espace_Enseignant *ui;
};

#endif // ESPACE_ENSEIGNANT_H
