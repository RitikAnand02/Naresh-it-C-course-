/*
Que 2 : Write a C program to find all the Armstrong number in beetween 100 to 10000 by using function.
--------

-> create int main() function.
-> create bool isArmstrong(int n) function
-> create int countDigits(int n) function
-> create int power(int base, int exp) function

Sample input : n1 = 1 and n2 = 10000

Sample output :
Armstrong numbers between 100 and 10000 are:

153

370

371

407

1634

8208

9474
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool armstrong(int n);
int countDigits(int n);

int main()
{
    printf("Armstrong numbers between 100 and 10000 are:\n");
    armstrong(0);
    return 0;
}

bool armstrong(int n)
{
    int n1, rem, result, digits;

    for (n = 100; n <= 10000; n++)
    {
        n1 = n;
        result = 0;
        digits = countDigits(n);

        while (n1 != 0)
        {
            rem = n1 % 10;
            result += pow(rem, digits);
            n1 /= 10;
        }

        if (result == n)
        {
            printf("%d\n", n);
        }
    }
}

int countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
