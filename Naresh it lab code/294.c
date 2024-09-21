#include <stdio.h>
int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    int result = multiply(3, 5);
    result -= 5;
    printf("%d", multiply(result, 2));
    return 0;
}