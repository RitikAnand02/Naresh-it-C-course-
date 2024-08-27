// Finding palindrome or not using predefined functions...

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    printf("Enter the string ");
    gets(s1);
    strcpy(s2, s1);
    strrev(s2);
    puts(stricmp(s1, s2) == 0 ? "Palindrome" : "Not a Palindrome");

    return 0;
}