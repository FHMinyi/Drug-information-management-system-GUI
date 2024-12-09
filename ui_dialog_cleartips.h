/********************************************************************************
** Form generated from reading UI file 'dialog_cleartips.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CLEARTIPS_H
#define UI_DIALOG_CLEARTIPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_clearTips
{
public:
    QLabel *label;
    QPushButton *btn_ok;
    QPushButton *btn_cancer;

    void setupUi(QDialog *Dialog_clearTips)
    {
        if (Dialog_clearTips->objectName().isEmpty())
            Dialog_clearTips->setObjectName(QString::fromUtf8("Dialog_clearTips"));
        Dialog_clearTips->resize(393, 249);
        QFont font;
        font.setPointSize(9);
        Dialog_clearTips->setFont(font);
        label = new QLabel(Dialog_clearTips);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 40, 141, 81));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        btn_ok = new QPushButton(Dialog_clearTips);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(50, 150, 111, 41));
        btn_cancer = new QPushButton(Dialog_clearTips);
        btn_cancer->setObjectName(QString::fromUtf8("btn_cancer"));
        btn_cancer->setGeometry(QRect(210, 150, 111, 41));

        retranslateUi(Dialog_clearTips);

        QMetaObject::connectSlotsByName(Dialog_clearTips);
    } // setupUi

    void retranslateUi(QDialog *Dialog_clearTips)
    {
        Dialog_clearTips->setWindowTitle(QCoreApplication::translate("Dialog_clearTips", "\346\217\220\347\244\272", nullptr));
        label->setText(QCoreApplication::translate("Dialog_clearTips", "\346\230\257\345\220\246\346\270\205\347\251\272", nullptr));
        btn_ok->setText(QCoreApplication::translate("Dialog_clearTips", "\347\241\256\350\256\244", nullptr));
        btn_cancer->setText(QCoreApplication::translate("Dialog_clearTips", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_clearTips: public Ui_Dialog_clearTips {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CLEARTIPS_H
