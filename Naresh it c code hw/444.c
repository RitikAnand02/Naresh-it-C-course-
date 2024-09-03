// Recursion...

#include <stdio.h>
#include <conio.h>
int a = 1; /* global variable*/
void main()
{
    printf("Welcome to C\n");
    a++;
    if (a <= 3)
        main();
    getch();
}