#include <stdio.h>

int square(int n)
{
    return n * n;
}

int main()
{
    int x = 2, y = 3;
    printf("%d", square(x + y));
    return 0;
}