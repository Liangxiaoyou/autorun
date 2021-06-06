/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QTableWidget *tableWidget_9;
    QWidget *tab_2;
    QTableWidget *tableWidget_8;
    QWidget *tab_3;
    QTableWidget *tableWidget_7;
    QWidget *tab_4;
    QTableWidget *tableWidget_6;
    QWidget *tab_5;
    QTableWidget *tableWidget_5;
    QWidget *tab;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 0, 1000, 400));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        tableWidget_9 = new QTableWidget(tab_1);
        if (tableWidget_9->columnCount() < 5)
            tableWidget_9->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_9->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_9->setObjectName(QString::fromUtf8("tableWidget_9"));
        tableWidget_9->setGeometry(QRect(0, 0, 1091, 831));
        tableWidget_9->setColumnCount(5);
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableWidget_8 = new QTableWidget(tab_2);
        if (tableWidget_8->columnCount() < 5)
            tableWidget_8->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_8->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        tableWidget_8->setObjectName(QString::fromUtf8("tableWidget_8"));
        tableWidget_8->setGeometry(QRect(0, 0, 1091, 831));
        tableWidget_8->setColumnCount(5);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableWidget_7 = new QTableWidget(tab_3);
        if (tableWidget_7->columnCount() < 5)
            tableWidget_7->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        tableWidget_7->setObjectName(QString::fromUtf8("tableWidget_7"));
        tableWidget_7->setGeometry(QRect(0, 0, 1091, 831));
        tableWidget_7->setColumnCount(5);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tableWidget_6 = new QTableWidget(tab_4);
        if (tableWidget_6->columnCount() < 5)
            tableWidget_6->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(4, __qtablewidgetitem19);
        tableWidget_6->setObjectName(QString::fromUtf8("tableWidget_6"));
        tableWidget_6->setGeometry(QRect(0, 0, 1091, 831));
        tableWidget_6->setColumnCount(5);
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tableWidget_5 = new QTableWidget(tab_5);
        if (tableWidget_5->columnCount() < 5)
            tableWidget_5->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(4, __qtablewidgetitem24);
        tableWidget_5->setObjectName(QString::fromUtf8("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(0, 0, 1091, 831));
        tableWidget_5->setColumnCount(5);
        tabWidget->addTab(tab_5, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(tabWidget, &QTabWidget::tabBarClicked, tableWidget_9, qOverload<>(&QTableWidget::doItemsLayout));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_9->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Autorun Entry", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_9->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_9->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_9->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Image Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_9->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "Logon", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_8->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Autorun Entry", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_8->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_8->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_8->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Image Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_8->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Services", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_7->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Autorun Entry", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_7->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_7->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_7->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Image Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_7->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Drivers", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_6->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Autorun Entry", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_6->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_6->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_6->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "Image Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_6->horizontalHeaderItem(4);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Schedules Tasks", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "Autorun Entry", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Publisher", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "Image Path", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_5->horizontalHeaderItem(4);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "KnownDLLs", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Internet Explorer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
