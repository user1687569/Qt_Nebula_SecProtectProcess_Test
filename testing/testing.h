#ifndef TESTING_H
#define TESTING_H
#include "testing_concurrent.h"
#include "testing_sanitizer.h"

class testing
{
public:
    testing();
    ~testing();

    void testingConcurrent();
    void testingSanitizer();
};

#endif // TESTING_H
