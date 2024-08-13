// finding power  sum using while ...

#include <stdio.h>
int main()
{
    int b, p;
    long int pwr = 1, s = 0;
    printf("Enter base , power values ");
    scanf("%d%d", &b, &p);
    while (p >= 1)
    {
        pwr = pwr * b;
        s = s + pwr;
        p--;
    }
    printf("powers sum=%ld", s);
}