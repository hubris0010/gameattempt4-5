#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "userclass.h"
#include <QtGui/QApplication>
#include <QtGui/QPushButton>
#include <QtGui/QMessageBox>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_2_pressed()
{
    QMessageBox *choice=new QMessageBox;
    choice->setText("You chose to end the game");
    choice->show();
    this->close();
}

void MainWindow::on_pushButton_pressed()
{
    QMessageBox *choice=new QMessageBox;
    userclass *user=new userclass;
    user->show();
    choice->setText("You chose to attack");
    choice->show();
    this->close();
}

void MainWindow::on_actionQuit_triggered()
{
    this->close();
}
