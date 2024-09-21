#include <stdio.h>
int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 5, b = 10, c = 15;
    printf("%d", sum(a, sum(b, c)));
    return 0;
}