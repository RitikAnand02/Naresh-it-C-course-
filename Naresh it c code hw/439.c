// function returing adress [Pointer]....

#include <stdio.h>
int max(int a, int b, int c) // fun def
{

    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}
void main()
{
    int a, b, c;
    printf("Enter a , b, c values ");
    scanf("%d %d%d", &a, &b, &c);
    printf("%d is big", max(a, b, c)); // fun calling
}