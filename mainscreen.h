#ifndef MAINSCREEN_H
#define MAINSCREEN_H

#include <QMainWindow>

namespace Ui {
class MainScreen;
}

class MainScreen : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainScreen(QWidget *parent = 0);
    ~MainScreen();
    
private slots:
    void on_pushButton_released();

    void on_pushButton_2_released();

private:
    Ui::MainScreen *ui;
};

#endif // MAINSCREEN_H
