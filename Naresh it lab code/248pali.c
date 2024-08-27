/*
Palindrome or Not .
Write a c program to check the String is Palindrome  or Not .
*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    char s[100];
    int i, j;
    printf("Enter the strings ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
        ;
    for (j = 0; j < i / 2; j++)
    {
        if (tolower(s[j]) != tolower(s[i - j - 1]))
        {
            puts("Not a palidrome");
            getch();
            return 0;
        }
    }
    puts("Palidrome");
    getch();

    return 0;
}