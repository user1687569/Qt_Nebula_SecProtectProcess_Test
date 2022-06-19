#include <QDebug>
#include <QString>
#include <QThread>
#include <QByteArray>
#include <QList>
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

void testing_concurrent::testingTwo()
{
    QByteArray byteArray = "Hello,World!Hello,BlockchainLee!Today is a good day!Cheer Up";
    QFuture<QList<QByteArray> > future1 = QtConcurrent::run(byteArray, &QByteArray::split, '!');

    QList<QByteArray> result = future1.result();

    for(int i = 0; i < result.size(); i++)
    {
        qDebug() << result.at(i);
    }
}






