/*
    *     
   ***    
  *****   
 *******  
********* 
using \b
*/

#include <stdio.h>
int main()
{
    int n, r, c,s;

    printf("Enter rows ");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (s = 1; s <= n - r; s++)
        {
            printf(" ");
        }
        for (c = 1; c <= r; c++)
        {
            printf("**");
        }
        printf("\b \n");
    }
}