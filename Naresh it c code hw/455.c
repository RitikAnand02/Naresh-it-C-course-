// extern variable...

#include <stdio.h>
#include <conio.h>
void fun1()
{
    extern int a; /* declared */
    printf("a = %d\n", ++a);
}
int a = 10; /* defined */
void fun2()
{
    printf("a = %d\n", ++a);
}
void main()
{

    fun1();
    fun2();
    printf("a = %d", ++a);

    getch();
}