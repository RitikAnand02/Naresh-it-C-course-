/*2)Surface Area Of Cylinder

Write a C program to find the surface area of a cylinder.Take the height and radius as a input from the user by using scanf().



The surface area of a cylinder can be calculated using the formula:



A = 2PIr^2 + 2PIrh



Find the surface area and print the radius, height and also the surface area.


Enter the radius of the cylinder: 5
Enter the height of the cylinder: 10

Radius: 5.00
Height: 10.00
Surface Area: 471.24*/

#include <stdio.h>
#define pi 3.14
int main()
{
    float r, h, area;
    scanf("%f%f",&r,&h);
    area = 2 * pi * r * r + 2 * pi * r * h;
    printf("radius=%.2f\n height=%.2f\n surface area=%.2f", r, h, area);
}
