#include <QtGui/QApplication>
#include <QtGui/QPushButton>
#include <QtGui/QMessageBox>
#include <QWidget>
#include "mainscreen.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainScreen w;
    w.show();
    return a.exec();
}
