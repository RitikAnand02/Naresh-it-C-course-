/*
sum of the numbers
Write a C program to find out the sum of the numbers which is present in a given string.
*/

#include <stdio.h>
int main()
{
    char s[100];
    int i, sum;
    printf("Enter a string ");
    scanf("%s", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            sum += s[i] - '0';
    }
    printf("sum=%d", sum);
    return 0;
}