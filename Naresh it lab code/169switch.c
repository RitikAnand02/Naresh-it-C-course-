/*
1)Write a program in C to display the cube of the number up to an integer.(Switch Case)
Test Data :
Input number of terms : 5
Expected Output :
Number is : 1 and cube of the 1 is :1

Number is : 2 and cube of the 2 is :8

Number is : 3 and cube of the 3 is :27

Number is : 4 and cube of the 4 is :64

Number is : 5 and cube of the 5 is :125
*/

#include <stdio.h>

int main()
{
    int n, i;

    printf("Input number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int cube;

        switch (i)
        {
        case 1:
            cube = 1 * 1 * 1;
            break;
        case 2:
            cube = 2 * 2 * 2;
            break;
        case 3:
            cube = 3 * 3 * 3;
            break;
        case 4:
            cube = 4 * 4 * 4;
            break;
        case 5:
            cube = 5 * 5 * 5;
            break;

        default:
            cube = i * i * i;
            break;
        }

        printf("Number is : %d and cube of the %d is : %d\n", i, i, cube);
    }

    return 0;
}
