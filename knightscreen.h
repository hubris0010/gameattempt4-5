#ifndef KNIGHTSCREEN_H
#define KNIGHTSCREEN_H

#include <QMainWindow>

namespace Ui {
class knightscreen;
}

class knightscreen : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit knightscreen(QWidget *parent = 0);
    ~knightscreen();

private slots:

    void on_pushButton_released();

    void on_pushButton_2_released();

    void on_pushButton_3_released();

    void on_pushButton_4_released();

    void on_pushButton_5_released();

    void on_pushButton_6_released();

private:
    Ui::knightscreen *ui;
};

#endif // KNIGHTSCREEN_H
