#ifndef MAGESCREEN_H
#define MAGESCREEN_H

#include <QMainWindow>

namespace Ui {
class magescreen;
}

class magescreen : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit magescreen(QWidget *parent = 0);
    ~magescreen();

private slots:

    void on_pushButton_released();

    void on_pushButton_2_released();

    void on_pushButton_3_released();

    void on_pushButton_4_released();

    void on_pushButton_5_released();

    void on_pushButton_6_released();

private:
    Ui::magescreen *ui;
};

#endif // MAGESCREEN_H
