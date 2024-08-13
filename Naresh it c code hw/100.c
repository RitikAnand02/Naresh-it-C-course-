// find lower /upper /digit /space/special character...

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("lower case char");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("upper case char");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit char");
    }
    else if (ch == ' ')
    {
        printf("space");
    }
    else
    {
        printf("special char");
    }
}