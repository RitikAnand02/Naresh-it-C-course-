#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 3;
    int b = 4;
    int result = (a += b) * (b -= 2);
    printf("result=%d", result);
    
}