/*
prime Position
write a c Program to Display All Characters Present in the Prime Position of a String.
*/

#include <stdio.h>
int main()
{
    char s[100];
    int i, j;
    printf("Enter your strings ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        int c = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                c++;
        }
        if (c == 2)
            printf("%c", s[i]);
    }

    return 0;
}
