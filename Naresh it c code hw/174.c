// finding step no.. using for loop..

#include <stdio.h>
int main()
{
    long n;
    int r1, r2;
    printf("Enter the no ");
    scanf("%ld", &n);
    for (r1 = n % 10, n = n / 10; n != 0; n = n / 10)
    {
        r2 = n % 10;
        if (r1 - r2 == 1 || r2 - r1 == 1)
        {
            r1 = r2;
        }
        else
        {
            printf("not a step no");
            return 0;
        }
        }
    printf("step no");
}