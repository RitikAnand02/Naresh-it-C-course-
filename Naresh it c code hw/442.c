/*Finding string length using command line
argument*/
#include <stdio.h>
#include <conio.h>
void main(int argc, char *argv[])
{
    int i;
    for (i = 0; argv[1][i] != '\0'; i++)
    {
        printf("% c", argv[1][i]);
    }
    printf("\nLength = %d", i);
}