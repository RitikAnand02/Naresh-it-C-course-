// print table using for loop...

#include <stdio.h>
int main()
{
    int t, i;
    printf("Enter table no ");
    scanf("%d", &t);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d=%d\n", t, i, t * i);
    }
}