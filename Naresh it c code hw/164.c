// finding postion of the digits using do while
#include <stdio.h>
int main()
{
    long m, n;
    int c = 0, d, f = 0;
    printf("Enter a no ");
    scanf("%ld", &n);
    m = n;
    printf("Enter the digit to search ");
    scanf("%d", &d);
    do
    {
        c++;
        m = m / 10;
    } while (m != 0);
    do
    {
        if (n % 10 == d)
            printf("%d in %d postion\n", d, c, f = 1);
        c--;
        n = n / 10;
    } while (n != 0);
    if (f == 0)
        printf("%d not found", d);
}