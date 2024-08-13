// Internet Bankinf Style...

#include <stdio.h>

#include <string.h>
void main()
{
    char user[20], pass[20], cap[20];

    printf("Enter user name ");
    scanf("%s", user);
    printf("Enter password ");
    scanf("%s", pass);
    printf("Enter captcha ");
    scanf("%s", cap);
    if (strcmp(user, "Ritik") == 0 && strcmp(pass, "Indian") == 00 && strcmp(cap, "Hyd") == 0)
        printf("welcome to SBI net Banking");
    else
    {
        printf("Invalid user name/Password/Captcha");
    }
}