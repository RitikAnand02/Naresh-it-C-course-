
/*3)Shopping Of TV

A shopkeeper buys a TV set for Rs. 3500 and sells it at a profit of 27%. Apart from this a VAT of 12.7% and Service Charge is 3.87% is charged.

Write a C program to Display total selling price, profit along with vat and service charge.

Cost Price: Rs. 3500
Selling Price: Rs. 4445.00
Profit: Rs. 945.00
VAT: Rs. 564.52
Service Charge: Rs. 171.02
Total Selling Price: Rs. 5180.54*/

#include <stdio.h>
void main()
{
    float cp = 3500, p, sp, vat, sc, ts;
    p = cp * 27 / 100;
    sp = cp + p;
    vat = sp * 12.7 / 100;
    sc = sp * 3.87 / 100;
    ts = sp + vat + sc;
    printf("%f\n%f\n%f\n%f\n%f\n%f\n",cp, p, sp, vat, sc, ts);
}