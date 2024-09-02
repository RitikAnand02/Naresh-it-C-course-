// Passing array to the function..

#include <stdio.h>
#include <conio.h>
void show(int a[3]) // or a[ ] or *a
{
    a[0] = 100;
    a[1] = 200;
    a[2] = 300;
}
void main()
{
    int a[3] = {10, 20, 30};
    printf("Before array elements %d %d %d\n", a[0], a[1], a[2]);
    show(a); // or show(&a);
    printf("After array elements %d %d %d", a[0], a[1], a[2]);
    getch();
}