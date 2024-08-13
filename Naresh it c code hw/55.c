// celsius to farhenheit

#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter celsius:");
    scanf("%f", &c);
    f = c * 1.8 + 32;
    printf("%.1f%c celsius is %.1f%c fahrenheit", c, 248, f, 248);
}