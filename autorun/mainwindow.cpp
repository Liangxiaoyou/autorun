#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./head/logon.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QString string = "...";
//    QTextCodec *codec = QTextCodec::codecForName("gb2312");
//    QByteArray encodedString = codec->fromUnicode(string);
    QTableWidgetItem *item;
    initLogon(&tbl1);
    char result [1024];
    for(int i=0;i<tbl1.getNrow();i++){
        ui->tableWidget_9->insertRow(i);
        for(int j=0;j<5;j++){
            tbl1.getItem(i,j,result);
            item = new QTableWidgetItem(result);
            ui->tableWidget_9->setItem(i,j,item);
        }
    }
    //initDrivers();
    //initServices();
    //initSchedTasks();
    mytable a;
}

MainWindow::~MainWindow()
{
    delete ui;
}




