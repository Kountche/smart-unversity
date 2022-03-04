/********************************************************************************
** Form generated from reading UI file 'espace_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESPACE_ADMIN_H
#define UI_ESPACE_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Espace_Admin
{
public:
    QLabel *label_3;
    QLineEdit *lineEdit_adresse;
    QPushButton *pushButton;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Espace_Admin)
    {
        if (Espace_Admin->objectName().isEmpty())
            Espace_Admin->setObjectName(QStringLiteral("Espace_Admin"));
        Espace_Admin->resize(409, 328);
        label_3 = new QLabel(Espace_Admin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 170, 71, 16));
        lineEdit_adresse = new QLineEdit(Espace_Admin);
        lineEdit_adresse->setObjectName(QStringLiteral("lineEdit_adresse"));
        lineEdit_adresse->setGeometry(QRect(140, 110, 113, 20));
        pushButton = new QPushButton(Espace_Admin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 250, 75, 23));
        lineEdit_password = new QLineEdit(Espace_Admin);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(140, 170, 113, 20));
        pushButton_2 = new QPushButton(Espace_Admin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 250, 75, 23));
        label = new QLabel(Espace_Admin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 61, 41));
        label_2 = new QLabel(Espace_Admin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 110, 71, 16));

        retranslateUi(Espace_Admin);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Espace_Admin, SLOT(close()));

        QMetaObject::connectSlotsByName(Espace_Admin);
    } // setupUi

    void retranslateUi(QDialog *Espace_Admin)
    {
        Espace_Admin->setWindowTitle(QApplication::translate("Espace_Admin", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("Espace_Admin", "Mot de passe ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Espace_Admin", "Connecter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Espace_Admin", "Fermer", Q_NULLPTR));
        label->setText(QApplication::translate("Espace_Admin", "<html><head/><body><p><span style=\" font-size:16pt;\">LOGIN </span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Espace_Admin", "ID", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Espace_Admin: public Ui_Espace_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESPACE_ADMIN_H
