#ifndef LEOFIGHTER_H
#define LEOFIGHTER_H

#include <QMainWindow>

namespace Ui {
class Leofighter;
}

class Leofighter : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Leofighter(QWidget *parent = 0);
    ~Leofighter();

private slots:

    void on_pushButton_released();

    void on_pushButton_2_released();

    void on_pushButton_3_released();

    void on_pushButton_4_released();

    void on_pushButton_5_released();

    void on_pushButton_6_released();
    
private:
    Ui::Leofighter *ui;
};

#endif // LEOFIGHTER_H
