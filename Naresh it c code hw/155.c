// finding first and last digit, 2 is first digits...

#include <stdio.h>
int main()
{
    long n;
    int r, s = 0;
    printf("Enter the value ");
    scanf("%ld", &n);
    printf("last digit=%d\n", n % 10);
    while (n > 9 || n < -9)
        n = n / 10;
    printf("first digit=%d", n);
}