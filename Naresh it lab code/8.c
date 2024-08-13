#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 10, b = 20, c = 10;
    int result = (a > b) || (b == c) && (c != a);
    printf("result = %d\n", result);
    return 0;
}