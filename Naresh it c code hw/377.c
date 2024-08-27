// String library function...

#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "AbcD";
    printf("Length=%d\n", strlen(s));
    printf("Reverse=%s\n", strrev(s));
    printf("Lower case=%s\n", strlwr(s));
    printf("Upper case=%s\n", strupr(s));
    return 0;
}