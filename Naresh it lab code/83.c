// Vowel & Consonant
// Develop a C program that reads a character from the user and prints "Vowel" if the character is a vowel (a, e, i, o, u or their uppercase equivalents), and "Consonant" if it's a consonant.

#include <stdio.h>
#include <string.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("vowel");
    if (ch != 'a' && ch!= 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
        printf("consonant");
}