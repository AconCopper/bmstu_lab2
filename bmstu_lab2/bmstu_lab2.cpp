#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    double i = 50;
    double res = 0;
    do {
        res = sqrt(res + i--);
    } while (i != 0);
    std::cout << res;
}
