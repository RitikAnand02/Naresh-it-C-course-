// find max between two number...

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a,b values:");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("a is big");
    }
    else if (b > a)
    {
        printf("b is big");
    }
    else
    {
        printf("Both are equal");
    }
}