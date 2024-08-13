/*
    A

    B A

    C B A

    D C B A

    E D C B A
*/

#include <stdio.h>
int main()
{
    char n;
    printf("Enter rows ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = i; j >= 1; j--)
        {
            printf("%3c", 64 + j);
        }
        printf("\n");
    }
}