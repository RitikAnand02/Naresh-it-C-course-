// finding no of even/odd/zero digits in given no ... using do while..

#include <stdio.h>
int main()
{
    long n;
    int r, e, o, z;
    printf("Enter the no ");
    scanf("%ld", &n);
    e = o = z = 0;
    do
    {
        r = n % 10;
        if (r == 0)
            z++;
        if (r % 2 == 0)
            e++;
        else
            o++;
        n = n / 10;
    } while (n != 0);
    printf("%d even, %d odd, %d zero", e, o, z);
}
