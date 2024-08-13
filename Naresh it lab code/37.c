/*Question:

How many cups of tea, cups of coffee, and biscuits would you like to order?



Instructions:



Each cup of tea costs ₹15, each cup of coffee costs ₹25, and each biscuit costs ₹10.

Please provide the quantity for each item you wish to order.

Example:

Customer: "I'd like to have 2 cups of tea, 1 cup of coffee, and 3 biscuits, please."



Bill Calculation:



2 cups of tea × ₹15 = ₹30

1 cup of coffee × ₹25 = ₹25

3 biscuits × ₹10 = ₹30

Total Bill:

₹30 (Tea) + ₹25 (Coffee) + ₹30 (Biscuits) = ₹85*/

#include<stdio.h>
int main()
{
  int tea,coffee,biscuit,total;
  scanf("%d%d%d%%d",&tea,&coffee,&biscuit);
  total=(tea*15)+(coffee*25)+(biscuit*10);
  printf("cup of tea:%d\n cup of coffee:%d\n biscuit:%d\n total:%d",tea,coffee,biscuit,total);
  

}
