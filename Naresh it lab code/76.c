/*
write a c program to check the given character is Alphabet or Not A Alphabet using ternary operator*/

#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    (ch>=65 && ch<=90)||(ch>=97 && ch<=122)?printf("Alphabet"):printf("not a alphabet");

}