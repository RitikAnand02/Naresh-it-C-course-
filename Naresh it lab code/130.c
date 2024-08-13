/*Write a C program that asks the user to input an integer and count the digts and print the count of the digits.



Input as : 

Enter a number : 546



Output as :

Count of the digits is : 3*/

#include <stdio.h>
int main()
{
    int c = 0;
    long int n;
    printf("Enter the value ");
    scanf("%ld", &n);
    while (n != 0)
    {
        c++;
        n = n / 10;
    }
    printf("no of digits=%d", c);
}