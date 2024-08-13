/*
 A A A A A A A A A A
 b b b b b b b b b b
 C C C C C C C C C C
 d d d d d d d d d d
 E E E E E E E E E E
 f f f f f f f f f f
 G G G G G G G G G G
 h h h h h h h h h h
 I I I I I I I I I I
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
            if (r % 2 == 0)
            {
                printf("%2c", 96 + r);
            }
            else
            {
                printf("%2c", 64 + r);
            }
        }
        printf("\n");
    }
}