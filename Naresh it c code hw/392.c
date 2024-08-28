// Finding pointer size...

#include <stdio.h>
int main()
{
    int *a;
    float *b;
    char *c;
    printf("%d, %d, %d", sizeof(a), sizeof(b), sizeof(c));
    return 0;
}