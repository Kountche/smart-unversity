#ifndef GESTION_ETUD_H
#define GESTION_ETUD_H

#include <QDialog>

namespace Ui {
class gestion_etud;
}

class gestion_etud : public QDialog
{
    Q_OBJECT

public:
    explicit gestion_etud(QWidget *parent = nullptr);
    ~gestion_etud();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::gestion_etud *ui;
};

#endif // GESTION_ETUD_H
