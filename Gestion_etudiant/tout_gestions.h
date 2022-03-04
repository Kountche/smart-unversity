#ifndef TOUT_GESTIONS_H
#define TOUT_GESTIONS_H

#include <QDialog>

namespace Ui {
class tout_gestions;
}

class tout_gestions : public QDialog
{
    Q_OBJECT

public:
    explicit tout_gestions(QWidget *parent = nullptr);
    ~tout_gestions();

private slots:
    void on_pushButton_clicked();

private:
    Ui::tout_gestions *ui;
};

#endif // TOUT_GESTIONS_H
