/*
 A A A A A A A A A A A A A A A A A A A A
 a a a a a a a a a a a a a a a a a a a a
 B B B B B B B B B B B B B B B B B B B B
 b b b b b b b b b b b b b b b b b b b b
 C C C C C C C C C C C C C C C C C C C C
 c c c c c c c c c c c c c c c c c c c c
 D D D D D D D D D D D D D D D D D D D D
 d d d d d d d d d d d d d d d d d d d d
 E E E E E E E E E E E E E E E E E E E E
 e e e e e e e e e e e e e e e e e e e e
*/

#include <stdio.h>
int main()
{
    int nr, nc, r, c;
    char l = 'a', u = 'A';
    printf("Enter no row and columns ");
    scanf("%d%d", &nr, &nc);
    for (r = 1; r <= nr; r++)
    {
        for (c = 1; c <= nc; c++)
        {
            if (r % 2 == 0)
            {
                printf("%2c", l);
            }
            else
            {
                printf("%2c", u);
            }
        }
        printf("\n");
        if (r % 2 == 0)
        {
            l++;
        }
        else
        {
            u++;
        }
    }
}