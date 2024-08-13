// finding prime / composite no using for loop m-1..

#include <stdio.h>
int main()
{
    int n, i, c = 0;
    printf("Enter the no ");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("Not a prime/composite no");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
                c++;
        }
        printf(c == 2 ? "prime no" : "composite no");
    }
}