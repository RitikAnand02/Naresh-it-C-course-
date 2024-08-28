// Find string length using pointers only...

#include <stdio.h>
int main()
{
    char s[100], *p;
    printf("Enter a string ");
    gets(s);
    p = s; // p=&s[0];
    for (; *p; p++);
        printf("Length=%d", p - s);
    return 0;
}