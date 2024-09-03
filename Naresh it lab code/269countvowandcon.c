/*
Que 6 : Write a program in C to count the number of vowels and consonants in a string using a pointer.
-------

Sample input : string

Sample output :

Number of vowels : 1
Number of constant : 5
*/

#include <stdio.h>
int main()
{
    char s1[100], *p;
    int i, v = 0, c = 0;
    printf("Enter a value ");
    scanf("%s", s1);
    p = s1;
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    printf("Number of vowels=%d\n Number of constant=%d", v, c);

    return 0;
}