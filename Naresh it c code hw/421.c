// Fucntions without arugments , with return values...

#include <stdio.h>
int sum(); // fun dec

int main() // caller
{
    int s;
    s = sum(); // fun calling , callie
    printf("Sum=%d\n", s);
    printf("Sum=%d", sum()); // fun calling
}
int sum() // fun def
{
    int a = 10, b = 20;
    return a + b;
}
