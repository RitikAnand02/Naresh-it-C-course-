// Finding string lemgth and reverse string using user defined program....

#include <stdio.h>
int main()
{
    char s[100];
    int i;
    printf("Enter the strings ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
        ;
    printf("Length=%d\n", i);
    printf("Reverse ");
    while (i)
        putchar(s[--i]);

    return 0;
}