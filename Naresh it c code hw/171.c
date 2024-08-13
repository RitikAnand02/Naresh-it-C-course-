// finding prime / composite no using for loop m-2..

#include <stdio.h>
int main()
{
    long  n, i;
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
                printf("composite no");
                return 0;
            }
        }
        printf("prime no");
    }
}