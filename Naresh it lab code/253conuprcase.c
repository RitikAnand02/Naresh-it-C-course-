/*
Convert UpperCase
Write a C program to convert all the character to upper case

from a given index to end index. If the given index is not available then print

Index is not available.
*/

#include <stdio.h>
int main()
{
    char s[100];
    int i, in, posi;
    printf("Enter the string ");
    gets(s);
    printf("enter the index ");
    scanf(" %d", &in);
    printf("enter the position ");
    scanf("%d", &posi);
    for (i = in; i < posi - 1; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;

    printf("%s", s);
}