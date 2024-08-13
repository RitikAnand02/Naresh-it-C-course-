/*
 A A A A A A A A A A
 B B B B B B B B B B
 C C C C C C C C C C
 D D D D D D D D D D
 E E E E E E E E E E
 F F F F F F F F F F
 G G G G G G G G G G
 H H H H H H H H H H
 I I I I I I I I I I
 J J J J J J J J J J
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
            printf("%2c", 64 + r);
        }
        printf("\n");
    }
}