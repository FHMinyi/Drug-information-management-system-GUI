/********************************************************************************
** Form generated from reading UI file 'dialog_savetips.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SAVETIPS_H
#define UI_DIALOG_SAVETIPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_saveTips
{
public:
    QPushButton *btn_ok;
    QPushButton *btn_cancer;
    QLabel *label;

    void setupUi(QDialog *Dialog_saveTips)
    {
        if (Dialog_saveTips->objectName().isEmpty())
            Dialog_saveTips->setObjectName(QString::fromUtf8("Dialog_saveTips"));
        Dialog_saveTips->resize(393, 249);
        btn_ok = new QPushButton(Dialog_saveTips);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(60, 160, 111, 41));
        btn_cancer = new QPushButton(Dialog_saveTips);
        btn_cancer->setObjectName(QString::fromUtf8("btn_cancer"));
        btn_cancer->setGeometry(QRect(210, 160, 111, 41));
        label = new QLabel(Dialog_saveTips);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 60, 201, 61));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Dialog_saveTips);

        QMetaObject::connectSlotsByName(Dialog_saveTips);
    } // setupUi

    void retranslateUi(QDialog *Dialog_saveTips)
    {
        Dialog_saveTips->setWindowTitle(QCoreApplication::translate("Dialog_saveTips", "\346\217\220\347\244\272", nullptr));
        btn_ok->setText(QCoreApplication::translate("Dialog_saveTips", "\347\241\256\345\256\232", nullptr));
        btn_cancer->setText(QCoreApplication::translate("Dialog_saveTips", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("Dialog_saveTips", "\346\230\257\345\220\246\350\246\206\347\233\226\346\226\207\344\273\266\357\274\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_saveTips: public Ui_Dialog_saveTips {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SAVETIPS_H
