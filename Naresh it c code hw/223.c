/*
ZZZZZ
   Z 
  Z  
 Z   
ZZZZZ
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
            if (r == 1 || r == n || r + c - 1 == n)
            {
                printf("Z");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}