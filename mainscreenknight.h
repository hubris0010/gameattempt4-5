#ifndef MAINSCREENKNIGHT_H
#define MAINSCREENKNIGHT_H

#include <QMainWindow>

namespace Ui {
class mainscreenknight;
}

class mainscreenknight : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit mainscreenknight(QWidget *parent = 0);
    ~mainscreenknight();

private slots:
    void on_pushButton_released();

    void on_pushButton_3_released();

    void on_pushButton_2_released();
    
private:
    Ui::mainscreenknight *ui;
};

#endif // MAINSCREENKNIGHT_H
