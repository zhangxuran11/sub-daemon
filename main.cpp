#include <QCoreApplication>
#include "mytask.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyTask task;
    return a.exec();
}

