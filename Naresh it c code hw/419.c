// Fucntions with arugments , without return values...

#include <stdio.h>
int show(int, int);    // fun dec
int show(int x, int y) // fun def
{
    printf("x=%d , y=%d", x, y);
}
int main() // caller
{
    int a = 3;
    show(a++, a++);
    return 0;
}

// In functions calling arguments passed from right to left...