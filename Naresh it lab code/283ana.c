/*
4)Anagrams
Implement a function to check if two strings are anagrams of each other.
Sample Input
Input:

First string: listen

Second string: silent


Input:

First string: hello

Second string: world
Sample Output
The strings are anagrams.

Output:

The strings are not anagrams.
*/

#include <stdio.h>
void anag(char[], char[]);
int main()
{
    char a[100], b[100];
    printf("Enter 1st string ");
    gets(a);
    printf("Enter 2nd string ");
    gets(b);
    anag(a, b);
}
void anag(char a[], char b[])
{
    int i, j, t;
    for (i = 0; a[i] != '\0'; i++)
    {
        for (j = i + 1; a[j] != '\0'; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            if (b[i] > b[j])
            {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != b[i])
        {
            printf(" Not a Anagram");
            return;
        }
    }
    printf("Anagram");
    return;
}