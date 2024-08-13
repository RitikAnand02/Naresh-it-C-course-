/*3)Convert Fahrenheit to Celsius

Write a C program to convert temperature from Fahrenheit to Celsius.

Input as :

Enter temperature in Fahrenheit: 100

Expected output:

100.00 Fahrenheit is 37.78 Celsius.

C= (F - 32) * (5.0 / 9.0)*/

#include <stdio.h>
void main()
{
    float f = 100, c;
    c = (f - 32) * (5.0 / 9.0);
    printf("Celsius=%f", c);
}
