// Fucntions without arugments , without return values...

#include <stdio.h>
int welcome(); // fun dec
int main()     // caller
{
    welcome(); // fun calling, callie

    return 0;
}
int welcome() // fun def
{
    puts("Welcome to user defined functions ");
}