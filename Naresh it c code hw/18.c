#include <stdio.h>
int main()
{
    float a = 1.1;
    printf("%d ,%d\n", sizeof(a), sizeof(1.1));
    printf("%d ,%d\n", sizeof(1.1f), sizeof((float)1.1));
    printf("%d ,%d\n", sizeof(1.1l), sizeof(1.1L));
    printf("%d ,%d\n", sizeof((int)1.1), sizeof((unsigned)1.1));
}