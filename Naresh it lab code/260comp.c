/*
compresses a string
Create a program that compresses a string by replacing repeated characters with a count of the repetition (e.g., "aaabbbcc" becomes "a3b3c2").
*/

#include <stdio.h>
int main()
{
    char s[100];
    printf("Enter a string ");
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        int count = 1;
        for (int j = i + 1; s[j] != '\0'; j++)
        {
            if (s[i] == s[j])
            {
                s[j] = ' ';
                count++;
            }
        }

        if (count != 1 && s[i] != ' ')
        {
            printf("%c%d", s[i], count);
        }
    }
    return 0;
}