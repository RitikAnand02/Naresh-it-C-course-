// find sqrt of given number using scanf()...

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf(" enter n value:");
    scanf("%d", &n);
    printf("%d sqrt is %f\n", n, sqrt(n));
    printf("%d sqrt is %.2f\n", n, sqrt(n));
    printf("%d sqrt is %d\n", n, (int)sqrt(n));
}