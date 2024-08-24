// Magic or scan set charcters....

#include <stdio.h>
int main()
{
    char s[100];
    printf("Enter a string ");
    scanf("%[^@#$*]", s);
    printf("U entered %s", s);
    return 0;
}