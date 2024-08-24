// Reading and printing a string at runtime....

#include <stdio.h>
int main()
{
    char s[100];
    puts("Enter a string ");
    gets(s);
    printf("U entered ");
    puts(s);
    return 0;
}