// Fucntions with arugments , with return values...

#include <stdio.h>
int sum(int, int);    // fun dec
int sum(int x, int y) // fun def
{
    return x + y;
}
int main() // caller
{
    int a, b;
    printf("Enter a, b values ");
    scanf("%d %d", &a, &b);
    printf("sum=%d", sum(a, b)); // fun calling

    return 0;
}
