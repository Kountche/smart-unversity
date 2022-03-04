#ifndef LOGINENSEIGNANT_H
#define LOGINENSEIGNANT_H

#include <QDialog>

namespace Ui {
class loginenseignant;
}

class loginenseignant : public QDialog
{
    Q_OBJECT

public:
    explicit loginenseignant(QWidget *parent = nullptr);
    ~loginenseignant();

private slots:
    void on_pushButton_clicked();

private:
    Ui::loginenseignant *ui;
};

#endif // LOGINENSEIGNANT_H
