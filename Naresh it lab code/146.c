/*Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.



Test Data :

Input the number of terms : 5

Expected Output :

1 + 11 + 111 + 1111 + 11111

The Sum is : 12345*/
#include <stdio.h>
int main()
{
    int n, i, s = 0, sum = 0;
    printf("Enter the no:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = (s * 10) + 1;
        printf("%d+", s);
        sum = sum + s;
    }
    printf("\b=%d", sum);
}