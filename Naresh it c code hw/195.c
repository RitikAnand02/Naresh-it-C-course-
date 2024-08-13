// printing 1...n prime no and count... using nested for loop()...

#include <stdio.h>
int main()
{
    int n, i, j, rev, c, cnt = 0;
    printf("Enter n value ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        for (c = 0, j = 1; j <= i; j++)
        {
            if (i % j == 0)
                c++;
        }
        if (c == 2)
        {
            printf("%4d", i, cnt++);
        }
    }
    printf("\n%d primes", cnt);
}