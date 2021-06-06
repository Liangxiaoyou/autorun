#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#define MAX_ROW 1024

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class mytable{
    char *table[MAX_ROW][5];
    int nrow;
public:
    mytable();
    ~mytable();
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initLogon();
    void initDrivers();
    void initServices();
    void initSchedTasks();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
