// switch case statement....

#include <stdio.h>
int main()
{
    int a;

    switch (a = 10, 20)
    {
    case 10:
        printf("hi\n");
        break;
    case 20:
        printf("bye\n");
        break;
    default:
        printf("hello\n");
    }
    printf("a=%d", a);
}