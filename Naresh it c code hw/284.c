#include <stdio.h>
 int a[4], i; // gobal variable
int main()
{
   
    printf("Elements are ");
    for (i = 0; i < 4; i++)
        printf("%4d", a[i]);
    return 0;
}