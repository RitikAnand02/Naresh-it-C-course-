// Gmail Style Login using nested if()....

#include <stdio.h>

#include <string.h>
void main()
{
    char user[20], pass[20], cap[20];

    printf("Enter user name ");
    scanf("%s", user);
    if (strcmp(user, "Ritik") == 0)
    {
        printf("Enter pass word ");
        scanf("%s", pass);
        if (strcmp(pass, "Indian") == 0)
        {
            printf("Enter captcha ");
            scanf("%s", cap);
            if (strcmp(cap, "Hyd") == 0)
                puts("Welcome to Gmail");
            else
                puts("Invalid Captcha");
        }
        else
            puts("Invalid Pass word");
    }

    else
        puts("Invalid User name");
}