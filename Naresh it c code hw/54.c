// find age in years ,months,weeks,and days and find the age in total days..

#include <stdio.h>
int main()
{
    int total_days, y, m, w, d;
    printf("Enter age in years , months , week , days:");
    scanf("%d%d%d%d", &y, &m, &w, &d);
    total_days = y * 365 + m * 30 + w * 7 + d;
    printf("%d", total_days);
}