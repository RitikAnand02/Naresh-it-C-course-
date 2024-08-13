#include <stdio.h>
int main()
{
    int a = 10;
    if (a > 5)
        if (a < 15)
            printf("a is between 5 and 15");
        else
            printf("a is 15 or more");
    else
        printf("a is 5 or less");
        return 0;
}
