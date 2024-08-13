/*Write a C program to add all the natural number from 1 to n. Ask the user to give n value and print the addition value.



Input as :

Enter n value : 10



Output as :

Sum of the natural number from 1 to 10 : 55*/

#include <stdio.h>
int main()
{
    int n, i = 1, s = 0;
    printf("Enter n value ");
    scanf("%d", &n);
    while (i <= n)
    {
        s += i;
        i++;
    }
    printf("sum=%d", s);
}