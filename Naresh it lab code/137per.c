/*Write a C program to check the given number is a perfect number or not?

If a sum of the multiples of the number excluding the given number is same as the original number then we can say that number is a perfect number.

6 multiples are 1,2,3,  6 : sum of multiples = 1+2+3 = 6

6 is a perfect number.*/

#include <stdio.h>
int main()
{
    int num, i = 1, s = 0;
    printf("Enter a number ");
    scanf("%d", &num);
    while (i < num)
    {
        if (num % i == 0)
        {
            s = s + i;
        }
        i++;
    }
    if (s == num)
    {
        printf(" %d perfect no and its sum = %d", num, s);
    }
    else
    {
        printf("Not a perfect number");
    }
}