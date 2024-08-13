// find lower to upper case using predefined function...

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf(" %c", &ch);
    if (islower(ch))
        ch = toupper(ch);
    else
        ch = tolower(ch);
    printf("char=%c", ch);
}