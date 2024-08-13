// finding no of digits using while ...

#include <stdio.h>
int main()
{
    int c = 0;
    long int n;
    printf("Enter the value ");
    scanf("%ld", &n);
    while (n != 0)
    {
        c++;
        n = n / 10;
    }
    printf("no of digits=%d", c);
}