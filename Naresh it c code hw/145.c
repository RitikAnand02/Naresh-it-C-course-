// printing odd numbers using while loop...

#include <stdio.h>
int main()
{
    int n, i = -1;
    printf("Enter n value ");
    scanf("%d", &n);
    while (i < n - 1)
    {

        printf("%4d", i = i + 2);
    }
}