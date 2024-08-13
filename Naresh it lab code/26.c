/* Sum of natural nmber
write a c program to calculate the sum of natural numbers from 1 to a given integer by the user, take the input from the user by sanf().
i/p:enter a positive integer: 10
expected output : the sum of natural numbers 1 to 10 is: 55*/

#include <stdio.h>
int main()
{
    int n, sum;
    printf("enter a positive integer: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("the sum of natural numbers 1 to 10 is: %d", sum);
}