// finding 1..n no sum and avg.. using  without goto label ...
#include <stdio.h>
int main()
{
    int n, s;
    printf("Enter n value ");
    scanf("%d", &n);
    s = n * (n + 1) / 2;
    printf("sum=%d , avg=%.2f", s, (float)s / n);
}