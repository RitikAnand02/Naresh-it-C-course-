// finding digits sum using while..

#include <stdio.h>
int main()
{
    int long n;
    int r, s = 0;
    printf("Enter the value ");
    scanf("%ld", &n);
    while (n != 0)
    {
        r = n % 10;
        s = s + r;
        n = n / 10;
    }
    printf("digits sum %d", s);
}