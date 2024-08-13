// finding 1..n , palidrome no and count.. using nested for loop()...

#include <stdio.h>
int main()
{
    int n, i, j, rev, c = 0;
    printf("Enter n value ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (rev = 0, j = i; j != 0; j /= 10)
        {
            rev = rev * 10 + (j % 10);
        }
        if (i == rev)
        {
            printf("%4d", i, c++);
        }
    }
    printf("\n%d palidromes", c);
}