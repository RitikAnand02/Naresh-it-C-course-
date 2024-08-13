#include <stdio.h>
int a = 10, b = 20, c = 30;
int main()
{
    printf("a=%d\t", a);
    {
        int a = 1, b = 2, c = 3;
        printf("sum=%d\t", a + b + c);
    }
    printf("sum=%d\t", a + b + c);
}
