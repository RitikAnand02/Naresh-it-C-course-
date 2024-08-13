// finding generic root of the given no... using nested for loop...

#include <stdio.h>
int main()
{
    long int n, s = 0;
    printf("Enter the no ");
    scanf("%ld", &n);
    while (n > 9 || n < -9)
    {
        for (s = 0; n != 0; n = n / 10)
        {
            s = s + n % 10;
        }
        n = s;
    }
    printf("genric root=%ld", n);
}