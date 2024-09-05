/*
1)Palindrome.
Implement a function to check if a given string is a palindrome.
Sample Input
Input: radar


Input: hello
Sample Output
Output: The string is a palindrome.


Output: The string is not a palindrome.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void pali(char[]);
int main()
{
    char s[100];
    printf("Enter a string ");
    gets(s);
    pali(s);
}
void pali(char s[])
{
    int i, j;
    for (i = 0; s[i] != '\0'; i++)
        ;
    for (j = 0; j < i / 2; j++)
    {
        if (tolower(s[j]) != tolower(s[i - j - 1]))
        {
            puts("Not a palidrome");
            return;
        }
    }
    puts("Palidrome");
    return;
}