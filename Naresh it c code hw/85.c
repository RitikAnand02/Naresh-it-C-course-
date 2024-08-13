// finding alphabet or not using if else

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'|| ch>='A' && ch<='z')
    printf("Alpahabet");
    else
    printf("not alphabet");
}