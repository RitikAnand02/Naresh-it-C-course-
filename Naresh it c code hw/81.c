//printf 1 to 10 number without using loop...

#include<stdio.h>
int main()
{
    int i=1;
    abc:
    if(i<=10)
    {
        printf("%d\n",i);
        i++;
        goto abc;
    }
}