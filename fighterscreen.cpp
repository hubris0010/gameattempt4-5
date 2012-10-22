#include "fighterscreen.h"
#include "ui_fighterscreen.h"
#include "mainscreenfighter.h"
#include <QMessageBox>

int attack, enemyattack;
int health=200;
int enemyhealth=200;
int mana=100;

fighterscreen::fighterscreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fighterscreen)
{
    ui->setupUi(this);
}

fighterscreen::~fighterscreen()
{
    delete ui;
}

void fighterscreen::on_pushButton_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attackscreen2=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attack=5+(rand()%(int)(10-5+1));
    enemyattack=10+(rand()%(int)(20-10+1));
    enemyhealth-=attack;
    health-=enemyattack;
    QString text = QString("The enemies health is now %1").arg(enemyhealth);
    attackscreen->setText(text);
    attack=10+(rand()%(int)(20-10+1));
    enemyhealth-=attack;
    QString text3 = QString("You hit twice.\nThe enemies health is now %1").arg(enemyhealth);
    attackscreen2->setText(text3);
    attackscreen2->show();
    QString text1 = QString("Your health is now %1").arg(health);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(health<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealth<=0&&health>0)
    {
        mainscreenfighter *main=new mainscreenfighter;
        main->show();
        this->close();
    }
}

void fighterscreen::on_pushButton_2_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    mainscreenfighter *main=new mainscreenfighter;
    srand((unsigned)time(0));
    attack=10+(rand()%(int)(20-10+1));
    enemyattack=10+(rand()%(int)(20-10+1));
    enemyhealth-=attack;
    health-=enemyattack;
    QString text = QString("The enemies health is now %1").arg(enemyhealth);
    attackscreen->setText(text);
    QString text1 = QString("Your health is now %1").arg(health);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(health<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealth<=0&&health>0)
    {
        main->show();
        this->close();
    }
}

void fighterscreen::on_pushButton_3_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attackscreen2=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    mainscreenfighter *main=new mainscreenfighter;
    srand((unsigned)time(0));
    attack=20+(rand()%(int)(30-20+1));
    enemyattack=10+(rand()%(int)(20-10+1));
    enemyhealth-=attack;
    health-=enemyattack;
    QString text = QString("The enemies health is now %1").arg(enemyhealth);
    attackscreen->setText(text);
    QString text1 = QString("Your health is now %1").arg(health);
    enemyattack=10+(rand()%(int)(20-10+1));
    health-=enemyattack;
    QString text2 = QString("You got hit twice.\nNow your health is %1").arg(health);
    attackscreen2->setText(text2);
    attackscreen2->show();
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(health<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealth<=0&&health>0)
    {
        main->show();
        this->close();
    }
}

void fighterscreen::on_pushButton_4_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    mainscreenfighter *main=new mainscreenfighter;
    srand((unsigned)time(0));
    attack=5;
    enemyattack=10+(rand()%(int)(20-10+1));
    health-=enemyattack;
    if(mana>=5)
    {
        enemyhealth-=attack;
        QString text = QString("The enemies health is now %1").arg(enemyhealth);
        attackscreen->setText(text);
        mana-=5;
    }
    else
    {
        QString text3 = QString("You didn't have enough mana\nYou didn't attack");
        attackscreen->setText(text3);
    }
    QString text1 = QString("Your health is now %1").arg(health);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(health<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealth<=0&&health>0)
    {
        loseorwin->setText("You win!");
        main->show();
        this->close();
    }

}

void fighterscreen::on_pushButton_5_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    mainscreenfighter *main=new mainscreenfighter;
    srand((unsigned)time(0));
    attack=10;
    enemyattack=10+(rand()%(int)(20-10+1));
    health-=enemyattack;
    if(mana>=10)
    {
        enemyhealth-=attack;
        QString text = QString("The enemies health is now %1").arg(enemyhealth);
        attackscreen->setText(text);
        mana-=10;
    }
    else
    {
        QString text3 = QString("You didn't have enough mana\nYou didn't attack");
        attackscreen->setText(text3);
    }
    QString text1 = QString("Your health is now %1").arg(health);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(health<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealth<=0&&health>0)
    {
        main->show();
        this->close();
    }
}

void fighterscreen::on_pushButton_6_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    mainscreenfighter *main=new mainscreenfighter;
    srand((unsigned)time(0));
    attack=15;
    enemyattack=10+(rand()%(int)(20-10+1));
    health-=enemyattack;
    if(mana>=20)
    {
        enemyhealth-=attack;
        QString text = QString("The enemies health is now %1").arg(enemyhealth);
        attackscreen->setText(text);
        mana-=20;
    }
    else
    {
        QString text3 = QString("You didn't have enough mana\nYou didn't attack");
        attackscreen->setText(text3);
    }
    QString text1 = QString("Your health is now %1").arg(health);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(health<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealth<=0&&health>0)
    {
        main->show();
        this->close();
    }
}
