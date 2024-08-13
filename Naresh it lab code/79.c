//Write a c Program to find the Smallest number among three different number using ternary operator

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
   (a<b&&a<c) ?printf("a is smallest"): (b<a&&b<c )?printf("b is smallest"):printf("c is smallest");
      
}
 