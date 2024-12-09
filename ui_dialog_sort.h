/********************************************************************************
** Form generated from reading UI file 'dialog_sort.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SORT_H
#define UI_DIALOG_SORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_sort
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *btn_indication;
    QPushButton *btn_price;
    QPushButton *btn_name;
    QPushButton *btn_prescription;
    QPushButton *btn_cancer;
    QPushButton *btn_expiryDate;
    QPushButton *btn_manufactureDate;

    void setupUi(QDialog *Dialog_sort)
    {
        if (Dialog_sort->objectName().isEmpty())
            Dialog_sort->setObjectName(QString::fromUtf8("Dialog_sort"));
        Dialog_sort->resize(400, 300);
        gridLayout = new QGridLayout(Dialog_sort);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Dialog_sort);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        btn_indication = new QPushButton(Dialog_sort);
        btn_indication->setObjectName(QString::fromUtf8("btn_indication"));
        btn_indication->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btn_indication, 1, 0, 1, 1);

        btn_price = new QPushButton(Dialog_sort);
        btn_price->setObjectName(QString::fromUtf8("btn_price"));
        btn_price->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btn_price, 1, 2, 1, 1);

        btn_name = new QPushButton(Dialog_sort);
        btn_name->setObjectName(QString::fromUtf8("btn_name"));
        btn_name->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btn_name, 2, 0, 1, 1);

        btn_prescription = new QPushButton(Dialog_sort);
        btn_prescription->setObjectName(QString::fromUtf8("btn_prescription"));
        btn_prescription->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btn_prescription, 2, 2, 1, 1);

        btn_cancer = new QPushButton(Dialog_sort);
        btn_cancer->setObjectName(QString::fromUtf8("btn_cancer"));
        btn_cancer->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btn_cancer, 4, 1, 1, 1);

        btn_expiryDate = new QPushButton(Dialog_sort);
        btn_expiryDate->setObjectName(QString::fromUtf8("btn_expiryDate"));
        btn_expiryDate->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btn_expiryDate, 1, 1, 1, 1);

        btn_manufactureDate = new QPushButton(Dialog_sort);
        btn_manufactureDate->setObjectName(QString::fromUtf8("btn_manufactureDate"));
        btn_manufactureDate->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(btn_manufactureDate, 2, 1, 1, 1);


        retranslateUi(Dialog_sort);

        QMetaObject::connectSlotsByName(Dialog_sort);
    } // setupUi

    void retranslateUi(QDialog *Dialog_sort)
    {
        Dialog_sort->setWindowTitle(QCoreApplication::translate("Dialog_sort", "\346\216\222\345\272\217", nullptr));
        label->setText(QCoreApplication::translate("Dialog_sort", "\350\257\267\351\200\211\346\213\251\346\216\222\345\272\217\346\226\271\345\274\217", nullptr));
        btn_indication->setText(QCoreApplication::translate("Dialog_sort", "\346\214\211\351\200\202\345\272\224\347\227\207\347\212\266", nullptr));
        btn_price->setText(QCoreApplication::translate("Dialog_sort", "\346\214\211\344\273\267\346\240\274", nullptr));
        btn_name->setText(QCoreApplication::translate("Dialog_sort", "\346\214\211\345\220\215\347\247\260", nullptr));
        btn_prescription->setText(QCoreApplication::translate("Dialog_sort", "\346\214\211\345\244\204\346\226\271\347\212\266\346\200\201", nullptr));
        btn_cancer->setText(QCoreApplication::translate("Dialog_sort", "\345\217\226\346\266\210", nullptr));
        btn_expiryDate->setText(QCoreApplication::translate("Dialog_sort", "\346\214\211\345\244\261\346\225\210\346\227\245\346\234\237", nullptr));
        btn_manufactureDate->setText(QCoreApplication::translate("Dialog_sort", "\346\214\211\347\224\237\344\272\247\346\227\245\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_sort: public Ui_Dialog_sort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SORT_H
