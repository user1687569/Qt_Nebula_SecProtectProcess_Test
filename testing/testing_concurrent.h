#ifndef TESTING_CONCURRENT_H
#define TESTING_CONCURRENT_H

//#if ( QT_VERSION >= QT_VERSION_CHECK(5, 0, 0) )
#include <QtConcurrent>
//#endif

class testing_concurrent
{
public:
    testing_concurrent();
    ~testing_concurrent();

    void testingOne();
    void testingTwo();
};

#endif // TESTING_CONCURRENT_H
