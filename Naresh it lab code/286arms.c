/*
3)Armstrong number
Write a C program to find all the Armstrong number in beetween 100 to 10000 by using 2 different

user defined function and one main function to display all the Armstrong number in the given range.
Sample Input
from:100
upto:1000
Sample Output
Armstrong numbers between 100 and 10000 are:

153

370

371

407

1634

8208

9474
Explanation
Armstrong number Example : 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
*/

#include <stdio.h>
#include <math.h>

void arm(int n);
int countDigits(int n);

int main()
{
    printf("Armstrong numbers between 100 and 10000 are:\n");
    arm(0);
    return 0;
}

void arm(int n)
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
