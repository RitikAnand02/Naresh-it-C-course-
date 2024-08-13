/*Ticket Pricing For Theme Park
You are developing a ticket pricing system for a theme park. Write a program that takes the following inputs from a customer:



Age (integer)

Height in centimeters (float)

Whether the customer has a VIP pass (y or n)

The program should calculate the ticket price based on the following rules:



Children under 3 years old (inclusive) get in for free.

Children aged 4 to 12 (inclusive) pay Rs.20.

Adults aged 13 to 64 (inclusive) pay Rs.100.

Seniors aged 65 and above pay Rs.50.

However, there are some additional considerations based on height:



If the customer is above 180 cm in height, they pay an extra 50.

If the customer is between 120 cm (inclusive) and 180 cm (inclusive), no additional charge applies.

If the customer is below 120 cm, they receive a 50% discount on the base ticket price.

If the customer has a VIP pass, they get a 10% discount on the final ticket price.



Write a program that implements these pricing rules and provides the following output:



The customer's age, height, and VIP pass status.

The calculated base ticket price before any discounts or additional charges.

Any discounts or additional charges applied based on height.

The final ticket price after applying all discounts and charges.

Additionally, if the customer's age is below 0 or height is negative, the program should provide an error message.
*/

#include <stdio.h>

int main()
{
    int age;
    float height;
    char vip_pass;
    float base_price;
    float final_price = base_price;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 0 && age <= 3)
    {
        base_price = 0;
    }
    else if (age >= 4 && age <= 12)
    {
        base_price = 20;
    }
    else if (age >= 13 && age <= 64)
    {
        base_price = 100;
    }
    else if (age >= 65 && age <= 300)
    {
        base_price = 50;
    }
    else
    {
        printf("Error: Invalid age.\n");
        goto end;
    }

    printf("Enter height in cm: ");
    scanf("%f", &height);

    if (height > 180)
    {
        final_price = base_price + 50;
    }
    else if (height <= 180 && height >= 120)
    {
        final_price = base_price;
    }
    else if (height < 120 && height > 0)
    {
        final_price = base_price * 0.5;
    }
    else
    {
        printf("Error:Invaild height.\n");
        goto end;
    }

    printf("Do you have a VIP pass? (y/n): ");
    scanf(" %c", &vip_pass);
    if (vip_pass == 'y' || vip_pass == 'Y')
    {
        final_price = final_price - final_price * 0.1;
    }

    printf("\nCustomer Details:\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f cm\n", height);
    printf("VIP Pass: %c\n", vip_pass);
    printf("Base Ticket Price: Rs. %.2f\n", base_price);
    printf("Final Ticket Price: Rs. %.2f\n", final_price);
end:
    return 0;
}
