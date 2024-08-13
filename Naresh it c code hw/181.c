// print 1^2+2^2+3^2+4^2+5^2=1+4+9+16+25=55... using for loop... without using \b...

#include <stdio.h>
int main()
{
    int n, i, s = 0;
    printf("Enter the no ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s + i * i;
        if (i == 5)
            printf("%d%c=%d", i, 253, s);
        else
            printf("%d%c+", i, 253);
    }
}