/*
    5
   45
  345
 2345
12345
*/

#include <stdio.h>
int main()
{
    int n, r, c;

    printf("Enter rows ");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {

        for (c = 1; c <= n; c++)
        {
            if (c <= n - r)
            {
                printf(" ");
            }
            else
            {
                printf("%d", c);
            }
        }
        printf("\n");
    }
}