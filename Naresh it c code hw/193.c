// finding magic no using nested for loop()... 1234 -> 1+0=1...

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
    if (n == 1)
    {
        printf("magic no");
    }
    else
    {
        printf("not a magic no");
    }
}