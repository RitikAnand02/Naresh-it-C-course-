// surface area of cyclinder

#include<stdio.h>
int main()
{
   float r,h,Area;
   scanf("%f%f",&r,&h);
   Area=(2*3.14*r*r)+(2*3.14*r*h);
   printf("radius:%f\n height:%f\n Area:%f",r,h,Area); 
}