// finding perfect no using for loop...

#include <stdio.h>
int main()
{
    int n, i, s = 0;
    printf("Enter the no ");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }
    if (n == s)
    {
        printf("perfect no");
    }
    else
    {
        printf("Not a perfect no");
    }
}