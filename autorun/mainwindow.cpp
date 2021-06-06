#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTableWidgetItem *item;
    item = new QTableWidgetItem("hello");
    ui->tableWidget_9->clearContents();
    ui->tableWidget_9->insertRow(0);
    ui->tableWidget_9->setItem(0,1,item);
    //initLogon();
    //initDrivers();
    //initServices();
    //initSchedTasks();
    mytable a;
}

MainWindow::~MainWindow()
{
    delete ui;
}


mytable::mytable(){
    printf("create a table\n");
}

mytable::~mytable(){
    printf("delete a table\n");
}
