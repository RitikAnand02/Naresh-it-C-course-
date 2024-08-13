/*Write a C program to check if a given number is a strong number. A strong number is a positive integer in which the sum of the factorial of its digits is equal to the number itself. For example, 145 is a strong number since 1! + 4! + 5! = 145. The program should prompt the user to enter a positive integer and determine whether it is a strong number or not.



Input as:

Enter a number : 145



Output as:

145 is a strong number.*/

#include <stdio.h>
int main()
{
    int n,store_n, f, r, s = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    store_n = n;
    while (n > 0)
    {
        r = n % 10;
        f = 1;
        while (r > 0)
        {
            f = f * r;
            r--;
        }
        s = s + f;
        n = n / 10;
    }
    if (s == store_n)
    {

        printf("strong no");
    }
    else
    {
        printf("not strong no");
    }
}
