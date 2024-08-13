/*Write a C program to print square pattern program 



1 0 1 0 1

1 0 1 0 1

1 0 1 0 1

1 0 1 0 1

1 0 1 0 1
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter rows ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if(j%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
}