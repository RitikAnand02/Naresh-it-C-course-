// IRCTC login using nested if()....

#include <stdio.h>

#include <string.h>
void main()
{
    char user[20], pass[20], cap[20];

    printf("Enter user name ");
    scanf("%s", user);
    printf("Enter pass word ");
    scanf("%s", pass);
    printf("Enter captcha ");
    scanf("%s", cap);
    if (strcmp(user, "Ritik") == 0)
    {
        if (strcmp(pass, "Indian") == 0)
        {
            if (strcmp(cap, "Hyd") == 0)
                puts("Welcome to IRCTC");
            else
                puts("Invalid Captcha");
        }
        else
            puts("Invalid Pass word");
    }

    else
        puts("Invalid User name");
}