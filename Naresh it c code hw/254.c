#include <stdio.h>
int main()
{
    int i = 0;
    while (sizeof("Ritik") - i)
    {
        printf("%d\n", i++);
    }
    printf("%d", i);
    return 0;
}