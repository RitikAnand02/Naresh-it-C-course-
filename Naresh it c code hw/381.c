// String library function...

#include <stdio.h>
#include <string.h>
int main()
{
    printf("%d\n", stricmp("ab", "ab"));
    printf("%d\n", stricmp("ab", "AB"));
    printf("%d\n", stricmp("AB", "ab"));
    printf("%d\n", stricmp("abc", "ab"));
    printf("%d\n", stricmp("ab", "abc"));
    printf("%d\n", stricmp("ab", "1234"));

    return 0;
}