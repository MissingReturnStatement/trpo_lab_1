#include "mainwindow.h"

#include <QApplication>

#include "win.h"
int main(int argc, char *argv[])
{
    QApplication appl(argc, argv);
    Win window;
    window.show();
    return appl.exec();
}
