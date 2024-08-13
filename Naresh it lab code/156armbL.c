// Write a C program to find all Armstrong numbers between 100 to 999.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, result;

    printf("Armstrong numbers between 100 and 999 are:\n");

    for (num = 100; num <= 999; num++)
    {
        originalNum = num;
        result = 0;

        for (; originalNum != 0; originalNum /= 10)
        {
            remainder = originalNum % 10;
            result += pow(remainder, 3);
        }

        if (result == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
