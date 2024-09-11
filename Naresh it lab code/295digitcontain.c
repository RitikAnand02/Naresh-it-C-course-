/*
Que 5 : Write a C program to check if a string contains only digits.
--------

-> create int main() function.
-> create bool isContainsDigits(char str[]) function. this function will take string as input and will return (true if String contains only digits otherwise return false).
-> in main function read String and pass it to isContainsDigits fuction by calling it and print the result.


Sample input  : 12345
Sample output : The string contains only digits.


Sample input : 45A7
Sample output : The string contains non-digit characters.
*/

#include <stdio.h>
#include <stdbool.h>
bool digit(char s[]);
int main()
{
    char s[100];
    printf("Enter a string ");
    gets(s);
    printf("%s contain %s ", s, digit(s) ? "only digits" : "non-digit characters");
}
bool digit(char s[])
{
    int i, j;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            ;
        else
        {

            return false;
        }
    }
    return true;
}