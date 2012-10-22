#ifndef MAINSCREENMAGE_H
#define MAINSCREENMAGE_H

#include <QMainWindow>

namespace Ui {
class mainscreenmage;
}

class mainscreenmage : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit mainscreenmage(QWidget *parent = 0);
    ~mainscreenmage();

private slots:
    void on_pushButton_released();

    void on_pushButton_3_released();

    void on_pushButton_2_released();
    
private:
    Ui::mainscreenmage *ui;
};

#endif // MAINSCREENMAGE_H
