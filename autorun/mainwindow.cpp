#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./head/logon.h"
#include "./head/serviceDriver.h"

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
    initSerDri(&tbl2,&tbl3);
    char result [1024];
    for(int i=0;i<tbl1.getNrow();i++){
        ui->tableWidget_9->insertRow(i);
        for(int j=0;j<5;j++){
            tbl1.getItem(i,j,result);

            item = new QTableWidgetItem(result);
            if(tbl1.isIntro(i))
                item->setBackground(QColor(0,200,255));//设为淡蓝色
            //应该按照utf-8去解析数据·
            ui->tableWidget_9->setItem(i,j,item);

        }
        if(tbl1.isIntro(i)){

            ui->tableWidget_9->setSpan(i,0,1,5);
        }
    }
    for(int i=0;i<tbl2.getNrow();i++){
        ui->tableWidget_8->insertRow(i);
        for(int j=0;j<5;j++){
            tbl2.getItem(i,j,result);

            item = new QTableWidgetItem(result);
            if(tbl2.isIntro(i))
                item->setBackground(QColor(0,200,255));//设为淡蓝色
            //应该按照utf-8去解析数据·
            ui->tableWidget_8->setItem(i,j,item);

        }
        if(tbl2.isIntro(i)){
            ui->tableWidget_8->setSpan(i,0,1,5);
        }
    }

    for(int i=0;i<tbl3.getNrow();i++){
        ui->tableWidget_7->insertRow(i);
        for(int j=0;j<5;j++){
            tbl3.getItem(i,j,result);

            item = new QTableWidgetItem(result);
            if(tbl3.isIntro(i))
                item->setBackground(QColor(0,200,255));//设为淡蓝色
            //应该按照utf-8去解析数据·
            ui->tableWidget_7->setItem(i,j,item);

        }
        if(tbl3.isIntro(i)){
            ui->tableWidget_7->setSpan(i,0,1,5);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}




