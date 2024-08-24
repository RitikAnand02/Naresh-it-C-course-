// Reading and printing multiple strings...

#include <stdio.h>
int main()
{
    char s[10][100];
    int i, n;
    puts("Enter no of strings 1-10 ");
    scanf("%d", &n);
    printf("Enter %d strings\n", n);
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        gets(s[i]);
    }
    puts("-----------------------------------------------");
    for (i = 0; i < n; i++)
        puts(s[i]);
    return 0;
}