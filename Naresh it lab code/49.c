#include<stdio.h>
int main()
{
    int a = 3, b = 4;
int result = (a++) + (++b) - (a--);
printf("%d",result);
}