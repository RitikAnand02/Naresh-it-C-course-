/*
Descending Order
Write a c program to sort the String in Descending Order  ,after sorting print the result in string
format? 
*/

#include <stdio.h>
int main()
{
    char s[30];
    int i, j, t;
    printf("Enter a string ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i + 1; s[j] != '\0'; j++)
        {
            if (s[i] < s[j])
            {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }
    for (i = 0; s[i] != '\0'; i++)
        printf("%c", s[i]);
    return 0;
}