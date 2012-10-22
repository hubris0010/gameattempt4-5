#include "mainscreenfighter.h"
#include "ui_mainscreenfighter.h"
#include "fighterscreen.h"
#include <QMessageBox>

int fighterchance;

mainscreenfighter::mainscreenfighter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainscreenfighter)
{
    ui->setupUi(this);
}

mainscreenfighter::~mainscreenfighter()
{
    delete ui;
}

void mainscreenfighter::on_pushButton_released()
{
    srand((unsigned)(time(0)));
    fighterchance=0+(rand()%(int)(1000-0+1));

    if((fighterchance>=0&&fighterchance<500)||(fighterchance<=1000&&fighterchance>900))
    {
        fighterscreen *fight1=new fighterscreen;
        QMessageBox *fight=new QMessageBox;
        fight->setText("A  wild enemy has appeared!");
        fight->show();
        fight1->show();
        this->close();
    }
    if(fighterchance<=899&&fighterchance>=500)
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

void mainscreenfighter::on_pushButton_3_released()
{
    this->close();
}

void mainscreenfighter::on_pushButton_2_released()
{
    QMessageBox *laziness=new QMessageBox;
    laziness->setText("I was too lazy to add in this feature or fix the battle system after the first battle so you'll have to deal with it.\nP.S. There is an easter egg. It's just really hard to find.");
    laziness->show();
    this->close();
}
