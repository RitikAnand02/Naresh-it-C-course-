// switch case statement....

#include <stdio.h>
int main()
{
    int a;

    switch (a = printf("I\t"), printf("Am\t"))
    {
    case 1:
        printf("hindustani");
        break;
    case 2:
        printf("bharathiyudu");
        break;
    case 3:
        printf("indain ");
        break;
    default:
        printf("human being");
    }
    printf("a=%d", a);
}