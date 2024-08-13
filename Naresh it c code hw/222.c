/*
  $
  *  $
  $  *  $
  *  $  *  $
  $  *  $  *  $
*/

#include <stdio.h>
int main()
{
    int n, r, c;

    printf("Enter rows ");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {

        for (c = 1; c <= r; c++)
        {
            if ((r + c) % 2 == 0)
            {
                printf("%3c", '$');
            }
            else
            {
                printf("%3c", '*');
            }
        }
        printf("\n");
    }
}