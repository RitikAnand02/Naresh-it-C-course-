/*Write a C program that takes a number as input from the user and determines whether it is a spy number of not, DEVELOP this by using while loop.

A Spy number is a number where the sum of its digits is equal to its product of its digits.



For Example :

1124 is a spy number , because the sum of its digits is 1+1+2+4 = 8 and product of its digits is equal to 1*1*2*4 = 8..*/

#include <stdio.h>
int main()
{
    int n, s = 0, m = 1, r;
    printf("Enter a no ");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        s = s + r;
        m = m * r;
        n = n / 10;
    }
    if (s == m)
    {
        printf("spy no");
    }
    else
    {
        printf("not a spy no");
    }
}