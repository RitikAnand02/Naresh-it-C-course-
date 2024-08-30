// Creating dynamic one -dimensional array...using calloc..

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, n, i;
    printf("Enter array size ");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    printf("Enter %d integers ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printf("Elements are ");
    for (i = 0; i < n; i++)
        printf("%4d", p[i]);
    free(p);
    p = NULL;
    return 0;
}