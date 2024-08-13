// finding power using user defined program while ...

#include <stdio.h>
int main()
{
    int b, p;
    long int pwr = 1;
    printf("Enter base , power values ");
    scanf("%d%d", &b, &p);
    while (p >= 1)
    {
        pwr = pwr * b;
        p--;
    }
    printf("power=%ld", pwr);
}