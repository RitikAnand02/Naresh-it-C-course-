// printing n to n primes using nested for loop()...

#include <stdio.h>
int main()
{
    int n, i, j, rev, c, cnt = 0;
    printf("Enter starting and ending values ");
    scanf("%d%d", &i, &n);
    if (i > n)
    {
        int t = i;
        i = n;
        n = t;
    }
    for (; i <= n; i++)
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