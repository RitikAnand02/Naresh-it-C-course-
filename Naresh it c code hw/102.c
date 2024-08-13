// find lower /upper /digit /space/special character... by using predefined functions...

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a character:");
    ch = getchar();
    if (islower(ch))
    {
        printf("lower case char");
    }
    else if (isupper(ch))
    {
        printf("upper case char");
    }
    else if (isdigit(ch))
    {
        printf("Digit char");
    }
    else if (isspace(ch))
    {
        printf("space");
    }
    else
    {
        printf("special char");
    }
}