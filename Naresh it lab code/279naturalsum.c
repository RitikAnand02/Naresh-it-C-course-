/*
Natural Number
Write a program in C to add n natural numbers using a function.
*/

#include <stdio.h>
int sum(int);
int i = 1, s = 0;
int main()
{
    int n;
   printf("Enter a no ");
    scanf("%d", &n);
    sum(n);
    printf("The sum of %d Natural numbers is %d",n, s);
    return 0;
}
int sum(int n)
{
    if (i <= n)
    {
        s += i;
        i++;
        sum(n);
    }
}