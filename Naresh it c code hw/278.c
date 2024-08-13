// direct initialization of array element...

#include <stdio.h>
int main()
{
    int a[] = {9, 3, 1, 8}, i;
    printf("Elements are ");
    for (i = 0; i < 4; i++)
        printf("%4d", a[i]);
    return 0;
}