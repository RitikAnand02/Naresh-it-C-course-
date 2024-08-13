/*4)Find the Area

Write a C program to calculate and print the area of a square and rectangle.

input :-

Side of square is : 5

Length and breadth of rectanngle is : 4 , 5

output:-

Area of square is : 25

Area of rectanngle is : 20*/

#include <stdio.h>
void main()
{
    int s = 5, l = 4, b = 5, A, a;
    A = s * s;
    printf("Area of square:=%d\n", A);
    a = l * b;
    printf("Area of rectangle:=%d", a);
}
