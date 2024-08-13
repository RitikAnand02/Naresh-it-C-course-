// finding lcm of given two numbers wihtout using gcd... for loop..

#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Enter a,b values ");
    scanf("%d%d", &a, &b);
    max = a > b ? a : b;
    while (max)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("lcm=%d", max);
            break;
        }
        max++;
    }
}