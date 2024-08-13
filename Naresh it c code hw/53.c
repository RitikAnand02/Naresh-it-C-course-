#include <stdio.h>
int main()
{
    int a;
    char b;
    printf("Enter a value:");
    scanf("%d", &a);
    fflush(stdin);
    printf("Enter b value:");
    scanf("%c", &b);
    printf("a=%d , b=%c", a, b);
}