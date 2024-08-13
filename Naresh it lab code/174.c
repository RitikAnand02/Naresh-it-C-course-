#include <stdio.h>
void main()
{
    float num = 5.6;
    switch (num)
    {
    case 5:
        printf("5");
    case 6:
        printf("6");
    default:
        printf("0");
        break;
    }
    printf("%d", num);
}