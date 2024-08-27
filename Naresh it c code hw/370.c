// Finding palidrome string using double string...

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    char s1[100], s2[100];
    int i, j;
    printf("Enter the strings ");
    gets(s1);
    for (i = 0; s1[i] != '\0'; i++)
        ;
    for (s2[i--] = '\0', j = 0; i >= 0; j++, i--)
        s2[j] = s1[i];
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (tolower(s1[i]) != tolower(s2[i]))
        {
            puts("Not a palidrome");
            getch();
            return 0;
        }
    }
    puts("Palidrome");
    getch();

    return 0;
}
