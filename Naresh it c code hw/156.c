// finding max, min digits of given no using do while...

#include <stdio.h>
int main()
{
    long n;
    int r, max = -9, min = 9;
    printf("Enter the no ");
    scanf("%ld", &n);
    do
    {

        r = n % 10;
        if (min > r)
            min = r;
        if (max < r)
            max = r;
        n = n / 10;
    } while (n != 0);
    printf("min=%d, max=%d", min, max);
    return 0;
}