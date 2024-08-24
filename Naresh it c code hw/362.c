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
    for (i--; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}