#include "YuanShen_TrackFish.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    YuanShen_TrackFish w;
    w.show();
    return a.exec();
}
