#include <stdio.h>
int main()
{
    if (sizeof(1.1) == sizeof(50000))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}