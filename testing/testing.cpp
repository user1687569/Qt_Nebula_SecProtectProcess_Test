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
    oneConcurrent->testingTwo();
}

void testing::testingSanitizer()
{
    testing_sanitizer *oneSanitizer = new testing_sanitizer();
//    oneSanitizer->testingOne();
//    oneSanitizer->testingTwo();
//    oneSanitizer->testingThree();
    printf("res = %d\n", oneSanitizer->testingFour());
}
