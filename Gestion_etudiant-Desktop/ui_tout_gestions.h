/********************************************************************************
** Form generated from reading UI file 'tout_gestions.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOUT_GESTIONS_H
#define UI_TOUT_GESTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tout_gestions
{
public:
    QPushButton *pushButton_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *tout_gestions)
    {
        if (tout_gestions->objectName().isEmpty())
            tout_gestions->setObjectName(QStringLiteral("tout_gestions"));
        tout_gestions->resize(505, 339);
        pushButton_6 = new QPushButton(tout_gestions);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(220, 310, 75, 23));
        widget = new QWidget(tout_gestions);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 0, 371, 301));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        retranslateUi(tout_gestions);
        QObject::connect(pushButton_6, SIGNAL(clicked()), tout_gestions, SLOT(close()));

        QMetaObject::connectSlotsByName(tout_gestions);
    } // setupUi

    void retranslateUi(QDialog *tout_gestions)
    {
        tout_gestions->setWindowTitle(QApplication::translate("tout_gestions", "Dialog", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("tout_gestions", "Fermer", Q_NULLPTR));
        pushButton->setText(QApplication::translate("tout_gestions", "Gestion d'\303\251tudiant", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("tout_gestions", "Gestion d'enseingnant", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("tout_gestions", "Gestion du parking", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("tout_gestions", "Gestion des mat\303\251riels", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("tout_gestions", "Gestion du biblioth\303\251que", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tout_gestions: public Ui_tout_gestions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOUT_GESTIONS_H
