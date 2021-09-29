#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double i = 1;
    double res = NULL;
    do {
        res = sqrt(i++) + res;
    } while (i != 51);
    std::cout << res;
}
