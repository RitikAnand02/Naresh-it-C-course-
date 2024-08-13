// finding no of digits using do.. while..

#include <stdio.h>
int main()
{
    int c = 0;
    long int n;
    printf("Enter the value ");
    scanf("%ld", &n);
    do
    {
        c++;
        n = n / 10;
    } while (n != 0);
    printf("no of digits=%d", c);
}