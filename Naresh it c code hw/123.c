// switch case statement....

#include <stdio.h>
int main()
{
    int a = 'a', b = 'b';

    switch (a++, b++)
    {
    case 'a' + 1:
        printf("hi\n");
        break;
    case 'b' + 1:
        printf("bye\n");
        break;
    default:
        printf("hello\n");
    }
    printf("a=%d", a);
}