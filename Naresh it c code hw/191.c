// finding strong number using nested for loop()...

#include <stdio.h>
int main()
{
    int n, m, f, s = 0, r;
    printf("Enter the no ");
    scanf("%d", &n);
    for (m = n; m != 0; m = m / 10)
    {
        for (r = m % 10, f = 1; r > 1; r--)
        {
            f = f * r;
        }
        s = s + f;
    }
    printf(n == s ? "strong no" : "not a strong no");
}