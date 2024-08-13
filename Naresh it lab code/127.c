

#include <stdio.h>
int main()
{
    float amt, bal = 2000;
    char ch;
    printf("Enter the transction code ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'd':
    case 'D':
        printf("Enter your amount ");
        scanf("%f", &amt);
        if (amt > 0)
        {
            bal += amt;
            printf("total balance=%.2f", bal);
        }
        break;
    case 'w':
    case 'W':

        printf("Enter your amount ");
        scanf("%f", &amt);
        if (amt > 0)
        {
            if (amt < 2000)
            {
                bal -= amt;
                printf("total balance=%.2f", bal);
            }
            else
            {
                printf("invalid amount");
            }
        }
        break;
    default:
        printf("invalid id");
    }
}