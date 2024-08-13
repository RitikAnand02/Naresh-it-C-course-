
/*BookWorld
Write a C program for "BookWorld" that takes the total purchase amount as input and calculates the discounted amount using the ternary operator. The store provides three types of discounts to its customers:



If the total purchase amount is less than Rs. 1000, there is no discount.

If the total purchase amount is between Rs. 1000 and Rs. 5000 (inclusive), customers get a 5% discount on the total purchase amount.

If the total purchase amount is greater than Rs. 5000, customers get a 10% discount on the total purchase amount.



Input as:

---------



take input from user to enter the total purchase amount.

Calculate the discounted amount based on the given total purchase amount and the discount rates mentioned above using the ternary operator.*/

#include <stdio.h>
int main()
{
    float purchase_amount, disc, total_amount;
    scanf("%f", &purchase_amount);

    disc = purchase_amount < 1000 ? 0 : purchase_amount == 1000 ? purchase_amount * 0.05:purchase_amount * 0.1;
                                                                            
    total_amount = purchase_amount + disc;
    printf("%.2f", total_amount);
}
