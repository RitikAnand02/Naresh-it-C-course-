// String library function...

#include <stdio.h>
#include <string.h>
int main()
{
    printf("%d\n", strcmp("ab", "ab"));
    printf("%d\n", strcmp("ab", "AB"));
    printf("%d\n", strcmp("AB", "ab"));
    printf("%d\n", strcmp("abc", "ab"));
    printf("%d\n", strcmp("ab", "abc"));
    printf("%d\n", strcmp("ab", "1234"));

    return 0;
}