#include <stdio.h>
int main()
{
    float a[] = {13.24, 1.5, 1.5, 5.4, 3.5};
    float j;
    j = 2.0;
    a = a + j;
    printf("%f", a[j]);
    return 0;
}