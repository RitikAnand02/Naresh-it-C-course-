#include <stdio.h>
int main()
{
    int i = 0;
    while (i <= 5)
    {
        printf("%d\t", ++i);
    }
    printf("%d", ++i);
    return 0;
}