// function returing adress [Pointer]....

#include <stdio.h>
int max(int a, int b) // fun def
{

    return a > b ? a : b;
}
void main()
{
    int a, b;
    printf("Enter a , b values ");
    scanf("%d %d", &a, &b);
    printf("%d is big", max(a, b)); // fun calling
}