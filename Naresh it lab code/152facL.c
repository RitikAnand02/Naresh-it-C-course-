/*Write a C program that calculates the sum of a factorial series up to a given number of terms.



Enter the number of terms in the factorial series: 5

The sum of the factorial series up to 5 terms is: 153*/

#include <stdio.h>
int main()
{
    int n, f = 1, i, s = 0;
    printf("Enter your no ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f = f * i;
        s = s + f;
    }
    printf("sum of factorial series up to %d terms is %d", n, s);
}