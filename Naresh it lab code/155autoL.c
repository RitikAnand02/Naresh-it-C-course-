/*Automorphic number
Write a program to check given number is Automorphic number or not.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, sq, temp, count = 0, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    sq = num * num;

    temp = num;
    while (temp > 0)
    {
        count++;
        temp /= 10;
    }

    temp = num;
    for (int i = 0; i < count; i++)
    {
        if (temp % 10 != sq % 10)
        {
            flag = 0;
            break;
        }
        temp /= 10;
        sq /= 10;
    }

    if (flag)
        printf("%d is an Automorphic number.\n", num);
    else
        printf("%d is not an Automorphic number.\n", num);

    return 0;
}
