/********************************************************************************
** Form generated from reading UI file 'dialog_search.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SEARCH_H
#define UI_DIALOG_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_search
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *btn_ok;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *btn_cancer;

    void setupUi(QDialog *Dialog_search)
    {
        if (Dialog_search->objectName().isEmpty())
            Dialog_search->setObjectName(QString::fromUtf8("Dialog_search"));
        Dialog_search->resize(348, 170);
        Dialog_search->setLayoutDirection(Qt::LeftToRight);
        gridLayout_2 = new QGridLayout(Dialog_search);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        btn_ok = new QPushButton(Dialog_search);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(btn_ok, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Dialog_search);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        lineEdit = new QLineEdit(Dialog_search);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaxLength(8);

        gridLayout->addWidget(lineEdit, 2, 1, 3, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        btn_cancer = new QPushButton(Dialog_search);
        btn_cancer->setObjectName(QString::fromUtf8("btn_cancer"));
        btn_cancer->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(btn_cancer, 3, 0, 1, 1);


        retranslateUi(Dialog_search);

        QMetaObject::connectSlotsByName(Dialog_search);
    } // setupUi

    void retranslateUi(QDialog *Dialog_search)
    {
        Dialog_search->setWindowTitle(QCoreApplication::translate("Dialog_search", "\346\237\245\346\211\276", nullptr));
        btn_ok->setText(QCoreApplication::translate("Dialog_search", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("Dialog_search", "\350\257\267\350\276\223\345\205\245\347\274\226\345\217\267", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Dialog_search", "DXXX", nullptr));
        btn_cancer->setText(QCoreApplication::translate("Dialog_search", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_search: public Ui_Dialog_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SEARCH_H
