// sorting string in search ...

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[5][100], s2[100];
    int i;
    printf("Enter 5 string\n ");
    for (i = 0; i < 5; i++)
        gets(s1[i]);
    printf("Enter search string ");
    gets(s2);
    puts("Names");
    puts("------------------------------------------------------");
    for (i = 0; i < 5; i++)
        if (strstr(s1[i], s2) != 0)
            puts(s1[i]);

    return 0;
}