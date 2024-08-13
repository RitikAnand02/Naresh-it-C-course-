// find a character lowercase or not..

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    printf("lowercase");
    if(ch<'a' || ch>'z')
    printf("not lowercase");
}