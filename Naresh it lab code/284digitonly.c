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
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            puts("String contain digit only.");
            return;
        }
        else
        {
            puts("The string contains non-digit characters.");
            return;
        }
    }
}