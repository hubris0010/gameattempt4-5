#ifndef MAINSCREENFIGHTER_H
#define MAINSCREENFIGHTER_H

#include <QMainWindow>

namespace Ui {
class mainscreenfighter;
}

class mainscreenfighter : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit mainscreenfighter(QWidget *parent = 0);
    ~mainscreenfighter();
    
private slots:
    void on_pushButton_released();

    void on_pushButton_3_released();

    void on_pushButton_2_released();

private:
    Ui::mainscreenfighter *ui;
};

#endif // MAINSCREENFIGHTER_H
