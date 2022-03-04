#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ajouter.h"
#include "modifier.h"
#include "espace_admin.h"
#include "espace_etudiant.h"
#include "espace_enseignant.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Espace_Admin afficher;
        afficher.setModal(true);
        afficher.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    Espace_Etudiant afficher;
        afficher.setModal(true);
        afficher.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    Espace_Enseignant afficher;
        afficher.setModal(true);
        afficher.exec();
}
