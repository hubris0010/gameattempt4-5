#ifndef FIGHTERSCREEN_H
#define FIGHTERSCREEN_H

#include <QMainWindow>

namespace Ui {
class fighterscreen;
}

class fighterscreen : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit fighterscreen(QWidget *parent = 0);
    ~fighterscreen();
    
private slots:

    void on_pushButton_released();

    void on_pushButton_2_released();

    void on_pushButton_3_released();

    void on_pushButton_4_released();

    void on_pushButton_5_released();

    void on_pushButton_6_released();

private:
    Ui::fighterscreen *ui;
};

#endif // FIGHTERSCREEN_H
