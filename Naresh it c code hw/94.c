#include <stdio.h>
int main()
{
    if (sizeof(32768) == sizeof(50000))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}