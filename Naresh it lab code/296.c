#include <stdio.h>
int Arr(int arr[])
{

    return SumOfArray(arr);
}
int SumOfArray(int arr[])
{
    int sum = 0;
    for (int i = 1; i < 6; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = Arr(arr);
    printf("%d", n);
    return 0;
}