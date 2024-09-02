// Passing two – dimensional array to function. 

#include <stdio.h>
#include <conio.h>
void show(int (*a)[3]) // or a[2][3] or a[][3]
{
    a[0][0] = 10;
    a[1][2] = 60;
}
void main()
{
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    printf("Before : a[0][0]=%d, a[1][2]=%d\n", a[0][0], a[1][2]);
    show(a); /* fun calling */
    printf("After : a[0][0]=%d, a[1][2]=%d", a[0][0], a[1][2]);
    getch();
}