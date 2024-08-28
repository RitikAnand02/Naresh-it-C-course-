// Finding a normal variable value using pointer mechanism...

#include <stdio.h>
int main()
{
    int a = 100;
    printf("a=%d", *&a);
    return 0;
}