// 1-2+3-4+5=3... for loop.. without using \b...
#include <stdio.h>
int main()
{
    int n, i, s = 0;
    printf("Enter a no ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d+", i, s = s - i);
        }
        else
        {
            printf("%d-", i, s = s + i);
        }
    }
    if (i % 2 == 0)
    {
        s = s - i;
    }
    else
    {
        s = s + i;
    }

    printf("%d=%d", i, s);
}
