#include "tetris.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tetris w;
    w.show();
    return a.exec();
}
