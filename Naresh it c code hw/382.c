// String library function...

#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "abcdef";
    printf("%s addr is %u\n", s, s);
    printf("c addr is %u\n", strstr(s, "c"));
    printf("C addr is %u\n", strstr(s, "C"));
    printf(" %s\n", strstr(s, "c"));
    printf(" %s\n", strstr(s, "C"));
    printf("c is %d char", strstr(s, "c") - s + 1);

    return 0;
}