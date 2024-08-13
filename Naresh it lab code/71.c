/*BusTicketBooker
You are developing a program for an online bus ticket booking platform called "BusTicketBooker." The platform offers tickets for a fixed price of Rs. 300 per seat. However, there are discounts available for senior citizens. If a passenger's age is between 60 and 100 (inclusive), they will receive a 20% discount on the total booking cost.



Write a C program for "BusTicketBooker" that takes the number of tickets and the age of the passenger as inputs and calculates the total booking cost after applying any applicable discount using the ternary operator. The program should then display the bill with a suitable message, including the total cost and the discount amount (if applicable).



Your task is to implement the program logic inside the main function by using only Ternary Operator
Note :- This Booking is only for one person NOt For multiple user*/

#include <stdio.h>
int main()
{
    int n = 300, age, total_cost, qty, total_price;
    float disc;
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter qty of tickets:");
    scanf("%d", &qty);
    total_cost = qty * n;
    disc = age >= 60 && age <= 100 ? total_cost* 20 / 100 : 0;
    total_price = total_cost - disc;
    printf("total_cost=%d\n disc=%.2f\n total_price=%d", total_cost, disc, total_price);
}