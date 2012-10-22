#include "magescreen.h"
#include "ui_magescreen.h"
#include "mainscreenmage.h"
#include <QMessageBox>

int attackmage, enemyattackmage;
int healthmage=150;
int enemyhealthmage=200;
int manamage=200;

magescreen::magescreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::magescreen)
{
    ui->setupUi(this);
}

magescreen::~magescreen()
{
    delete ui;
}

void magescreen::on_pushButton_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attackscreen2=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackmage=5+(rand()%(int)(10-5+1));
    enemyattackmage=10+(rand()%(int)(20-10+1));
    enemyhealthmage-=attackmage;
    healthmage-=enemyattackmage;
    QString text = QString("The enemies health is now %1").arg(enemyhealthmage);
    attackscreen->setText(text);
    attackmage=5+(rand()%(int)(10-5+1));
    enemyhealthmage-=attackmage;
    QString text3 = QString("You hit twice.\nThe enemies health is now %1").arg(enemyhealthmage);
    attackscreen2->setText(text3);
    attackscreen2->show();
    QString text1 = QString("Your health is now %1").arg(healthmage);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthmage<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthmage<=0&&healthmage>0)
    {
        mainscreenmage *main=new mainscreenmage;
        main->show();
        this->close();
    }
}

void magescreen::on_pushButton_2_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackmage=10+(rand()%(int)(15-10+1));
    enemyattackmage=10+(rand()%(int)(20-10+1));
    enemyhealthmage-=attackmage;
    healthmage-=enemyattackmage;
    QString text = QString("The enemies health is now %1").arg(enemyhealthmage);
    attackscreen->setText(text);
    QString text1 = QString("Your health is now %1").arg(healthmage);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthmage<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthmage<=0&&healthmage>0)
    {
        mainscreenmage *main=new mainscreenmage;
        main->show();
        this->close();
    }
}

void magescreen::on_pushButton_3_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attackscreen2=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackmage=15+(rand()%(int)(25-15+1));
    enemyattackmage=10+(rand()%(int)(20-10+1));
    enemyhealthmage-=attackmage;
    healthmage-=enemyattackmage;
    QString text = QString("The enemies health is now %1").arg(enemyhealthmage);
    attackscreen->setText(text);
    QString text1 = QString("Your health is now %1").arg(healthmage);
    enemyattackmage=10+(rand()%(int)(20-10+1));
    healthmage-=enemyattackmage;
    QString text2 = QString("You got hit twice.\nNow your health is %1").arg(healthmage);
    attackscreen2->setText(text2);
    attackscreen2->show();
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthmage<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthmage<=0&&healthmage>0)
    {
        mainscreenmage *main=new mainscreenmage;
        main->show();
        this->close();
    }
}

void magescreen::on_pushButton_4_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackmage=10;
    enemyattackmage=10+(rand()%(int)(20-10+1));
    healthmage-=enemyattackmage;
    if(manamage>=5)
    {
        enemyhealthmage-=attackmage;
        QString text = QString("The enemies health is now %1").arg(enemyhealthmage);
        attackscreen->setText(text);
        manamage-=5;
    }
    else
    {
        QString text3 = QString("You didn't have enough mana\nYou didn't attack");
        attackscreen->setText(text3);
    }
    QString text1 = QString("Your health is now %1").arg(healthmage);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthmage<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthmage<=0&&healthmage>0)
    {
        mainscreenmage *main=new mainscreenmage;
        main->show();
        this->close();
    }

}

void magescreen::on_pushButton_5_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackmage=15;
    enemyattackmage=10+(rand()%(int)(20-10+1));
    healthmage-=enemyattackmage;
    if(manamage>=10)
    {
        enemyhealthmage-=attackmage;
        QString text = QString("The enemies health is now %1").arg(enemyhealthmage);
        attackscreen->setText(text);
        manamage-=10;
    }
    else
    {
        QString text3 = QString("You didn't have enough mana\nYou didn't attack");
        attackscreen->setText(text3);
    }
    QString text1 = QString("Your health is now %1").arg(healthmage);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthmage<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthmage<=0&&healthmage>0)
    {
        mainscreenmage *main=new mainscreenmage;
        main->show();
        this->close();
    }
}

void magescreen::on_pushButton_6_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackmage=30;
    enemyattackmage=10+(rand()%(int)(20-10+1));
    healthmage-=enemyattackmage;
    if(manamage>=20)
    {
        enemyhealthmage-=attackmage;
        QString text = QString("The enemies health is now %1").arg(enemyhealthmage);
        attackscreen->setText(text);
        manamage-=20;
    }
    else
    {
        QString text3 = QString("You didn't have enough mana\nYou didn't attack");
        attackscreen->setText(text3);
    }
    QString text1 = QString("Your health is now %1").arg(healthmage);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthmage<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthmage<=0&&healthmage>0)
    {
        mainscreenmage *main=new mainscreenmage;
        main->show();
        this->close();
    }
}
