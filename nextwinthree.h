#ifndef NEXTWINTHREE_H
#define NEXTWINTHREE_H

#include <QMainWindow>

namespace Ui {
class NextWinThree;
}

class NextWinThree : public QMainWindow
{
    Q_OBJECT

public:
    explicit NextWinThree(QWidget *parent = nullptr);
    ~NextWinThree();

private slots:
    void on_FRONT_clicked();

private:
    Ui::NextWinThree *ui;
};

#endif // NEXTWINTHREE_H
