/*
Que 4: Write a C program to check if two strings are anagrams of each other or not using function.
------

-> create int main() function.
-> create bool isAnagram(char str1[],char str2[]) function. this function will take two string as input and will return true if both String are anagram otherwise will return false.
-> in main function read two Strings and pass it to isAnagram fuction by calling it and print the result.


Sample input:
             First string : listen
             Second string: silent

Sample output: The strings are anagrams.


Sample input:
             First string : hello
             Second string: world

Sample output: The strings are not anagrams.
*/

#include <stdio.h>
#include <stdbool.h>
bool anagram(char a[], char b[]);
int main()
{
    char a[100], b[100];
    printf("Enter 1st string ");
    gets(a);
    printf("Enter 2nd string ");
    gets(b);
    printf("The string are %s", anagram(a, b) ? "anagram" : "not anagram");
}
bool anagram(char a[], char b[])
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

            return false;
        }
    }

    return true;
}