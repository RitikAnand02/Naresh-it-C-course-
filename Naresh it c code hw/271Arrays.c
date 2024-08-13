// findin array size...

#include <stdio.h>
int main()
{
    int a[4] = {9, 3, 1, 8};
    printf("No of bytes=%d\n", sizeof(a));
    printf("No of cells=%d\n", sizeof(a) / sizeof(int));
    printf("No of cells=%d\n", sizeof(a) / sizeof(a[0]));

    return 0;
}