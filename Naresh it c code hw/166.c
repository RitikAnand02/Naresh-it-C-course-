// finding postion of the digits using do while m-2...
#include <stdio.h>
int main()
{
    long m, n, rev = 0;
    int c = 1, d, f = 0;
    printf("Enter a no ");
    scanf("%ld", &n);
    m = n;
    while (m)
    {
        rev = rev * 10 + (m % 10);
        m = m / 10;
    }
    printf("Enter the digit to search ");
    scanf("%d", &d);

    do
    {
        if (rev % 10 == d)
            printf("%d in %d position\n", d, c, f = 1);
        c++;
        rev = rev / 10;
    } while (rev != 0);
    if (f == 0)
        printf("%d not found", d);
}