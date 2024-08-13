// printing 1...n tables using nested loop()... step by step...

#include <stdio.h>
#include <conio.h>
int main()
{
    int t, n, i;
    printf("Enter no of tables ");
    scanf("%d", &n);
    for (t = 1; t <= n; t++)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%4d", t * i);
        }
        printf("\n");
    }
    getch();
}