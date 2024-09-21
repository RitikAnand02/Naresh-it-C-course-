#include <stdio.h>
int main()
{
    char s[25] = "The cocaine man";
    int i = 0;
    char ch;
    ch = s[++i];
    printf("%c", ch);
    ch = s[i++];
    printf("%c", ch);
    ch = s[i++];
    printf("%c", ch);
    ch = ++s[i];
    printf("%c", ch);
    return 0;
}