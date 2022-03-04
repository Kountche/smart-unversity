/********************************************************************************
** Form generated from reading UI file 'espace_enseignant.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESPACE_ENSEIGNANT_H
#define UI_ESPACE_ENSEIGNANT_H

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

class Ui_Espace_Enseignant
{
public:
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Espace_Enseignant)
    {
        if (Espace_Enseignant->objectName().isEmpty())
            Espace_Enseignant->setObjectName(QStringLiteral("Espace_Enseignant"));
        Espace_Enseignant->resize(400, 300);
        label_3 = new QLabel(Espace_Enseignant);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 160, 71, 16));
        lineEdit = new QLineEdit(Espace_Enseignant);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 100, 113, 20));
        pushButton = new QPushButton(Espace_Enseignant);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 240, 75, 23));
        lineEdit_2 = new QLineEdit(Espace_Enseignant);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 160, 113, 20));
        pushButton_2 = new QPushButton(Espace_Enseignant);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 240, 75, 23));
        label = new QLabel(Espace_Enseignant);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 61, 41));
        label_2 = new QLabel(Espace_Enseignant);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 100, 47, 13));

        retranslateUi(Espace_Enseignant);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Espace_Enseignant, SLOT(close()));

        QMetaObject::connectSlotsByName(Espace_Enseignant);
    } // setupUi

    void retranslateUi(QDialog *Espace_Enseignant)
    {
        Espace_Enseignant->setWindowTitle(QApplication::translate("Espace_Enseignant", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("Espace_Enseignant", "Mot de passe ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Espace_Enseignant", "Connecter ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Espace_Enseignant", "Fermer", Q_NULLPTR));
        label->setText(QApplication::translate("Espace_Enseignant", "<html><head/><body><p><span style=\" font-size:16pt;\">LOGIN </span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Espace_Enseignant", "CIN ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Espace_Enseignant: public Ui_Espace_Enseignant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESPACE_ENSEIGNANT_H
