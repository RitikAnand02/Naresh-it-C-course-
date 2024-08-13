// finding even /odd using switch...

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a no ");
    scanf("%d", &n);
    switch (n % 2)
    {
    case 0:
        printf("Even");
        break;

    default:
        printf("Odd");
        break;
    }
}
