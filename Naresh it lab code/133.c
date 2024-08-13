/*write a C program to find the factorial of a given number. Take the input from the user.



Input as :

Enter a number : 5



Output as :

Factoria of 5 : 120*/

#include <stdio.h>
int main()
{
    int n;
    long int f = 1;
    printf("Enter n value ");
    scanf("%d", &n);
    while (n > 1)
    {
        f = f * n;
        n--;
    }
    printf("factorial=%ld", f);
}