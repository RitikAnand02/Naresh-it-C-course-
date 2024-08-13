/*My Bakery Shop Invoice Generator
Description:

You are the owner of a bakery shop and need to create a program to generate invoices for your customers. The program should prompt the user to enter the item they want to buy, the quantity they wish to purchase, and the price of the item. Based on this input, the program should calculate the total cost and display an invoice with all the details, including the item, quantity, price per item, and total cost. At the end of the invoice, don't forget to thank the user for shopping at your bakery shop. Your task is to write a C program that accomplishes this.



Instructions:

----------------

-> Display a welcome message along with a separator line to greet the customer.

-> Prompt the customer to enter the quantity they wish to purchase and store it in an integer variable.

-> Get the price of the item from the customer and store it in a floating-point variable.

-> Calculate the total cost by multiplying the price with the quantity.

-> Display the invoice with all the details, including item, quantity, price per item, and total cost.

-> Make sure the total cost is displayed with two decimal places.

-> End the invoice with a thank-you message for shopping at your bakery shop.*/



#include<stdio.h>
int main()
{
  int Q;
  float P,total_cost;
  printf("welcome:");
  scanf("%d %f",&Q,&P);
  total_cost=P*Q;
  printf("\nQuantity:%d\n Price:%f\n total cost:%f",Q,P,total_cost);

}