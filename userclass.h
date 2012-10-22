#ifndef USERCLASS_H
#define USERCLASS_H

#include <QWidget>

namespace Ui {
class userclass;
}

class userclass : public QWidget
{
    Q_OBJECT

public:
    explicit userclass(QWidget *parent = 0);
    ~userclass();
    
private slots:
    void on_Fighter_clicked();

    void on_Mage_clicked();

    void on_Knight_clicked();

private:
    Ui::userclass *ui;
};

#endif // USERCLASS_H
