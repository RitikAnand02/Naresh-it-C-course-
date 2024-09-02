/*
Que 4 : Write a program in C to swap elements using call by reference.
------

-> create int main() function.
-> create void swap(int *a, int *b, int *c) function.
-> in main function read value for a,b,c and call the swap fuction by passing addresses of all three variable.
-> NOTE : print the result before swap and after swap in main funtion only and understand the use/power of pointer.

Sample input : a = 5 , b = 6 , c = 7;

Sample output :

The value before swapping are :
a = 5
b = 6
c = 7

The value after swapping are :
a = 7
b = 5
c = 6
*/

#include <stdio.h>
void swap(int *a, int *b, int *c)

{

    int d = *a;
    *a = *c;
    *c = *b;
    *b = d;
}
void main()
{
    int a = 5, b = 6, c = 7;
    int *x = &a, *y = &b, *z = &c;
    printf("The value before swapping are :\na=%d\nb=%d\nc=%d\n", a, b, c);
    swap(x, y, z);
    printf("The value after swapping are :\na=%d\nb=%d\nc=%d", a, b, c);
}