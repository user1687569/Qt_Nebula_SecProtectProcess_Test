#include "testing.h"

testing::testing()
{

}

testing::~testing()
{

}

void testing::testingConcurrent()
{
    testing_concurrent *oneConcurrent = new testing_concurrent();
    oneConcurrent->testingOne();
}
