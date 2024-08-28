// Finding factorial using pointer...

#include <stdio.h>
int main()
{
    int n, *p = &n, f = 1;
    printf("Enter n value ");
    scanf("%d", &n);
    while (n > 1)
    {
        f = f * n;
        n--;
    }
    printf("Factorial=%d", f);

    return 0;
}