// Write a C program to find all strong numbers between 1 to 500.

#include <stdio.h>
#include <math.h>
int main()
{

    for (int i = 1; i <= 500; i++)
    {
        int m, s = 0;
        m = i;
        while (m)
        {
            int r = m % 10;
            int f = 1;
            while (r)
            {
                f = f * r;
                r--;
            }
            s = s + f;
            m = m / 10;
        }
        if (s == i)
        {
            printf("%d\n", s);
        }
    }
}