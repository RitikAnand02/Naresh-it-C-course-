// swapping of two integers in call by address...
#include <stdio.h>
#include <conio.h>
int swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int a , b;
    printf("Enter a,b values ");
    scanf("%d%d",&a,&b);
    printf("Before fun call a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After fun call a=%d, b=%d", a, b);
}