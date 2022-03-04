#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtMultimedia>
#include <QMainWindow>
#include <QSystemTrayIcon>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QSystemTrayIcon *notifier;
};

#endif // MAINWINDOW_H
