/*
Remove Characters
Write a C Program to Remove Characters in Second String which are present in First String.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    int i, j, f;
    printf("Enter the 1st string ");
    scanf("%s", s1);
    printf("Enter the 2nd string ");
    scanf("%s", s2);
    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j])
            {
                for (int k = j; s2[k] != '\0'; k++)
                    s2[k] = s2[k + 1];
            }
    }
    printf("%s", s2);
}