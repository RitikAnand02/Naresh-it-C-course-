/*
*********
 *******
  *****
   ***
    *
*/

#include <stdio.h>
int main()
{
    int n, r, c, s;

    printf("Enter rows ");
    scanf("%d", &n);
    while(!kbhit())
    for (r = n; r >= 1; r--)
    {
        for (s = 1; s <= n - r; s++)
        {
            printf(" ");
        }
        for (c = 1; c <= 2 * r - 1; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}