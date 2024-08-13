// find 1...n even , odd numbers sum using while ( )....

#include <stdio.h>
int main()
{
    int n, es = 0, os = 0;
    printf("Enter n value ");
    scanf("%d", &n);
    while (n >= 1)
    {
        if (n % 2 == 0)
            es += n;
        else
            os += n;
        n--;
    }
    printf("Even sum=%d, odd sum=%d", es, os);
}