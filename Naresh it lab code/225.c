
#include <stdio.h>
int main()
{
    int arr[] = {1, 0, 2, 0, 4, 5, 0, 3, 0};
    int i, j = 0;
    for (i = 0; i < 9; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for (i = 0; i < 9; i++)
        printf("%d", arr[i]);
}