#include <stdio.h>
int main()
{
    // write Your code here
    int arr[] = {1, 2, 3, 4, 5, 6};
    int element = 3, j, size = 5;
    for (int i = 0, j = 0; i < size; i++)
    {
        if (arr[i] != element)
        {
            arr[j++] = arr[i];
        }
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("%4d", arr[i]);
    }
    return 0;
}