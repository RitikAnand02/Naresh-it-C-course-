/*
3)Contains only digits.
Create a function to check if a string contains only digits.
Sample Input
Input:

String: 12345

Input:

String: 45A7
Sample Output
Output:

The string contains only digits

Output:

The string contains non-digit characters.
*/

#include <stdio.h>
void digit(char[]);
int main()
{
    char s[100];
    printf("Enter a string ");
    gets(s);
    digit(s);
}
void digit(char s[])
{
    int i, j, flag = 1;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            ;
        else
        {
            flag = 0;
            break;
        }
    }
    printf("%s contain %s ", s, flag ? "only digits" : "non-digit");
}