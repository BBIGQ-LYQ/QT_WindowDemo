#ifndef NEXTWIN_H
#define NEXTWIN_H

#include <QMainWindow>

namespace Ui {
class NextWin;
}

class NextWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit NextWin(QWidget *parent = nullptr);
    ~NextWin();

private slots:
    void on_FRONT_clicked();

    void on_NEXT_clicked();

private:
    Ui::NextWin *ui;
};

#endif // NEXTWIN_H
