// Validation Check For Triangle
// Program to take a value from the user as input all sides of a triangle and check whether the triangle is valid or not. Using if-else.

#include <stdio.h>
int main()
{
    int s1, s2, s3;
    scanf("%d%d%d", &s1, &s2, &s3);
    if (s1 + s2 > s3 && s2 + s3 > s1 && s1 + s3 > s2)
    {
        printf("triangle");
    }
    else
    {
        printf("not triangle");
    }
}