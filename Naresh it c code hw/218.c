/*
6
54
321
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter rows ");
    scanf("%d", &n);
    int num = n*(n-1)/2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", num--);
        }
        printf("\n");
    }
}