/*Write a C program to display the sum of n terms of even natural numbers.



Test Data :

Input number of terms : 5

Expected Output :

The even numbers are :2 4 6 8 10

The Sum of even Natural Number upto 5 terms : 30*/

#include <stdio.h>
int main()
{
    int n, i, s = 0;
    printf("Enter the no:");
    scanf("%d", &n);
    for (i = 1; i <= n * 2; i++)
    {
        if (i % 2 == 0)
        {
            s = s + i;
            printf("even no are=%d\n", i);
            i++;
        }
    }
    printf("sum of even natural no=%d", s);
}