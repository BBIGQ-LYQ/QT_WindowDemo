#include "nextwin.h"

#include "ui_nextwin.h"

#include "nextwinthree.h"
#include <QDebug>

NextWin::NextWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NextWin)
{
    ui->setupUi(this);
}

NextWin::~NextWin()
{
    qDebug() << "XIGOU SECOND";
    delete ui;
}

void NextWin::on_FRONT_clicked()
{
    qDebug() << "TO Main window" ;
    //隐藏当前窗体
    this->hide();

    //显示当前窗体的父亲
    this->parentWidget()->show();
}

void NextWin::on_NEXT_clicked()
{

    qDebug() << "TO THREE window" ;

    NextWinThree *page3 = new NextWinThree(this);

    page3->show();

    this->hide();
}
