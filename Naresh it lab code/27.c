/* write a c program to calculate the sum of middle two number of a given 4 digit numbers.
i/p:3456
o/p:9 */

#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter the no:");
    scanf("%d", &n);
    sum = (n / 10) % 10 + (n / 100) % 10;
    printf("sum:%d", sum);
}