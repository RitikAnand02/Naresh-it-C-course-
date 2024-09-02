// function returing adress [Pointer]....

#include <stdio.h>
char *max(int *a, int *b) // fun def
{

    return *a > *b ? "a is big" : *b > *a ? "b is big"
                                          : "Both are equal";
}
void main()
{
    int a, b;
    char *p;
    printf("Enter a , b values ");
    scanf("%d %d", &a, &b);
    p = max(&a, &b);// fun calling
    printf(p);
}