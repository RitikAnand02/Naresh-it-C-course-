// Fucntions with arugments , without return values...

#include <stdio.h>
int sum(int, int); // fun dec

int main() // caller
{
    int a = 1, b = 2;
    sum(a, b); // fun calling , a & b are actual parameters
    return 0;
}
int sum(int x, int y) // fun def , x & y are formal parameters
{
    printf("sum=%d", x + y);
}
