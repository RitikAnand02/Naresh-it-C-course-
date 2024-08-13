#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 4, y, z;
    y = --x;
    z = x--;
    printf("%d%d%d", x, y, z);
}