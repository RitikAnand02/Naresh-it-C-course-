#include <stdio.h>
int change(int a)
{
    printf("%d", ++a);
    return 0;
}
int main()
{
    int a = 4;
    {
        change(a);
    }
    printf("%d", a);
    return 0;
}