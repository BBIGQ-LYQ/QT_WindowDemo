#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nextwin.h"
#include <qdebug.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    qDebug() << "XIGOU MAIN";
    delete ui;
}


void MainWindow::on_NEXT_clicked()
{
    qDebug() << "TO SECOND" ;

    NextWin *page2 = new NextWin(this);

    page2->show();

    this->hide();

}
