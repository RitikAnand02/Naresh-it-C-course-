// Fucntions with arugments , with return values...in even odd...

#include <stdio.h>
int evenodd(int f); // fun dec
int evenodd(int f)  // fun def , f is formal parameter
{
    return f % 2;
}
int main() // caller
{
    int a;
    printf("Enter a values ");
    scanf("%d", &a);
    if (evenodd(a)) // fun calling , a is actual parameter
        puts("odd");
    else
        puts("even");

    return 0;
}
