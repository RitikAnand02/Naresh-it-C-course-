// find power value..

#include <stdio.h>
#include <math.h>
int main()
{
    int b = 2, p = 5;
    printf("%d ^ %d = %f\n", b, p, pow(b, p));
    printf("%d ^ %d = %.0f\n", b, p, pow(b,p));
    printf("%d ^ %d = %d\n", b, p, (int)pow(b, p));
}