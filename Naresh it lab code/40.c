// sp and cp calculator...

#include<stdio.h>
int main()
{
    int SP,CP,P,L,PP,LP;
    scanf("%d%d",&SP,&CP);
    P=SP-CP;
    L=CP-SP;
    PP=P*100/CP;
    LP=L*100/CP;
    printf("profit: %d\n loss: %d\n profit percentage: %d\n loss percentage: %d\n",P,L,PP,LP);
}