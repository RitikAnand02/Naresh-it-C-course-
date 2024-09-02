// Call by address... sqr of two no...

#include <stdio.h>
#include <conio.h>
void sqr(int *n)
{
    *n = *n * *n;
} /* n deleted after the function execution
   */
void main()
{
    int n = 10;
    printf("Before function call a = % d\n", n);
    sqr(&n); /* fun calling */
    printf("After function call a = % d", n);
    getch();
}