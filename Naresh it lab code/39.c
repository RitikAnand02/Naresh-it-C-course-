/*Write a C program that calculates and displays the selling price of the cycle based on the given information.



Your program should:



Declare and initialize variables for the following costs:



costPrice: The initial cost of the cycle (Rs. 1200)

repairCost: The cost of repairs (Rs. 250)

coloringCost: The cost of coloring (Rs. 350)

accessoriesCost: The cost of new accessories (Rs. 500)

desiredProfit: The desired profit (Rs. 1500)

Calculate the total cost by adding up all the costs.



Calculate the selling price by adding the total cost and the desired profit.*/

#include<stdio.h>
int main()
{
    int cp,rp,cc,ac,total,dp,sp;
    scanf("%d%d%d%d%d",&cp,&rp,&cc,&ac,&dp);
    total=cp+rp+cc+ac;
    sp=total+dp;
    printf("total:%d\n selling price:%d",total,sp);
}