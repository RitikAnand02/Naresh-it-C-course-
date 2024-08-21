// Meriging or arrays...

#include <stdio.h>
void main()
{
    int a[100], b[100], i, s1, s2, j;

    printf("Enter 1st ,2nd array size 1 - 100 ");
    scanf("%d%d", &s1, &s2);

    printf("Enter %d integers for a array ", s1);
    for (i = 0; i < s1; i++)
        scanf("%d", &a[i]);
    printf("Enter %d integers for a array ", s2);
    for (i = 0; i < s2; i++)
        scanf("%d", &b[i]);
    for (i = s1, j = 0; j < s2; i++, j++)
        a[i] = b[j];
    for (i = 0; i < s1 + s2; i++)
    {
        for (j = i + 1; j < s1 + s2; j++)
        {
            if (a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("Elements are ");
    for (i = 0; i < s1 + s2; i++)
        printf("%4d", a[i]);
}