/*
1
23
456
78910
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter rows ");
    scanf("%d", &n);
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", num++);
        }
        printf("\n");
    }
}