/********************************************************************************
** Form generated from reading UI file 'dialog_exit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_EXIT_H
#define UI_DIALOG_EXIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_exit
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_exit;
    QPushButton *btn_cancer;

    void setupUi(QDialog *Dialog_exit)
    {
        if (Dialog_exit->objectName().isEmpty())
            Dialog_exit->setObjectName(QString::fromUtf8("Dialog_exit"));
        Dialog_exit->resize(393, 249);
        Dialog_exit->setMinimumSize(QSize(393, 249));
        Dialog_exit->setMaximumSize(QSize(393, 249));
        gridLayout_2 = new QGridLayout(Dialog_exit);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(Dialog_exit);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_exit = new QPushButton(Dialog_exit);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));

        horizontalLayout->addWidget(btn_exit);

        btn_cancer = new QPushButton(Dialog_exit);
        btn_cancer->setObjectName(QString::fromUtf8("btn_cancer"));

        horizontalLayout->addWidget(btn_cancer);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(Dialog_exit);

        QMetaObject::connectSlotsByName(Dialog_exit);
    } // setupUi

    void retranslateUi(QDialog *Dialog_exit)
    {
        Dialog_exit->setWindowTitle(QCoreApplication::translate("Dialog_exit", "\350\215\257\345\223\201\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        Dialog_exit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Dialog_exit", "<html><head/><body><p align=\"center\">\347\241\256\350\256\244\351\200\200\345\207\272\357\274\237</p></body></html>", nullptr));
        btn_exit->setText(QCoreApplication::translate("Dialog_exit", "\347\241\256\350\256\244", nullptr));
        btn_cancer->setText(QCoreApplication::translate("Dialog_exit", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_exit: public Ui_Dialog_exit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_EXIT_H
