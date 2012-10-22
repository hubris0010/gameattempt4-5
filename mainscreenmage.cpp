#include "mainscreenmage.h"
#include "ui_mainscreenmage.h"
#include "magescreen.h"
#include <QMessageBox>

int fighterchance1;

mainscreenmage::mainscreenmage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainscreenmage)
{
    ui->setupUi(this);
}

mainscreenmage::~mainscreenmage()
{
    delete ui;
}
void mainscreenmage::on_pushButton_released()
{
    srand((unsigned)(time(0)));
    fighterchance1=0+(rand()%(int)(1000-0+1));

    if((fighterchance1>=0&&fighterchance1<500)||(fighterchance1<=1000&&fighterchance1>900))
    {
        magescreen *fight1=new magescreen;
        QMessageBox *fight=new QMessageBox;
        fight->setText("A wild enemy has appeared!");
        fight->show();
        fight1->show();
        this->close();
    }
    if(fighterchance1<=899&&fighterchance1>=500)
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

void mainscreenmage::on_pushButton_3_released()
{
    this->close();
}

void mainscreenmage::on_pushButton_2_released()
{
    QMessageBox *laziness=new QMessageBox;
    laziness->setText("I was too lazy to add in this feature or fix the battle system after the first battle so you'll have to deal with it.\nP.S. There is an easter egg. It's just really hard to find.");
    laziness->show();
    this->close();
}
