#include <stdio.h>
int main()
{
    // write Your code here

    int i;
    int arr[5] = {1, 2, 3, 9};
    int size = 4, Position = 3, Value = 0;
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