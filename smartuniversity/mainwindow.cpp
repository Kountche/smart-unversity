#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginadmin.h"
#include "loginenseignant.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{   player->setMedia(QUrl::fromLocalFile("G:/ah.mp3"));
    player->play();
    loginadmin afficher;
        afficher.setModal(true);
        afficher.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
            notifier = new QSystemTrayIcon(this);
            notifier->setIcon(QIcon("notification.png"));
            notifier->show();
            notifier->showMessage("Au revoir","Application fermée ",QSystemTrayIcon::Information,10000);
}

void MainWindow::on_pushButton_3_clicked()
{
    player->setMedia(QUrl::fromLocalFile("G:/ah.mp3"));
        player->play();
        loginenseignant afficher;
            afficher.setModal(true);
            afficher.exec();

}
