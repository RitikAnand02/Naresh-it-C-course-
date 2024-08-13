// finding predefined function using while ...

#include <stdio.h>
#include <math.h>
int main()
{
    int b, p;
    long int s = 0;
    printf("Enter base , power values ");
    scanf("%d%d", &b, &p);
    while (p >= 1)
    {

        s = s + pow(b, p);
        p--;
    }
    printf("powers sum=%ld", s);
}