//Write a c Program to check the given number is divisible by 5 and 11 or not divisible

#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    (num %5 && num%11)==0 ? printf("divisible"): printf(" not divisible");
}