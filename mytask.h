#ifndef MYTASK_H
#define MYTASK_H

#include <QObject>
#include"ztpmanager.h"
#include<QTimer>
class MyTask : public QObject
{
    Q_OBJECT
    QTimer timer;
    ZTPManager *ztpm;

    QTimer timerCheckExist;
    ZTPManager *ztpmCarrierHeart;

    int carID;
public:
    explicit MyTask(QObject *parent = 0);

signals:

public slots:
    void OnReadZTP();
    void OnTimeout();
    void OnCheckExist();
    void OnRecvCarrierHeart();
};

#endif // MYTASK_H
