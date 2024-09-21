#include <stdio.h>
int Arr(int arr[])
{

    return arr[0];
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = Arr(arr);
    printf("%d", n);

    return 0;
}