#include <stdio.h>
#include <math.h>
int main()
{
    int n, m, c = 0, r, s = 0;
    printf("Enter a no ");
    scanf("%d", &n);
    m = n;
    while (m != 0)
    {
        c++;
        m = m / 10;
    }
    m = n;
    while (m)
    {
        r = m % 10;
        s += pow(r, c);
        m /= 10;
    }

    puts(n == s ? "arms" : "not");
}