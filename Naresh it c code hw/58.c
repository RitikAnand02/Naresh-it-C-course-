// read customer id , name quantity purchase and rate of item. find amount 35% and total. (flexible amount)...

#include <stdio.h>
int main()
{
    int id;
    char name[20];
    float qty, price, amount, disc, total;
    printf("Enter consumer id , name, quantity purchased and rate of item:");
    scanf("%d%s%f%f", &id, name, &qty, &price);
    amount = qty * price;
    printf("amount=%.2f\n", amount);
    printf("Enter discount:");
    scanf("%f", &disc);
    disc = amount * disc / 100;
    total = amount - disc;
    printf("discount=%.2f, total=%.2f", disc, total);
}