/*Write a C to take the value from the user as input the month number and print number of days in that month. Using switch statement.*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a month number");
    scanf("%d", &num);
    switch (num == 1 || num == 3 || num == 5 || num == 7 || num == 9 || num == 10 || num == 12)
    {
    case 1:
        printf("31 days");
        break;

    default:
        switch (num == 2)
        {
        case 1:
            printf("28/29 days");
            break;

        default:
            printf("30 days");
            break;
        }
       }
}