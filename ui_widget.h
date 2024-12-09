/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *btn_loadFile;
    QPushButton *btn_searchDrug;
    QPushButton *btn_sort;
    QPushButton *btn_count;
    QPushButton *btn_exit;
    QWidget *W_listPower;
    QPushButton *btn_del;
    QPushButton *btn_set;
    QPushButton *btn_saveFile;
    QWidget *W_addPower;
    QPushButton *btn_addDrug;
    QTableView *tableView;
    QPushButton *btn_clean;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1140, 686);
        Widget->setMinimumSize(QSize(1140, 686));
        Widget->setMaximumSize(QSize(1140, 686));
        QFont font;
        font.setPointSize(8);
        Widget->setFont(font);
        btn_loadFile = new QPushButton(Widget);
        btn_loadFile->setObjectName(QString::fromUtf8("btn_loadFile"));
        btn_loadFile->setGeometry(QRect(830, 630, 201, 41));
        QFont font1;
        font1.setPointSize(10);
        btn_loadFile->setFont(font1);
        btn_loadFile->setCursor(QCursor(Qt::PointingHandCursor));
        btn_searchDrug = new QPushButton(Widget);
        btn_searchDrug->setObjectName(QString::fromUtf8("btn_searchDrug"));
        btn_searchDrug->setEnabled(true);
        btn_searchDrug->setGeometry(QRect(40, 240, 181, 61));
        QFont font2;
        font2.setPointSize(13);
        btn_searchDrug->setFont(font2);
        btn_searchDrug->setCursor(QCursor(Qt::PointingHandCursor));
        btn_sort = new QPushButton(Widget);
        btn_sort->setObjectName(QString::fromUtf8("btn_sort"));
        btn_sort->setEnabled(true);
        btn_sort->setGeometry(QRect(40, 350, 181, 61));
        btn_sort->setFont(font2);
        btn_sort->setCursor(QCursor(Qt::PointingHandCursor));
        btn_count = new QPushButton(Widget);
        btn_count->setObjectName(QString::fromUtf8("btn_count"));
        btn_count->setEnabled(false);
        btn_count->setGeometry(QRect(40, 460, 181, 61));
        btn_count->setFont(font2);
        btn_count->setCursor(QCursor(Qt::PointingHandCursor));
        btn_exit = new QPushButton(Widget);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setGeometry(QRect(40, 570, 181, 101));
        QFont font3;
        font3.setPointSize(24);
        btn_exit->setFont(font3);
        btn_exit->setCursor(QCursor(Qt::PointingHandCursor));
        btn_exit->setAutoRepeat(false);
        btn_exit->setAutoRepeatDelay(300);
        W_listPower = new QWidget(Widget);
        W_listPower->setObjectName(QString::fromUtf8("W_listPower"));
        W_listPower->setGeometry(QRect(242, 620, 561, 51));
        btn_del = new QPushButton(W_listPower);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        btn_del->setGeometry(QRect(220, 10, 111, 41));
        btn_del->setFont(font1);
        btn_del->setCursor(QCursor(Qt::PointingHandCursor));
        btn_set = new QPushButton(W_listPower);
        btn_set->setObjectName(QString::fromUtf8("btn_set"));
        btn_set->setGeometry(QRect(80, 10, 111, 41));
        btn_set->setFont(font1);
        btn_set->setCursor(QCursor(Qt::PointingHandCursor));
        btn_saveFile = new QPushButton(W_listPower);
        btn_saveFile->setObjectName(QString::fromUtf8("btn_saveFile"));
        btn_saveFile->setGeometry(QRect(360, 10, 201, 41));
        btn_saveFile->setFont(font1);
        btn_saveFile->setCursor(QCursor(Qt::PointingHandCursor));
        W_addPower = new QWidget(Widget);
        W_addPower->setObjectName(QString::fromUtf8("W_addPower"));
        W_addPower->setGeometry(QRect(40, 130, 191, 61));
        btn_addDrug = new QPushButton(W_addPower);
        btn_addDrug->setObjectName(QString::fromUtf8("btn_addDrug"));
        btn_addDrug->setGeometry(QRect(0, 0, 181, 61));
        btn_addDrug->setFont(font2);
        btn_addDrug->setCursor(QCursor(Qt::PointingHandCursor));
        tableView = new QTableView(Widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(250, 10, 877, 601));
        btn_clean = new QPushButton(Widget);
        btn_clean->setObjectName(QString::fromUtf8("btn_clean"));
        btn_clean->setGeometry(QRect(70, 40, 111, 41));
        btn_clean->setFont(font1);
        btn_clean->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\255\246\347\261\215\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btn_loadFile->setText(QCoreApplication::translate("Widget", "\344\273\216\346\226\207\344\273\266\345\257\274\345\205\245", nullptr));
        btn_searchDrug->setText(QCoreApplication::translate("Widget", "\346\214\211\347\274\226\345\217\267\346\237\245\346\211\276", nullptr));
#if QT_CONFIG(tooltip)
        btn_sort->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        btn_sort->setText(QCoreApplication::translate("Widget", "\346\216\222\345\272\217", nullptr));
        btn_count->setText(QCoreApplication::translate("Widget", "\347\273\237\350\256\241", nullptr));
#if QT_CONFIG(tooltip)
        btn_exit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        btn_exit->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        btn_del->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        btn_set->setText(QCoreApplication::translate("Widget", "\344\270\264\346\227\266\344\277\235\345\255\230", nullptr));
        btn_saveFile->setText(QCoreApplication::translate("Widget", "\345\257\274\345\207\272\345\210\260\346\226\207\344\273\266", nullptr));
        btn_addDrug->setText(QCoreApplication::translate("Widget", "\345\242\236\345\212\240\344\277\241\346\201\257", nullptr));
        btn_clean->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
