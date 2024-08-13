// printing 1...n numbers using while loop...

#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter n value ");
    scanf("%d", &n);
    while (i <= n)
        printf("%4d", i++);
}