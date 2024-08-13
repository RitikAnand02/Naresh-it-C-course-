// find max in 3 numbers...

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a,b,c values:");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && a == c)
    {
        printf("All are equals");
    }
    else if (a > b && a > c)
    {
        printf("a is big");
    }
    else if (a == b && a > c)
    {
        printf("a & b is big");
    }
    else if (a == c && a > b)
    {
        printf("a & c is big");
    }
    else if (b == c && b > a)
    {
        printf("b & c is big");
    }
    else if (b > c)
    {
        printf("b is big");
    }
    else
    {
        printf("c is big");
    }
}