// Finding a variable value and address using pointer...

#include <stdio.h>
int main()
{
    int a = 100, *p;
    p = &a;
    printf("a value %d\n", a);
    printf("a addr %u\n", &a);
    printf("p value %d\n", p);
    printf("a value through p %d\n", *p);
    *p = 200;
    printf("a=%d, *p=%d\n", a, *p);
    a = 300;
    printf("a=%d, *p=%d\n", a, *p);

    return 0;
}