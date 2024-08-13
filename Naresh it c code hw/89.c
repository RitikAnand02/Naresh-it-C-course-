// find even or odd without using == sign...

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no:");
    scanf("%d", &n);
    if (n % 2)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
}