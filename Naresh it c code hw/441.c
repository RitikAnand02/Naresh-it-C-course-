// Finding factorial using command line arguments

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(int argc, char *argv[])
{
    long int f = 1;
    int n = atoi(argv[1]);
    while (n >= 1)
        f = f * n--;
    printf("Factorial = %ld", f);

    getch();
}