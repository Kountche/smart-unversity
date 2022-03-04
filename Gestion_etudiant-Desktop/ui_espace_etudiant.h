/********************************************************************************
** Form generated from reading UI file 'espace_etudiant.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESPACE_ETUDIANT_H
#define UI_ESPACE_ETUDIANT_H

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

class Ui_Espace_Etudiant
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Espace_Etudiant)
    {
        if (Espace_Etudiant->objectName().isEmpty())
            Espace_Etudiant->setObjectName(QStringLiteral("Espace_Etudiant"));
        Espace_Etudiant->resize(400, 300);
        label = new QLabel(Espace_Etudiant);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 61, 41));
        label_2 = new QLabel(Espace_Etudiant);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 100, 47, 13));
        label_3 = new QLabel(Espace_Etudiant);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 160, 71, 16));
        lineEdit = new QLineEdit(Espace_Etudiant);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 100, 113, 20));
        lineEdit_2 = new QLineEdit(Espace_Etudiant);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 160, 113, 20));
        pushButton = new QPushButton(Espace_Etudiant);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 240, 75, 23));
        pushButton_2 = new QPushButton(Espace_Etudiant);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 240, 75, 23));

        retranslateUi(Espace_Etudiant);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Espace_Etudiant, SLOT(close()));

        QMetaObject::connectSlotsByName(Espace_Etudiant);
    } // setupUi

    void retranslateUi(QDialog *Espace_Etudiant)
    {
        Espace_Etudiant->setWindowTitle(QApplication::translate("Espace_Etudiant", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Espace_Etudiant", "<html><head/><body><p><span style=\" font-size:16pt;\">LOGIN </span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Espace_Etudiant", "CIN ", Q_NULLPTR));
        label_3->setText(QApplication::translate("Espace_Etudiant", "Mot de passe ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Espace_Etudiant", "Connecter ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Espace_Etudiant", "Fermer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Espace_Etudiant: public Ui_Espace_Etudiant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESPACE_ETUDIANT_H
