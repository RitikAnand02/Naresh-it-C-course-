// Finding n numbers sum using command line arguments:

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(int argc, char *argv[])
{
    int i, s = 0;

    for (i = 1; i < argc; i++)
        s = s + atoi(argv[i]);
    printf("Sum = %d", s);
    getch();
}