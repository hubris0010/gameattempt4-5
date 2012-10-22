#include "userclass.h"
#include "ui_userclass.h"
#include "fighterscreen.h"
#include "knightscreen.h"
#include "magescreen.h"
#include <QtGui/QApplication>
#include <QtGui/QPushButton>
#include <QtGui/QMessageBox>
#include <QWidget>

userclass::userclass(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userclass)
{
    ui->setupUi(this);
}

userclass::~userclass()
{
    delete ui;
}
void userclass::on_Fighter_clicked()
{
    QMessageBox *choice=new QMessageBox;
    fighterscreen *rogue=new fighterscreen;
    rogue->show();
    choice->setText("You chose the Rogue class");
    choice->show();
    this->close();
}

void userclass::on_Mage_clicked()
{
    QMessageBox *choice=new QMessageBox;
    magescreen *knight=new magescreen;
    knight->show();
    choice->setText("You chose the Mage class");
    choice->show();
    this->close();
}

void userclass::on_Knight_clicked()
{
    QMessageBox *choice=new QMessageBox;
    knightscreen *mage=new knightscreen;
    mage->show();
    choice->setText("You chose the Knight class");
    choice->show();
    this->close();
}
