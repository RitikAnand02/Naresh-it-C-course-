// Printing 1.. 10 numbers using recursion....

#include <stdio.h>
int i = 1;
int main() // caller
{
    printf("%d\n", i);
    i++;
    if (i <= 10)
        main(); // callier
    return 0;
}