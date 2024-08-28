// Pointer to array...

#include <stdio.h>
int main()
{
    int a[3] = {10, 25, 18}, *p, i;
    p=&a[0]; // p=a;
    printf("Elements ");
    for (i = 0; i < 3; i++)
        printf("%4d",  a[i]); // 8 ways - i[a], p[i], i[p], *(p+i), *(a+i), *(i+p), *(i+a)
    return 0;
}