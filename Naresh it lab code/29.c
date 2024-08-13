#include <stdio.h>
int main()
{
    int a = 100;
    int *p;
    p = &a;
    printf("a value =%d\n", a);
    printf("a adress=%u\n", &a);
    printf("p value =%u\n", p);
}