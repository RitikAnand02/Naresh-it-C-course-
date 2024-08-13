#include <stdio.h>
int main()
{
    printf("%c+%c=%c\n", 1, 2, 3);
    printf("%i+%i=%i\n", 1, 2, 3);
    printf("%id+%id=%id\n", 1, 2, 3);
    printf("%5d\n", 12);
    printf("%-5d\n", 12);
    printf("%1d\n", 27);
    printf("%.5d\n", 27);
    printf("%-.5d\n", 27);
    printf("%*d\n", 4, 27);
    printf("%$d\n", 4, 27);
    printf("%-*d\n", 4, 27);
}