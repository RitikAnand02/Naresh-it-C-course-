// Finding prime using recursion...Method-2...

#include <stdio.h>
int i = 1, c = 0;
int prime(int n) // fun def
{
    if (i <= n)
    {
        if (n % i == 0)
            c++;
        i++;
        prime(n);
    }
    if (c == 2)
        return 1;
    else
        return 0;
}
void main()
{
    int n;
    printf("Enter n values ");
    scanf("%d", &n);
    if (prime(n))
        puts("prime");
    else
        puts("Not a prime");
}