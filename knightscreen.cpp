#include "knightscreen.h"
#include "ui_knightscreen.h"
#include "mainscreenknight.h"
#include <QMessageBox>

int attackknight, enemyattackknight;
int healthknight=250;
int enemyhealthknight=200;
int manaknight=50;

knightscreen::knightscreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::knightscreen)
{
    ui->setupUi(this);
}

knightscreen::~knightscreen()
{
    delete ui;
}

void knightscreen::on_pushButton_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attackscreen2=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackknight=20+(rand()%(int)(25-20+1));
    enemyattackknight=10+(rand()%(int)(20-10+1));
    enemyhealthknight-=attackknight;
    healthknight-=enemyattackknight;
    QString text = QString("The enemies health is now %1").arg(enemyhealthknight);
    attackscreen->setText(text);
    attackknight=20+(rand()%(int)(25-20+1));
    enemyhealthknight-=attackknight;
    QString text3 = QString("You hit twice.\nThe enemies health is now %1").arg(enemyhealthknight);
    attackscreen2->setText(text3);
    attackscreen2->show();
    QString text1 = QString("Your health is now %1").arg(healthknight);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthknight<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthknight<=0&&healthknight>0)
    {
        mainscreenknight *main=new mainscreenknight;
        main->show();
        this->close();
    }
}

void knightscreen::on_pushButton_2_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackknight=25+(rand()%(int)(35-25+1));
    enemyattackknight=10+(rand()%(int)(20-10+1));
    enemyhealthknight-=attackknight;
    healthknight-=enemyattackknight;
    QString text = QString("The enemies health is now %1").arg(enemyhealthknight);
    attackscreen->setText(text);
    QString text1 = QString("Your health is now %1").arg(healthknight);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthknight<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthknight<=0&&healthknight>0)
    {
        mainscreenknight *main=new mainscreenknight;
        main->show();
        this->close();
    }
}

void knightscreen::on_pushButton_3_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attackscreen2=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackknight=35+(rand()%(int)(45-35+1));
    enemyattackknight=10+(rand()%(int)(20-10+1));
    enemyhealthknight-=attackknight;
    healthknight-=enemyattackknight;
    QString text = QString("The enemies health is now %1").arg(enemyhealthknight);
    attackscreen->setText(text);
    QString text1 = QString("Your health is now %1").arg(healthknight);
    enemyattackknight=10+(rand()%(int)(20-10+1));
    healthknight-=enemyattackknight;
    QString text2 = QString("You got hit twice.\nNow your health is %1").arg(healthknight);
    attackscreen2->setText(text2);
    attackscreen2->show();
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthknight<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthknight<=0&&healthknight>0)
    {
        mainscreenknight *main=new mainscreenknight;
        main->show();
        this->close();
    }
}

void knightscreen::on_pushButton_4_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackknight=1;
    enemyattackknight=10+(rand()%(int)(20-10+1));
    healthknight-=enemyattackknight;
    if(manaknight>=5)
    {
        enemyhealthknight-=attackknight;
        QString text = QString("The enemies health is now %1").arg(enemyhealthknight);
        attackscreen->setText(text);
        manaknight-=5;
    }
    else
    {
        QString text3 = QString("You didn't have enough mana\nYou didn't attack");
        attackscreen->setText(text3);
    }
    QString text1 = QString("Your health is now %1").arg(healthknight);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthknight<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthknight<=0&&healthknight>0)
    {
        mainscreenknight *main=new mainscreenknight;
        main->show();
        this->close();
    }

}

void knightscreen::on_pushButton_5_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackknight=5;
    enemyattackknight=10+(rand()%(int)(20-10+1));
    healthknight-=enemyattackknight;
    if(manaknight>=10)
    {
        enemyhealthknight-=attackknight;
        QString text = QString("The enemies health is now %1").arg(enemyhealthknight);
        attackscreen->setText(text);
        manaknight-=10;
    }
    else
    {
        QString text3 = QString("You didn't have enough mana\nYou didn't attack");
        attackscreen->setText(text3);
    }
    QString text1 = QString("Your health is now %1").arg(healthknight);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthknight<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthknight<=0&&healthknight>0)
    {
        mainscreenknight *main=new mainscreenknight;
        main->show();
        this->close();
    }
}

void knightscreen::on_pushButton_6_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackknight=10;
    enemyattackknight=10+(rand()%(int)(20-10+1));
    healthknight-=enemyattackknight;
    if(manaknight>=20)
    {
        enemyhealthknight-=attackknight;
        QString text = QString("The enemies health is now %1").arg(enemyhealthknight);
        attackscreen->setText(text);
        manaknight-=20;
    }
    else
    {
        QString text3 = QString("You didn't have enough mana\nYou didn't attack");
        attackscreen->setText(text3);
    }
    QString text1 = QString("Your health is now %1").arg(healthknight);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthknight<=0)
    {
        loseorwin->setText("Sorry you lose");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthknight<=0&&healthknight>0)
    {
        mainscreenknight *main=new mainscreenknight;
        main->show();
        this->close();
    }
}
