// String library function...

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10] = "Hyderabad", s2[20], s3[20];
    strcpy(s2, s1);
    strncpy(s3, s1, 3);
    s3[3] = '\0';
    puts(s2);
    puts(s3);
    return 0;
}