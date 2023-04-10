// Àç±Í

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Euclid.h"

int euclid_1(int a, int b)
{
    if (b == 0)
        return a;

    return euclid_1(b, a % b);
}

int euclid_2(int a, int b)
{
    int tem;

    if (a < b)
    {
        tem = a;
        a = b;
        b = tem;
    }

    while (b != 0)
    {
        tem = b;
        b = a % b;
        a = tem;
    }

    return a;
}