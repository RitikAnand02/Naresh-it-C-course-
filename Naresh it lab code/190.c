/*
  1 2 3 4 5

  2 3 4 5 1

  3 4 5 1 2

  4 5 1 2 3

  5 1 2 3 4
*/

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter rows ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int k=i,a=1;
        for (int j = 1; j <= n; j++)
        {
            if(k<=n)
            {
                printf("%2d",k++);
            }
            else 
            printf("%2d",a++);
        }
        printf("\n");
    }
}