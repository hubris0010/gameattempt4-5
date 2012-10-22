#include "leofighter.h"
#include "ui_leofighter.h"
#include <QMessageBox>

int attackleo, enemyattackleo;
int healthleo=200;
int enemyhealthleo=200;
int manaleo=100;

Leofighter::Leofighter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Leofighter)
{
    ui->setupUi(this);
}

Leofighter::~Leofighter()
{
    delete ui;
}

void Leofighter::on_pushButton_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attackscreen2=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackleo=5+(rand()%(int)(10-5+1));
    enemyattackleo=10000+(rand()%(int)(20000-10000+1));
    enemyhealthleo-=attackleo;
    healthleo-=enemyattackleo;
    QString text = QString("The enemies health is now %1").arg(enemyhealthleo);
    attackscreen->setText(text);
    attackleo=10+(rand()%(int)(20-10+1));
    enemyhealthleo-=attackleo;
    QString text3 = QString("You hit twice.\nThe enemies health is now %1").arg(enemyhealthleo);
    attackscreen2->setText(text3);
    attackscreen2->show();
    QString text1 = QString("Your health is now %1").arg(healthleo);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthleo<=0)
    {
        loseorwin->setText("Because Connor Leonard wanted an easter egg, I thought I'd put in this.\nThis is Leo, the final boss.");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthleo<=0&&healthleo>0)
    {
        this->close();
    }
}

void Leofighter::on_pushButton_2_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackleo=10+(rand()%(int)(20-10+1));
    enemyattackleo=10+(rand()%(int)(20-10+1));
    enemyhealthleo-=attackleo;
    healthleo-=enemyattackleo;
    QString text = QString("The enemies health is now %1").arg(enemyhealthleo);
    attackscreen->setText(text);
    QString text1 = QString("Your health is now %1").arg(healthleo);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthleo<=0)
    {
        loseorwin->setText("Because Connor Leonard wanted an easter egg, I thought I'd put in this.\nThis is Leo, the final boss.");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthleo<=0&&healthleo>0)
    {
        this->close();
    }
}

void Leofighter::on_pushButton_3_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attackscreen2=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackleo=20+(rand()%(int)(30-20+1));
    enemyattackleo=10+(rand()%(int)(20-10+1));
    enemyhealthleo-=attackleo;
    healthleo-=enemyattackleo;
    QString text = QString("The enemies health is now %1").arg(enemyhealthleo);
    attackscreen->setText(text);
    QString text1 = QString("Your health is now %1").arg(healthleo);
    enemyattackleo=10+(rand()%(int)(20-10+1));
    healthleo-=enemyattackleo;
    QString text2 = QString("You got hit twice.\nNow your health is %1").arg(healthleo);
    attackscreen2->setText(text2);
    attackscreen2->show();
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthleo<=0)
    {
        loseorwin->setText("Because Connor Leonard wanted an easter egg, I thought I'd put in this.\nThis is Leo, the final boss.");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthleo<=0&&healthleo>0)
    {
        this->close();
    }
}

void Leofighter::on_pushButton_4_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackleo=5;
    enemyattackleo=10+(rand()%(int)(20-10+1));
    healthleo-=enemyattackleo;
    if(manaleo>=5)
    {
        enemyhealthleo-=attackleo;
        QString text = QString("The enemies health is now %1").arg(enemyhealthleo);
        attackscreen->setText(text);
        manaleo-=5;
    }
    else
    {
        QString text3 = QString("You didn't have enough mana\nYou didn't attack");
        attackscreen->setText(text3);
    }
    QString text1 = QString("Your health is now %1").arg(healthleo);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthleo<=0)
    {
        loseorwin->setText("Because Connor Leonard wanted an easter egg, I thought I'd put in this.\nThis is Leo, the final boss.");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthleo<=0&&healthleo>0)
    {
        this->close();
    }

}

void Leofighter::on_pushButton_5_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackleo=10;
    enemyattackleo=10+(rand()%(int)(20-10+1));
    healthleo-=enemyattackleo;
    if(manaleo>=10)
    {
        enemyhealthleo-=attackleo;
        QString text = QString("The enemies health is now %1").arg(enemyhealthleo);
        attackscreen->setText(text);
        manaleo-=10;
    }
    else
    {
        QString text3 = QString("You didn't have enough mana\nYou didn't attack");
        attackscreen->setText(text3);
    }
    QString text1 = QString("Your health is now %1").arg(healthleo);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthleo<=0)
    {
        loseorwin->setText("Because Connor Leonard wanted an easter egg, I thought I'd put in this.\nThis is Leo, the final boss.");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthleo<=0&&healthleo>0)
    {
        this->close();
    }
}

void Leofighter::on_pushButton_6_released()
{
    QMessageBox *attackscreen=new QMessageBox;
    QMessageBox *attack1=new QMessageBox;
    QMessageBox *loseorwin=new QMessageBox;
    srand((unsigned)time(0));
    attackleo=15;
    enemyattackleo=10+(rand()%(int)(20-10+1));
    healthleo-=enemyattackleo;
    if(manaleo>=20)
    {
        enemyhealthleo-=attackleo;
        QString text = QString("The enemies health is now %1").arg(enemyhealthleo);
        attackscreen->setText(text);
        manaleo-=20;
    }
    else
    {
        QString text3 = QString("You didn't have enough mana\nYou didn't attack");
        attackscreen->setText(text3);
    }
    QString text1 = QString("Your health is now %1").arg(healthleo);
    attackscreen->show();
    attack1->setText(text1);
    attack1->show();
    if(healthleo<=0)
    {
        loseorwin->setText("Because Connor Leonard wanted an easter egg, I thought I'd put in this.\nThis is Leo, the final boss.");
        loseorwin->show();
        this->close();
    }
    if(enemyhealthleo<=0&&healthleo>0)
    {
        this->close();
    }
}
