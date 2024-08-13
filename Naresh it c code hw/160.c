// 78 56 34 12

#include <stdio.h>
int main()
{
    long n;
    printf("Enter the no ");
    scanf("%ld", &n);
    if (n < 0)
        printf("-", n = -n);
    do
    {
        if (n > 9 && n % 100 < 10)
            printf("0");
        printf("%d  ", n % 100);
        n = n / 100;
    } while (n != 0);
}