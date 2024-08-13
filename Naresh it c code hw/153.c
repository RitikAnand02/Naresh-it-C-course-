// without using loop / goto label:

#include <stdio.h>
int main()
{
    int long n;
    int c = 0;
    printf("Enter the value ");
    scanf("%ld", &n);
    c = printf("%ld", n);
    if (n < 0)
        c--;
    printf(" is a %d digits no", c);
}