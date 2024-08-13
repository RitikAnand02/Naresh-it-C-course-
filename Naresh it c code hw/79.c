// find absolute value of given no [alawys positive] method -1

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
    if(n<0)
    n=-n;
    printf("absolute value %d",n);
}