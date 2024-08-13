#include<stdio.h>
int show()
{
    int a=10;
    printf("a=%d\n",++a);
}
int main()
{
    show();
    show();
    show();
    
}