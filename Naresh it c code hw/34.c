#include <stdio.h>
int main()
{
    unsigned int a =32768 ;
    printf("a= %u\n", a);
    a = 32770;
    printf("a=%u\n", a);
    a = -4;
    printf("a=%u\n", a);
    a = 65540;
    printf("a=%u", a);
}