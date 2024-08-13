// printing even numbers using while loop...

#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter n value ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 0)
            printf("%4d", i);
    }
}