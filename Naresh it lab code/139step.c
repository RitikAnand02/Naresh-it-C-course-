/*Write a C program to find the given number is a step number or not.

If the adjacent digit difference is 1 then it is a step number.



Example as: 1234



o/p : It is a step number.



Test cases you have to check:

1234, 4321, 5432, 3210,10 are step numbers.

1001,12234 are not step numbers.*/

#include <stdio.h>
int main()
{
    long n;
    int r1, r2;
    printf("Enter the no ");
    scanf("%ld", &n);
    while (n != 0)
    {
        r1 = n % 10;
        n = n / 10;
        r2 = n % 10;
        n = n / 10;
        if (r1 - r2 == 1 || r2 - r1 == 1)
        {
            r1 = r2;
        }
        else
        {
            printf("not a step no");
            return 0;
        }
    }
    printf("step no");
}