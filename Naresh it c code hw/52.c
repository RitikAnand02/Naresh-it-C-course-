#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a value:");
    scanf("%d", &a);
    fflush(stdin);
    printf("Enter b value:");
    scanf("%d", &b);
    printf("a=%d b=%d", a, b);
}