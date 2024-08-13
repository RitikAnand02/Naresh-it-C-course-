/*Write a C program that calculates the Highest Common Factor (HCF) of two numbers using for loops



input as :

Enter two numbers: 8 12

The HCF of 8 and 12 is 4*/

#include <stdio.h>
int main()
{
    int a, b, i, hcf;
    printf("Enter a,b values ");
    scanf("%d%d", &a, &b);
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("the hcf of %d and %d =%d",a,b, hcf);
}