#include <stdio.h>
int main()
{

    int arr[] = {2, 4, 3, 4};
    int n = 4;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        printf("(%d,%d)\n", arr[i], arr[j]);
    }
    return 0;
}