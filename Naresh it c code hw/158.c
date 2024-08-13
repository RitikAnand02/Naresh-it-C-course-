// finding reverse no using do while m-2...

#include <stdio.h>
int main()
{
    long n, rev = 0;
    int r;
    printf("Enter the no ");
    scanf("%ld", &n);
    if (n < 0)
        printf("-", n = -n);
    do
    {
        r = n % 10;
        printf("%d", r);
        n = n / 10;
    } while (n);
}