// ATM pin validation using nested if().....

#include <stdio.h>
int main()
{
    int pin, c = 0;
abc:
    printf("Enter pin no:");
    scanf("%d", &pin);
    if (pin == 1234)
    {
        printf("Welcome to SBI ATM\n");
    }
    else
    {
        c++;
    }
    if (c == 3)
    {

        printf("Your card is blocked for 24 Hours\n");
    }

    else
    {
        printf("invalid pin\n");
        goto abc;
    }

    return 0;
}