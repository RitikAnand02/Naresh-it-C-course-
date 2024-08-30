// Fucntions without arugments , with return values... finds factorial...

#include <stdio.h>
int fact() // fun def
{
    int n;
    long f = 1;
    printf("Enter a no ");
    scanf("%d", &n);
    while (n > 1)
        f = f * n--;
    return f;
}
int main() // caller
{
    printf("factorial=%ld", fact());// fun calling
    return 0;
}

