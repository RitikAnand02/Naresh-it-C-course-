#include <stdio.h>
int a = 10, b = 20, c = 30;
int main()
{
    printf("a=%d\t", a);
    {
        a = 30;
        printf("a=%d\t", a);
        a = 50;
    }
    printf("a=%d\t", a);
}
