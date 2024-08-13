// finding the special character or not...

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    if (!(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'z' || ch >= '0' && ch <= '9'))
        printf("it not a special character");
    else
        printf("special character");
}