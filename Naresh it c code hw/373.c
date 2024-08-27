// Finding no of words in given string...

#include <stdio.h>

int main()
{
    char s[100];
    int i, c = 1;
    printf("Enter the strings ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ' && s[i + 1] != ' ')
            c++;
    if (s[0] == ' ')
        c--;
    if (s[i - 1] == ' ')
        c--;
    if (s[0] == '\0')
        c--;
    printf("%d words", c);

    return 0;
}