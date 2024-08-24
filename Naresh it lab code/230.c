#include <stdio.h>
int main()
{
    // write Your code here

    int i;
    int arr[5] = {1, 3, 5, 6, 7};
    int size = 5, Position = 2, Value = 7;
    for (i = size; i > Position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[Position] = Value;
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}