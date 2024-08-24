
#include <stdio.h>

int main()
{
    // write Your code here

    int i;
    int arr[5] = {1, 6, 4, 9};
    int Position = 3, size = 5, Value = 4;
    // get the insert possition
    for (i = 0; i < size; i++)
    {
        if (Value < arr[i])
        {
            Position = i; // insert possition
            break;
        }
    }
    printf("%d", Position);
    return 0;
}