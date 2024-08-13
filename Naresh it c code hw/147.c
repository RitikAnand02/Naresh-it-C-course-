// find factorail no using while ( )....

#include <stdio.h>
int main()
{
    int n;
    long int f = 1;
    printf("Enter n value ");
    scanf("%d", &n);
    while (n > 1)
    {
        f = f * n;
        n--;
    }
    printf("factorial=%ld", f);
}