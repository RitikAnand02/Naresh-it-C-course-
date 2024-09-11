/*
Que 1 : Write a function to find the length of a given string (excluding the null character).
-------

-> create int main() function
-> create int getLength(char str[]) function. this function will return length of string
-> in main function read String and call the getLength fuction and print the output.

Sample input : Hello
Sample output: Length of the string: 5


Sample input : ThisIsALongString
Sample output: Length of the string: 17
*/

#include <stdio.h>
int getlength(char s[]);
int main()
{
    char s[100];
    printf("Enter a string ");
    gets(s);
    int length = getlength(s);
    printf("Length of the string: %d", length);
}
int getlength(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
        ;
    return i;
}