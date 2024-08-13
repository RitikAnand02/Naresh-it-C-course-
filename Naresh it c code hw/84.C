// finding lowercase using if else...

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    printf("lowercase");
    else
    printf("not lowercase");
}