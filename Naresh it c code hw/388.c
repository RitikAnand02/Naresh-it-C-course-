// Finding even/odd using pointer...

#include <stdio.h>
int main()
{
    int n, *p = &n;
    printf("Enter a no ");
    scanf("%d", &n);
    puts(n % 2 ? "Odd" : "Even");
    puts(*p % 2 ? "Odd" : "Even");
    return 0;
}