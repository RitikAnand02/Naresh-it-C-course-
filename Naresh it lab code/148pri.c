/*Write a C program to check the given number is a prime number or not.



Input as :

Enter a number : 13

Expected Output :

13 is a Prime Number.
*/

#include <stdio.h>
int main()
{
    int n, i, f;
    printf("Enter your no ");
    scanf("%d", &n);
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            f = 0;
            break;
        }
    }
    printf(f ? "prime no" : "not a prime no");
}