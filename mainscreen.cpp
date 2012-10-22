#include "mainscreen.h"
#include "ui_mainscreen.h"
#include "mainwindow.h"

MainScreen::MainScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainScreen)
{
    ui->setupUi(this);
}

MainScreen::~MainScreen()
{
    delete ui;
}

void MainScreen::on_pushButton_released()
{
    MainWindow *play=new MainWindow;
    play->show();
    this->close();
}

void MainScreen::on_pushButton_2_released()
{
    this->close();
}
