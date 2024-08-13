// switch case statement....

#include <stdio.h>
int main()
{
    int a = 0;

    switch (a++, a++)
    {
    case 1:
        printf("hi\n");
        break;
    case 2:
        printf("bye\n");
        break;
    default:
        printf("hello\n");
    }
    printf("a=%d", a);
}