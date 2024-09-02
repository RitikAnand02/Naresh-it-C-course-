/*
Que 5 : Write a program in C to calculate the length of a string using a pointer.
-------

Sample input : NareshIt26

Sample output : The length of the given string NareshIt26 is : 10
*/

#include <stdio.h>
int main()
{
    char s[100], *p;
    printf("Enter a string ");
    gets(s);
    p = s; // p=&s[0];
    for (; *p; p++)
        ;
    printf("The length of the given string NareshIt26 is :%d", p - s);
    return 0;
}