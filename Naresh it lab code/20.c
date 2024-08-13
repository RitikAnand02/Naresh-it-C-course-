
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    scanf("%d", &n);
    printf("Enter no:");
    n % 10 >= 5 && printf("%d", (n / 10) + 1 * 10) || printf("%d", n / 10 * 10);
}