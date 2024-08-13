// find even or odd without using % sign...

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no:");
    scanf("%d", &n);
    if (n / 2 * 2 == n)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}