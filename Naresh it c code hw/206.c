/*
 a a a a a a a a a a
 b b b b b b b b b b
 c c c c c c c c c c
 d d d d d d d d d d
 e e e e e e e e e e
 f f f f f f f f f f
 g g g g g g g g g g
 h h h h h h h h h h
 i i i i i i i i i i
 j j j j j j j j j j
*/

#include <stdio.h>
int main()
{
    int nr, nc, r, c;
    printf("Enter no row and columns ");
    scanf("%d%d", &nr, &nc);
    for (r = 1; r <= nr; r++)
    {
        for (c = 1; c <= nc; c++)
        {
            printf("%2c", 96 + r);
        }
        printf("\n");
    }
}