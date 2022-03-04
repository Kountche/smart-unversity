/********************************************************************************
** Form generated from reading UI file 'mod_etudiant.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOD_ETUDIANT_H
#define UI_MOD_ETUDIANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Modifier_etudiant
{
public:
    QLabel *label;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *label_11;
    QLineEdit *lineEdit_6;
    QLabel *label_10;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_3;
    QWidget *widget1;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QComboBox *comboBox;
    QLabel *label_9;
    QComboBox *comboBox_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Modifier_etudiant)
    {
        if (Modifier_etudiant->objectName().isEmpty())
            Modifier_etudiant->setObjectName(QStringLiteral("Modifier_etudiant"));
        Modifier_etudiant->resize(625, 356);
        label = new QLabel(Modifier_etudiant);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 20, 161, 21));
        widget = new QWidget(Modifier_etudiant);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 70, 281, 221));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_11);

        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_6);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_10);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        formLayout->setWidget(8, QFormLayout::FieldRole, radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        formLayout->setWidget(9, QFormLayout::FieldRole, radioButton_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_3);

        widget1 = new QWidget(Modifier_etudiant);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(360, 70, 241, 231));
        formLayout_2 = new QFormLayout(widget1);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, label_5);

        dateEdit = new QDateEdit(widget1);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, dateEdit);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_7);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(6, QFormLayout::SpanningRole, label_6);

        lineEdit_5 = new QLineEdit(widget1);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, lineEdit_5);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(9, QFormLayout::LabelRole, label_8);

        comboBox = new QComboBox(widget1);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, comboBox);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(12, QFormLayout::LabelRole, label_9);

        comboBox_2 = new QComboBox(widget1);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout_2->setWidget(13, QFormLayout::FieldRole, comboBox_2);

        widget2 = new QWidget(Modifier_etudiant);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(220, 320, 158, 25));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(Modifier_etudiant);

        QMetaObject::connectSlotsByName(Modifier_etudiant);
    } // setupUi

    void retranslateUi(QDialog *Modifier_etudiant)
    {
        Modifier_etudiant->setWindowTitle(QApplication::translate("Modifier_etudiant", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Modifier_etudiant", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff0000;\">Modifier \303\251tudiant </span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Modifier_etudiant", "CIN", Q_NULLPTR));
        label_3->setText(QApplication::translate("Modifier_etudiant", "Nom", Q_NULLPTR));
        label_4->setText(QApplication::translate("Modifier_etudiant", "Prenom", Q_NULLPTR));
        label_11->setText(QApplication::translate("Modifier_etudiant", "Mot de passe ", Q_NULLPTR));
        label_10->setText(QApplication::translate("Modifier_etudiant", "Sexe", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Modifier_etudiant", "Homme ", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Modifier_etudiant", "Femme", Q_NULLPTR));
        label_5->setText(QApplication::translate("Modifier_etudiant", "Date de naissance ", Q_NULLPTR));
        label_7->setText(QApplication::translate("Modifier_etudiant", "Num tel", Q_NULLPTR));
        label_6->setText(QApplication::translate("Modifier_etudiant", "Adresse mail", Q_NULLPTR));
        label_8->setText(QApplication::translate("Modifier_etudiant", "Classe", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Modifier_etudiant", "1A1", Q_NULLPTR)
         << QApplication::translate("Modifier_etudiant", "1A2", Q_NULLPTR)
         << QApplication::translate("Modifier_etudiant", "1A3", Q_NULLPTR)
         << QApplication::translate("Modifier_etudiant", "1A4", Q_NULLPTR)
         << QApplication::translate("Modifier_etudiant", "1A5", Q_NULLPTR)
         << QApplication::translate("Modifier_etudiant", "1A6", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("Modifier_etudiant", "Filier", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Modifier_etudiant", "Tic", Q_NULLPTR)
         << QApplication::translate("Modifier_etudiant", "G\303\251nie c\303\251vil", Q_NULLPTR)
         << QApplication::translate("Modifier_etudiant", "Business ", Q_NULLPTR)
         << QApplication::translate("Modifier_etudiant", "electromecanique", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("Modifier_etudiant", "Modifier", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Modifier_etudiant", "Annuler", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Modifier_etudiant: public Ui_Modifier_etudiant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOD_ETUDIANT_H
