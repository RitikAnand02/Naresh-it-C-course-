//Write a C program to check whether a Alphabet is vowel or consonant using Switch Case.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        ch += 32;
    if (ch >= 'a' && ch <= 'z')
    {
        switch (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
        case 1:
            printf("vowel");
            break;
        default:
            printf("consonant");
        }
    }
    else
        printf("It is not alphabet");
}