/*

Write a program in C for subtraction of two Matrices.

 Test Data :

 Input the size of the square matrix (less than 5): 2

 Input elements in the first matrix :

element - [0],[0] : 5

element - [0],[1] : 6

element - [1],[0] : 7

element - [1],[1] : 8


Input elements in the second matrix :

 element - [0],[0] : 1

element - [0],[1] : 2

element - [1],[0] : 3

element - [1],[1] : 4


Expected Output :

The First matrix is :

5 6

7 8

The Second matrix is :

1 2

3 4

The Subtraction of two matrix is :

4 4

4 4
*/

#include <stdio.h>
void main()
{
    int a[10][10], b[10][10], sub[10][10], nr, nc, r, c;
    printf("Enter no of rows and columns ");
    scanf("%d %d", &nr, &nc);

    if (nr == nc)

    {
        printf("Enter %d integers\n", nr * nc);
        printf("Enter 1 array elements ");
        for (r = 0; r < nr; r++)
        {
            for (c = 0; c < nc; c++)
            {
                scanf("%d", &a[r][c]);
            }
        }

        printf("Enter 2 array elements ");
        for (r = 0; r < nr; r++)
            for (c = 0; c < nc; c++)
            {
                scanf("%d", &b[r][c]);
            }
        printf("elements of 1st array\n");
        for (r = 0; r < nr; r++)
        {
            for (c = 0; c < nc; c++)
            {

                printf("%d ", a[r][c]);
            }
            printf("\n");
        }
        printf("elements of 2nd array\n");
        for (r = 0; r < nr; r++)
        {
            for (c = 0; c < nc; c++)
            {

                printf("%d ", b[r][c]);
            }
            printf("\n");
        }
        printf("Subtraction of matrix\n");
        for (r = 0; r < nr; r++)
        {
            for (c = 0; c < nc; c++)
            {
                sub[r][c] = a[r][c] - b[r][c];
                printf("%d ", sub[r][c]);
            }
            printf("\n");
        }
    }
    else
        printf("Rows and columns should be same");
}