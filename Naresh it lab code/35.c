// vol of sphere 

#include<stdio.h>
int main()
{
  float r,vol;
 // printf("Enter the radius of the sphere:");
  scanf("%f",&r);
  vol=(4*3.14*r*r*r)/3;
  printf("vol of the sphere is: %f cubic units",vol);
}