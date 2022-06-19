#include <stdlib.h>
#include "testing_sanitizer.h"

testing_sanitizer::testing_sanitizer()
{

}

testing_sanitizer::~testing_sanitizer()
{

}

/*
 * (heap) use after free
 */
int testing_sanitizer::testingOne()
{
    int *array = new int[100];
    delete []array;
    return array[1];
}

/*
 * heap-buffer-overflow
 */
int testing_sanitizer::testingTwo()
{
    int *array = new int[100];
    int res = array[100];
    delete [] array;
    return res;
}

/*
 * stack-buffer-overflow
 */
int testing_sanitizer::testingThree()
{
    int array[100];
    return array[100];
}


int testing_sanitizer::testingFour()
{
    int *array = new int[10];
    return 0;
}
