// Read salesmen sales and find the gross salary using the following...

#include <stdio.h>
int main()
{
    float basic = 10000, da = basic * 64.5 / 100, sales, bonus, comm, gross;
    printf(" Enter sales amount: ");
    scanf("%f", &sales);
    if (sales >= 100000)
    {
        bonus = 10000;
        comm = sales * 10 / 100;
    }
    else
    {
        bonus = 2000;
        comm = sales * 5 / 100;
    }
    gross = basic + da + bonus + comm;
    printf("basic=%.2f\n da=%.2f\n bonus=%.2f\n comm=%.2f\n gross=%.2f", basic, da, bonus, comm, gross);
}