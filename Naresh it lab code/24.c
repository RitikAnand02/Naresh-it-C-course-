/*4) Lowercase to Uppercase

Write a C program to convert a lowercase character to uppercase take the lowercase character as a input from the user by using scanf().

Input as :

Enter a lowercase character: u

Expected output :

Uppercase equivalent: U*/

#include <stdio.h>
#include <string.h>
void main()
{
    char l = 'u', u;
    u = 'u' - 32;
    printf("%c", u);
}