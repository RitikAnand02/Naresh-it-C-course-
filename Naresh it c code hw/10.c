#include <stdio.h>
#include <conio.h>
void main()
{
    int a=1;
    printf("%d,%d,%d,%d,%d\n", ++a,a++,a--,a++,++a);
    printf("%d,%d,%d,%d,%d\n", ++a,a*10,a=10,a++,++a);
    printf("%d,%d,%d\n", ++a,printf("Bye"),a/2);
    getch();
}