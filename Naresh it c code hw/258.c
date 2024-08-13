#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0, j = 10; i <= 2, j <= 13; i++, j++)
    {
        printf("%d\t%d\n", i, j);
    }

    return 0;
}