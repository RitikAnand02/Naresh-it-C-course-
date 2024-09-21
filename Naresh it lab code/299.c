#include <stdio.h>
int demo(int i)
{

    printf("%d ", i++);
    return 0;
}
int main()
{
    for (int j = 0; j < 5; j++)
    {
        demo(j);
    }
}