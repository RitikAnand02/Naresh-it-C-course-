/*Write a C program to check whether the given number is negative , positive or Zero. Take the input from the user and print appropriate statement 

as per your input. Develop it by using control flow statement.*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        printf("positive");

    }
    else if(n==0)
    {
        printf("zero");
    }
    else
    {
        printf("negative");
    }
}