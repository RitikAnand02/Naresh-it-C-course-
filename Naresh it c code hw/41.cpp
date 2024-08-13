#include<stdio.h>
int a=10;
int main()
{
    int a=20;
    printf("global=%d\n",::a);
    printf("local=%d",a);
}