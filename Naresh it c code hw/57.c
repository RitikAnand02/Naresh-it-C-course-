// find simple interest(si) and total...

#include <stdio.h>
int main()
{
    int t;
    float p, r, si, total;
    printf("Enter principal , time , rate:");
    scanf("%f%d%f", &p, &t, &r);
    si = p * r * t / 100;
    total = p + si;
    printf("simple interest=%.2f , total=%.2f", si, total);
}