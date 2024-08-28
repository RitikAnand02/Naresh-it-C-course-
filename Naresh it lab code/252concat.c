/*
Concat two String
Write a C program to combine two string in a single String.
*/

#include <stdio.h>
int main()
{
    char s1[100], s2[100], s3[100];
    int i, j;
    printf("Enter first string ");
    gets(s1);
    printf("Enter second string ");
    gets(s2);
    for (i = 0; s1[i] != '\0'; i++)
        s3[i] = s1[i];
    for (j = 0; s2[j] != '\0'; i++, j++)
        s3[i] = s2[j];
    s3[i] = '\0';
    printf("string is %s", s3);
    return 0;
}