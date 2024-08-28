/*
Given string contains a capital alphabet, small alphabet, special character and digit.
 Write a C program to check the given string contains a capital alphabet, small

*/

/*check alpha,digits,sc,
 */

#include <stdio.h>
int main()
{
    char s1[100], s2[100];
    int i, j, uc = 0, lc = 0, dig = 0, sc = 0;
    printf("enter the string\n");
    scanf("%s", s1);

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            lc++;
        }
        else if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            uc++;
        }
        else if (s1[i] >= '0' && s1[i] <= '9')
        {
            dig++;
        }
        else
            sc++;
    }
    if (lc  && uc  && dig  && sc )
    {
        printf("Our string is matching our cases");
    }
    else
    {
        printf("our string is not matching our cases");
    }
}