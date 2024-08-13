#include <stdio.h>
int main()
{
    int a = 2147483649;
    printf("a= %d\n", a);
    a = 32770;
    printf("a=%d\n", a);
    a = -32770;
    printf("a=%d\n", a);
    a = 65540;
    printf("a=%d", a);
}