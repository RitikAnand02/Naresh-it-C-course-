/*Write a C program to add all the digits present in a given number until it became a single digit. Develop it by using while loop.

[if the number is 5678, sum of digit =5+6+7+8=26 , again sum of digit of the sum : 2+6=8]



Input as : 5678



Ouput as : 8*/

#include <stdio.h>
int main()
{
    long int n, s = 0;
    printf("Enter the no ");
    scanf("%ld", &n);
    while (n > 9 || n < -9)
    {
        for (s = 0; n != 0; n = n / 10)
        {
            s = s + n % 10;
        }
        n = s;
    }
    printf("genric root=%ld", n);
}

