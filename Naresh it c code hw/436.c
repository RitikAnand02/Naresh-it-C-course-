// Passing two – dimensional array to function.

#include <stdio.h>
#include <conio.h>
void show(int (*a)[3]) /* or a[2][3] or a[][3]*/
{
    int r, c;
    printf("Elements are\n");
    for (r = 0; r < 2; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%4d", *(*(a + r) + c)); /*or a[r][c]*/
        }
        printf("\n");
    }
}
void main()
{
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    show(a); /* fun calling */
    getch();
}