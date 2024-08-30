// Fucntions without arugments , without return values...

#include <stdio.h>
int sum(); // fun dec
int main() // caller
{
    sum(); // fun calling, callie

    return 0;
}
int sum() // fun def
{
    int a = 10, b = 20;
    printf("Sum=%d\n", a + b);
}