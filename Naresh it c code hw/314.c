// Decimal to Octal conversion...

#include <stdio.h>
int main()
{
    int a[16] = {0}, i, n;
    printf("Enter the no ");
    scanf("%d", &n);
    for (i = 0; n != 0; i++, n = n / 8)
    {
        a[i] = n % 8;
    }
    printf("Octal code ");
    for (i = 15; i >= 0; i--)
        printf("%2d", a[i]);
    return 0;
}