/*
Que 2 : Write a C program to check given String is palindrom or not using function.
-------

-> create int main() function.
-> create bool isPalindromString(char str[]) function. this function will check given string is palindrom or not and return (true if the string is a palindrome, false otherwise).
-> in main function read one string input and call isPalindromString function. and print the result.

Sample input : radar
Sample output : The string is a palindrome.

Sample input : hello
Sample output : The string is not a palindrome.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
bool palidrome(char s[]);
int main()
{
    char s[100];
    printf("Enter a string ");
    gets(s);

    printf("%s is %s string", s, palidrome(s) ? "a palindrome" : "not a palindrome");
}
bool palidrome(char s[])
{
    int i, j;
    for (i = 0; s[i] != '\0'; i++)
        ;
    for (j = 0; j < i / 2; j++)
    {
        if (tolower(s[j]) != tolower(s[i - j - 1]))
        {

            return false;
        }
    }

    return true;
}