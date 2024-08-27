// String library function...

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20] = "NIT ", s2[20] = "NIT ", s3[20] = "Hyderabad";
    strcat(s1, s3);
    strncat(s2, s3, 3);
    puts(s1);
    puts(s2);
    return 0;
}