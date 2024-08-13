// find the area and circumference  pf the circle..

#include <stdio.h>
#define pi 3.14
int main()
{
    float r = 10.5, area, cf;
    area = pi * r * r;
    cf = 2 * pi * r;
    printf("Area=%.2f Circumference=%.2f", area, cf);
}