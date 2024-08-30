// call by reference/ address...

#include <stdio.h>
int show(int *n) // fun def
{
    *n = 200;
}
int main() // caller
{
    int n = 100;
    printf("Before fun n=%d\n", n);
    show(&n); // fun calling
    printf("After fun n=%d", n);
}
