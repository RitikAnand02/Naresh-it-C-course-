// finding armstrong no using do while only 3 no ...

#include <stdio.h>
int main()
{
    long n, m, s = 0, n1;
    printf("Enter the no ");
    scanf("%ld", &n);
    n1 = n;
    do
    {
        m = n % 10;
        s = s + m * m * m;
        n = n / 10;
    } while (n > 0);
    if (s == n1)
        printf("Armstrong");
    else
        printf("not");
}