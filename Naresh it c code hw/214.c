/*
  1  2  2
  0  1  2
  0  0  1 
*/

#include <stdio.h>
int main()
{
    int n, r, c;

    printf("Enter no row ");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {

        for (c = 1; c <= n; c++)
        {
            if (c == r)
            {
                printf("%3d", 1);
            }
            else if (r > c)
            {
                printf("%3d", 0);
            }
            else
            {
                printf("%3d", 2);
            }
        }
        printf("\n");
    }
}