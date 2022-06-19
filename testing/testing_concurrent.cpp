#include <QDebug>
#include <QString>
#include <QThread>
#include "testing_concurrent.h"

testing_concurrent::testing_concurrent()
{

}

testing_concurrent::~testing_concurrent()
{

}

static void func(QString name)
{
    qDebug() << name << " from " << QThread::currentThread();
}

void testing_concurrent::testingOne()
{
    QFuture<void> future1 = QtConcurrent::run(func, QString("Thread 1"));
    QFuture<void> future2 = QtConcurrent::run(func, QString("Thread 2"));

    future1.waitForFinished();
    future2.waitForFinished();
}
