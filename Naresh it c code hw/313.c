// Decimal to binary conversion...

#include <stdio.h>
int main()
{
    int a[16] = {0}, i, n;
    printf("Enter the no ");
    scanf("%d", &n);
    for (i = 0; n != 0; i++, n = n / 2)
    {
        a[i] = n % 2;
    }
    printf("Binary code ");
    for (i = 15; i >= 0; i--)
        printf("%2d", a[i]);
    return 0;
}