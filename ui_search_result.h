/********************************************************************************
** Form generated from reading UI file 'search_result.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_RESULT_H
#define UI_SEARCH_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search_result
{
public:
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Search_result)
    {
        if (Search_result->objectName().isEmpty())
            Search_result->setObjectName(QString::fromUtf8("Search_result"));
        Search_result->resize(971, 167);
        gridLayout_2 = new QGridLayout(Search_result);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableView = new QTableView(Search_result);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton = new QPushButton(Search_result);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(Search_result);

        QMetaObject::connectSlotsByName(Search_result);
    } // setupUi

    void retranslateUi(QWidget *Search_result)
    {
        Search_result->setWindowTitle(QCoreApplication::translate("Search_result", "\346\220\234\347\264\242\347\273\223\346\236\234", nullptr));
        pushButton->setText(QCoreApplication::translate("Search_result", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search_result: public Ui_Search_result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_RESULT_H
