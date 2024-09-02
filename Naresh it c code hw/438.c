// function returing adress [Pointer]....

#include <stdio.h>
int *max(int *a, int *b) // fun def
{

    return *a > *b ? a : b;
}
void main()
{
    int a, b, *p;
    printf("Enter a , b values ");
    scanf("%d %d", &a, &b);
    p = max(&a, &b);         // fun calling
    printf("%d is big", *p); // fun calling
}