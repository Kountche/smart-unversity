#include "mainwindow.h"
#include <QApplication>
#include "connexion.h"
#include <QMessageBox>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connection c;


    w.setWindowTitle("Accueil");

    bool test=c.createconnect();
    if(test)
    {w.show();
         QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("connexion successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
