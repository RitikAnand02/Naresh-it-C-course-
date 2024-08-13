#include <stdio.h>
int main()
{
    int i = 0;
    while (i++);
    {
        printf("%d\t", i);
    }
    printf("%d", ++i);
    return 0;
}