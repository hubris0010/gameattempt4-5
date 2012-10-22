#include "mainscreenknight.h"
#include "ui_mainscreenknight.h"
#include "knightscreen.h"
#include <QMessageBox>

int fighterchance2;

mainscreenknight::mainscreenknight(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainscreenknight)
{
    ui->setupUi(this);
}

mainscreenknight::~mainscreenknight()
{
    delete ui;
}

void mainscreenknight::on_pushButton_released()
{
    srand((unsigned)(time(0)));
    fighterchance2=0+(rand()%(int)(1000-0+1));

    if((fighterchance2>=0&&fighterchance2<500)||(fighterchance2<=1000&&fighterchance2>900))
    {
        knightscreen *fight1=new knightscreen;
        QMessageBox *fight=new QMessageBox;
        fight->setText("A wild enemy has appeared!");
        fight->show();
        fight1->show();
        this->close();
    }
    if(fighterchance2<=899&&fighterchance2>=500)
    {
        QMessageBox *sorry=new QMessageBox;
        sorry->setText("Sorry you couldn't find any enemies to fight");
        sorry->show();
    }
    else
    {
        QMessageBox *wuuut=new QMessageBox;
        wuuut->setText("Something Strange has happened.\n Oh no the final boss has appeared!");
    }
}

void mainscreenknight::on_pushButton_3_released()
{
    this->close();
}

void mainscreenknight::on_pushButton_2_released()
{
    QMessageBox *laziness=new QMessageBox;
    laziness->setText("I was too lazy to add in this feature or fix the battle system after the first battle so you'll have to deal with it.\nP.S. There is an easter egg. It's just really hard to find.");
    laziness->show();
    this->close();
}
