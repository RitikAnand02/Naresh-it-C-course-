// finding vowel/consonant usnig switch...

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
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowel");
            break;
        default:
            printf("consonant");
        }
    }
    else if (ch >= '0' && ch <= '9')
        printf("It is a digit");
    else
    {
        printf("It is a special char");
    }
}