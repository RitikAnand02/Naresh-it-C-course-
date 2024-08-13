#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i; printf("i=%d\n", i))
    {
        printf("Enter a no ");
        scanf("%d", &i);
    }

    return 0;
}