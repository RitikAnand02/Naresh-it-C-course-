// find even or odd without using arithmetic operator...

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no:");
    scanf("%d", &n);
    if ((n & 1) == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}