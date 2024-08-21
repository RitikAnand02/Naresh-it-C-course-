// finding array address in 2d array...

#include <stdio.h>
int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("a value %u,a[0] stored addr=%u,a[1] stored addr %u", a, a[0], a[1]);
    return 0;
}