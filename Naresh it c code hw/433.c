// Reverse of a no...

#include <stdio.h>
#include <conio.h>
#include <string.h>
void reverse(char st[10])
{
    strrev(st);
}
void main()
{
    char s[10] = "abcd";
    reverse(s);
    printf("String = %s", s);
    getch();
}