// finding 1.. n even , odd sum.. using while..

#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("Enter n value ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    printf("sum of even no=%d\n", sum);
    i = 1, sum = 0;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }
    printf("sum of odd no=%d", sum);
}