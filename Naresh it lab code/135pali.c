/*Write a C program to check if a given number is a palindrome. A palindrome is a number that remains the same when its digits are reversed. For example, 121, 454 and 767 are palindromic numbers. The program should prompt the user to enter a positive integer and determine whether it is a palindrome or not.



Input as:

Enter a number : 121 



Output as:

121 is a Palindrome number.*/

#include <stdio.h>
int main()
{
    long m, n, rev = 0;
    int r;
    printf("Enter the no ");
    scanf("%ld", &n);
    m = n;
    while (n)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (m == rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not");
    }
}