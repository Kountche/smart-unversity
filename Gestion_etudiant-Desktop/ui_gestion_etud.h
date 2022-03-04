/********************************************************************************
** Form generated from reading UI file 'gestion_etud.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_ETUD_H
#define UI_GESTION_ETUD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_etud
{
public:
    QPushButton *pushButton_5;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;

    void setupUi(QDialog *gestion_etud)
    {
        if (gestion_etud->objectName().isEmpty())
            gestion_etud->setObjectName(QStringLiteral("gestion_etud"));
        gestion_etud->resize(493, 391);
        pushButton_5 = new QPushButton(gestion_etud);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(200, 330, 75, 23));
        label = new QLabel(gestion_etud);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 161, 51));
        layoutWidget = new QWidget(gestion_etud);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 80, 261, 211));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(gestion_etud);
        QObject::connect(pushButton_5, SIGNAL(clicked()), gestion_etud, SLOT(close()));

        QMetaObject::connectSlotsByName(gestion_etud);
    } // setupUi

    void retranslateUi(QDialog *gestion_etud)
    {
        gestion_etud->setWindowTitle(QApplication::translate("gestion_etud", "Dialog", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("gestion_etud", "Fermer", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_etud", "<html><head/><body><p><span style=\" font-size:14pt; color:#ff0000;\">Gestion d'\303\251tudiant</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gestion_etud", "Ajouter un \303\251tudiant", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestion_etud", "Rechercher / Afficher un \303\251tudiant", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("gestion_etud", "Modifier un \303\251tudiant ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("gestion_etud", "Supprimer un \303\251tudiant", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_etud: public Ui_gestion_etud {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_ETUD_H
