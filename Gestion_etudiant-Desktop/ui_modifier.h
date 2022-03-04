/********************************************************************************
** Form generated from reading UI file 'modifier.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFIER_H
#define UI_MODIFIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Modifier
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
    QLineEdit *lineEdit_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Modifier)
    {
        if (Modifier->objectName().isEmpty())
            Modifier->setObjectName(QStringLiteral("Modifier"));
        Modifier->resize(539, 381);
        label = new QLabel(Modifier);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 40, 221, 81));
        widget = new QWidget(Modifier);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 160, 321, 101));
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

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        widget1 = new QWidget(Modifier);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(180, 320, 158, 25));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(Modifier);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Modifier, SLOT(close()));

        QMetaObject::connectSlotsByName(Modifier);
    } // setupUi

    void retranslateUi(QDialog *Modifier)
    {
        Modifier->setWindowTitle(QApplication::translate("Modifier", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Modifier", "<html><head/><body><p><span style=\" font-size:12pt; color:#aa0000;\">Choisir l'\303\251tudiant \303\240 modifier</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Modifier", "<html><head/><body><p><span style=\" font-size:10pt;\">CIN</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("Modifier", "<html><head/><body><p><span style=\" font-size:10pt;\">Adresse Email </span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("Modifier", "<html><head/><body><p><span style=\" font-size:10pt;\">Classe</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Modifier", "Valider ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Modifier", "Fermer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Modifier: public Ui_Modifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFIER_H
