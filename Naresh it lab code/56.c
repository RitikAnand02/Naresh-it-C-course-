
/*3)Write a program that converts an amount of money from one currency to another. The user should input the amount in the source currency and the exchange rate. Calculate the equivalent amount in the target currency and print it.

formula : ( converted_amount = amount * exchange_rate )

input :
Enter the amount in the source currency: 4

Enter the exchange rate (source to target): 2

output :
Equivalent amount in the target currency: 8.00*/

#include <stdio.h>
int main()
{
    float amount, rate, total;
    scanf("%f%f", &amount, &rate);
    total = amount * rate;
    printf("equivalent amount in the target currency:%f", total);
}
