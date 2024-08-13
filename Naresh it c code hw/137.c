// printing 1...n numbers in reverse using while loop...

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n value ");
    scanf("%d", &n);
    while (n>=1)
        printf("%4d", n--);
}