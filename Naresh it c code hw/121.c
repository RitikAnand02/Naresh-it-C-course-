// switch case statement....

#include <stdio.h>
int main()
{
    int a = 0;
abc:
    switch (a++)
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
    if (a <= 2)
        goto abc;
    printf("a=%d", a);
}