// Call by address...

#include <stdio.h>
void show(int *x) // fun def , x is formal par
{
    *x = 200;
} // x deleted
void main()
{
    int x = 100; // local var
    printf("Before fun call x=%d\n", x);
    show(&x); // fun calling , x is acutal par
    printf("After fun call x=%d", x);
}