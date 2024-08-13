// finding prime / composite no using for loop m-3..

#include <stdio.h>
int main()
{
    long n, i, p = 1;
    printf("Enter the no ");
    scanf("%ld", &n);
    if (n == 1)
    {
        printf("Not a prime/composite no");
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                p = 0;
                break;
            }
        }
        printf(p ? "prime no" : "composite no");
    }
}