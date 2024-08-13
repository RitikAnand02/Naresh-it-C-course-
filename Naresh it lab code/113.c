/*Service Center
Write a C program for a service center by following given Rules and Guide lines.



* This service center only accepts 2 wheeler ,3 wheeler & 4 wheeler . If any other vehicle

came to you , you have to show a message that "this service center is not accepting

other than 2 wheeler, 3 wheeler and 4 wheeler".



* If the vehicle is 2 ,3 & 4 only then you have to ask the user what is the age of the vehicle.



* If the age your vehicle is above 8 months then only accept the service center

otherwise you have to show a message that "your vehicle servie will done after a while".



* If the vehicle age is greater than 8 months then show options to the user on the console.



* Options:



1)Enter 1 for tyre problem

2)Enter 2 for fuel problem

3)Enter 3 for engine issue

4)Enter 4 for general services



* If the user enter 1 as input so it is tyre problem statement so you have to show a message "how many tyres you are facing the issue ?", based on the issue on the no of tyres,

generate the bill.



* For example tyre cost Rs. 400 , if the user providing 3 tyre then the bill should be

generated as Rs. 1200 in below format.



Name of the owener

Name of the bike

Issue

Bill



* For fuels problem cost is Rs.1500

* For engine issue cost is Rs.5000

* For general servicing cost is Rs.1000



And generate the bill in the above format.*/

#include <stdio.h>
int main()
{
    char name[10], vehcle[20];
    int vt, va, tyre, fuel, engine, service, problem;
    float bill;
    printf("Enter your name:");
    scanf(" %s", name);
    printf("Enter your vehical name:");
    scanf(" %s", vehcle);
    printf("Enter your vehical type:");
    scanf(" %d", &vt);

    if (vt == 2 || vt == 3 || vt == 4)
    {
        printf("Enter your vehical age:");
        scanf("%d", &va);
        if (va > 8)
        {
            printf("Enter 1 for tyre problem\n");
            printf("Enter 2 for fuel problem\n");
            printf("Enter 3 for engine problem\n");
            printf("Enter 4 for service problem\n");
            scanf("%d", &problem);
            if (problem == 1)
            {
                printf("Enter How many tyres you are facing that issue: ");
                scanf("%d", &tyre);
                 printf("issue: tyre problem\n");

                bill = tyre * 400;
            }
            else if (problem == 2)
            {
                 printf("issue: fuel problem\n");

                bill = 1500;
            }
            else if (problem == 3)
            {
                 printf("issue: engine problem\n");

                bill = 5000;
            }
            else if (problem == 4)
            {
                 printf("issue: service problem\n");

                bill = 1000;
            }
            else
            {
                printf("Invalid Choice");
            }
        }
        else
        {
            printf("Your vehcle is under age");
            return 0;
        }
    }
    else
    {
        printf("This service center is not accepting those vehcles");
    }

    printf("Name: %s\nVehcle Name: %s\nVehcle type %d wheeler\n Vehcle Age: %d\n bill: %.2f", name, vehcle, vt, va, bill);
}