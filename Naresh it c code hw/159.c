// finding palindrome no...

#include <stdio.h>
int main()
{
    long m, n, rev = 0;
    int r;
    printf("Enter the no ");
    scanf("%ld", &n);
    m = n;
    while (n)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (m == rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not");
    }
}