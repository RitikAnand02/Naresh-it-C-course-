// switch case statement....

#include <stdio.h>
int main()
{
    int a = 0;

    switch (a = 20)
    {
        a = 30;
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