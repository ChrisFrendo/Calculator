//
// Created by Chris Frendo, Manwel Bugeja and Domenico Agius on 10/12/2018.
//

#include <stdio.h>
#include "calc_library.h"

float add(float a, float b)
{
    float ans = a + b;

    return ans;
}

void addTest(float a, float b, float expected)
{
    float ans = add(a, b);

    printf("%f + %f = %f\n", a, b, ans);
    if(ans == expected)
    {
        puts("Test success!");
    }
    else
    {
        puts("ERROR: Test Failure!");
    }
}

float divide(float a, float b)
{
    float ans = a / b;

    return ans;
}

void divTest(float a, float b, float expected)
{
    float ans = divide(a, b);

    printf("%f / %f = %f\n", a, b, ans);
    if(ans == expected)
    {
        puts("Test success!");
    }
    else
    {
        puts("ERROR: Test Failure!");
    }
}

float subtract(float a, float b)
{
    float ans = a - b;

    return ans;
}

float multiply(float a, float b)
{
    float ans = a * b;

    return ans;
}



