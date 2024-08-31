/*
Count the number of alphabet
Write a C program to count the number of alphabet present in a given String
*/

#include <stdio.h>
int main()
{
    char s[20], c = 0;
    // scanf("%[^\n]",s);
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            c++;
        }
    }
    printf("%d", c);

    return 0;
}