// Write a program in C to find the prime Numbers Between the given range 100 to 999

#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter your two no ");
    scanf("%d%d", &n, &m);
    for (int i = n; i <= m; i++)
    {
        int c = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                c++;
                break;
            }
        }
        if (c == 0)
        {
            printf("%5d", i);
        }
    }
}