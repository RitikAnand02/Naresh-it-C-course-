// ternary operator in nested form...

#include <stdio.h>
int main()
{
    printf("%d\n", 1 ? 2 ? 3 : 4 : 0);
    printf("%d\n", 1 ? 0 ? 2 : 3 : 4);
    printf("%d\n", 0 ? 1 ? 2 : 3 : 4);
}