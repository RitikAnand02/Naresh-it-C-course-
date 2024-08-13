/*Type Of Triangle
Write a C Program to check whether the triangle is an equilateral, isosceles or scalene triangle. Using the if-else statement.
*/

#include <stdio.h>
int main()
{
    int s1, s2, s3;
    scanf("%d%d%d", &s1, &s2, &s3);
    if (s1 == s2 && s1 == s3 || s2 == s3 && s2 == s1 || s3 == s1 && s3 == s2)
    {
        printf("equilateral triangle");
    }
    else if (s1==s2||s2==s3||s1==s3)
    {
        printf("isoceleus triangle");
    }
    else 
    {
        printf("scalene triangle");
    }
}