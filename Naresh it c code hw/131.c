// finding vowel/consonant usnig switch and predefined function...

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter an alphabet ");
    scanf("%c", &ch);
    ch = tolower(ch);
    if (isalpha(ch))
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
    else if (isdigit(ch))
        printf("It is a digit");
    else
    {
        printf("It is a special char");
    }
}