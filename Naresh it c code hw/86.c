// finding 2 digit or not....

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    if(n>=10 && n<=99|| n<=-10 && n>=-99)
    printf("2 digit");
    else
    printf("not 2 digit");
}