#include <stdio.h>
#include <stdio.h>
int main()
{

    int arr[] = {2, 4, 3, 4};

    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            if (arr[i] + arr[j] == 6)
            {
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}