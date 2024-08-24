/*
Write a program in C for a 2D array of size 3x3 and print the matrix. Test Data : Input elements in the matrix :

element - [0],[0] : 1

element - [0],[1] : 2

element - [0],[2] : 3

element - [1],[0] : 4

element - [1],[1] : 5

element - [1],[2] : 6

element - [2],[0] : 7

element - [2],[1] : 8

element - [2],[2] : 9


Expected Output :

The matrix is : 1 2 3 4 5 6 7 8 9
*/

#include <stdio.h>
int main()
{
    int a[10][10], nr, nc, r, c;
    printf("Enter no of rows and columns ");
    scanf("%d%d", &nr, &nc);

    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)
        {
            printf("element - [%d],[%d]", r, c);
            scanf("%d", &a[r][c]);
        }
    }

    printf("Elements\n ");
    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)
        {
            printf("%6d", a[r][c]);
        }
    }
    return 0;
}