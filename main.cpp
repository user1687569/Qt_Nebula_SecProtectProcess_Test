#include <QCoreApplication>
#include "testing/testing.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    printf("Nebula SecProtectProcess Testing...\n");
    printf("Again...\n");

    testing *oneTesting = new testing();
    oneTesting->testingConcurrent();

    return a.exec();
}
