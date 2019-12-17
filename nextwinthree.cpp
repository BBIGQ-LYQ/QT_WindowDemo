#include "nextwinthree.h"
#include "ui_nextwinthree.h"
#include <QDebug>

NextWinThree::NextWinThree(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NextWinThree)
{
    ui->setupUi(this);
}

NextWinThree::~NextWinThree()
{
    qDebug() << "XIGOU THREE" ;
    delete ui;
}

void NextWinThree::on_FRONT_clicked()
{
    qDebug() << "TO SECOND" ;
    //隐藏当前窗体
    this->hide();

    //显示当前窗体的父亲
    this->parentWidget()->show();
}
