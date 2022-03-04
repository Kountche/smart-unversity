#ifndef LOGINADMIN_H
#define LOGINADMIN_H

#include <QDialog>

namespace Ui {
class loginadmin;
}

class loginadmin : public QDialog
{
    Q_OBJECT

public:
    explicit loginadmin(QWidget *parent = nullptr);
    ~loginadmin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::loginadmin *ui;
};

#endif // LOGINADMIN_H
