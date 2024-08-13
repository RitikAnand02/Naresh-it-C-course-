#include <stdio.h>
int main()
{
    int n = 390, a, b, c, d;
    a = n / 365;
    n = n % 365;

    b = n / 30;
    n = n % 30;
    c = n % 7;
   
    n = n % 7;
     d = n / 7;
    printf("year:%d,weeks:%d,months:%d,days:%d", a, d, b, c);
}