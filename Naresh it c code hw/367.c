#include <stdio.h>
int main()
{
    char s[100];
    int i;
    printf("Enter the strings ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)

        puts(s + i);

    return 0;
}