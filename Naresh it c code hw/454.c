// Static variable...

#include <stdio.h>
void show()
{
    static int a;
    printf("a=%d\n", ++a);
}
void main()
{
    show();
    show();
    show();
}