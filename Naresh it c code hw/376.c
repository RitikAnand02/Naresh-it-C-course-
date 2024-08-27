// Password Generation...

#include <stdio.h>
#include <conio.h>
int main()
{
    char user[20], pass[20], ch;
    int i = 0;
    printf("Enter user id ");
    scanf("%s", user);
    printf("Enter password ");
    while ((ch = getch()) != 13)
    {
        printf("*");
        pass[i] = ch;
        i++;
    }
    printf("\nShow password[y/n] ");
    fflush(stdin);
    scanf("%c", &ch);
    if (ch == 'y' || ch == 'Y')
        printf("Ur Password %s", pass);
    else
        printf("Password Protected");
    return 0;
}
