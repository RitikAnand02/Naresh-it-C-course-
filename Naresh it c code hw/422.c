// Fucntions without arugments , with return values...

#include <stdio.h>
int show() // fun def
{
    return 1, 2, 3;
    // return 1;
    // return 2;
    // return 3;
}
int main() // caller
{
    printf("%d", show());
    return 0;
}

// In functions calling arguments passed from right to left...