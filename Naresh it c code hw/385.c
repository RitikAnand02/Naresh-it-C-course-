// sorting string in ascending order

#include <stdio.h>
#include <string.h>
int main()
{
    char s[7][100], t[100];
    int i, j;
    printf("Enter 7 string\n ");
    for (i = 0; i < 7; i++)
        gets(s[i]);
    for (i = 0; i <= 5; i++)
    {
        for (j = i + 1; j <= 6; j++)
        {
            if (stricmp(s[i], s[j]) > 0)
            {
                strcpy(t, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], t);
            }
        }
    }
    puts("Names");
    puts("------------------------------------------------------");
    for (i = 0; i < 7; i++)
        puts(s[i]);

    return 0;
}