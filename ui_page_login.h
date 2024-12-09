/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_login
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *le_user;
    QLineEdit *le_key;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *spacer;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *but_exit;
    QPushButton *but_login;

    void setupUi(QWidget *page_login)
    {
        if (page_login->objectName().isEmpty())
            page_login->setObjectName(QString::fromUtf8("page_login"));
        page_login->resize(358, 327);
        page_login->setMinimumSize(QSize(358, 327));
        page_login->setMaximumSize(QSize(358, 327));
        gridLayout_2 = new QGridLayout(page_login);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 3, 1, 1);

        le_user = new QLineEdit(page_login);
        le_user->setObjectName(QString::fromUtf8("le_user"));
        le_user->setMaxLength(16);

        gridLayout_2->addWidget(le_user, 2, 2, 1, 1);

        le_key = new QLineEdit(page_login);
        le_key->setObjectName(QString::fromUtf8("le_key"));
        le_key->setMaxLength(16);
        le_key->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(le_key, 3, 2, 1, 1);

        label_2 = new QLabel(page_login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 2, 1, 1, 1);

        label_3 = new QLabel(page_login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 3, 1, 1, 1);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacer, 2, 0, 1, 1);

        label = new QLabel(page_login);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 4);

        widget = new QWidget(page_login);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        but_exit = new QPushButton(widget);
        but_exit->setObjectName(QString::fromUtf8("but_exit"));

        gridLayout->addWidget(but_exit, 0, 1, 1, 1);

        but_login = new QPushButton(widget);
        but_login->setObjectName(QString::fromUtf8("but_login"));

        gridLayout->addWidget(but_login, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget, 5, 1, 1, 2);


        retranslateUi(page_login);

        QMetaObject::connectSlotsByName(page_login);
    } // setupUi

    void retranslateUi(QWidget *page_login)
    {
        page_login->setWindowTitle(QCoreApplication::translate("page_login", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        page_login->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        le_user->setText(QCoreApplication::translate("page_login", "root", nullptr));
        le_user->setPlaceholderText(QCoreApplication::translate("page_login", "\347\224\250\346\210\267\345\220\215", nullptr));
        le_key->setText(QString());
        le_key->setPlaceholderText(QCoreApplication::translate("page_login", "password", nullptr));
        label_2->setText(QCoreApplication::translate("page_login", "\350\264\246\346\210\267", nullptr));
        label_3->setText(QCoreApplication::translate("page_login", "\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("page_login", "\345\255\246\347\261\215\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        but_exit->setText(QCoreApplication::translate("page_login", "\351\200\200\345\207\272", nullptr));
        but_login->setText(QCoreApplication::translate("page_login", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_login: public Ui_page_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
