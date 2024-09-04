/*
square of any number
Write a program in C to find the square of any number using the function.
*/

#include <stdio.h>
#include <conio.h>
int sqr(int *n)
{
    *n = *n * *n;
} /* n deleted after the function execution
   */
int main()
{
    int n;
    printf("Enter n values ");
    scanf("%d",&n);
    sqr(&n); /* fun calling */
    printf("The sqaure of no is: % d",n);

}