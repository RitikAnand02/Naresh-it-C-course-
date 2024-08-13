// printing even numbers using while loop...

#include <stdio.h>
int main()
{
    int n, i = 2;
    printf("Enter n value ");
    scanf("%d", &n);
    while (i <= n)
    {

        printf("%4d", i);
        i = i + 2;
    }
}