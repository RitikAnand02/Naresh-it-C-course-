// direct initialization of array element...

#include <stdio.h>
int main()
{
    int a[4], i;
    a[0] = 1;
    printf("Elements are ");
    for (i = 0; i < 4; i++)
        printf("%4d\n", a[i]);
    return 0;
}