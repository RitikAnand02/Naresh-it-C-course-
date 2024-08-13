#include <stdio.h>
int main()
{
    float r, a, A, B;
    printf("Radius:");
    scanf("%f", &r);
    printf("side of square:");
    scanf("%f", &a);
    A = 3.14 * r * r;
    B = a * a;
    printf("%f\n,%f", A, B);
}