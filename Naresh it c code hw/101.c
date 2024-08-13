// find lower /upper /digit /space/special character...

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("lower case char");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("upper case char");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("Digit char");
    }
    else if (ch == 32)
    {
        printf("space");
    }
    else
    {
        printf("special char");
    }
}