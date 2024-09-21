#include <stdio.h>
int add(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int result = add(5, 3);
    printf("%d", add(result, 2));
    return 0;
}