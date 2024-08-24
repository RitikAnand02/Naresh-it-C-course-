/*

Write a program in C to insert New value in the array (sorted array ) at its proper respective position as its accending order.



Test Data :

Input the size of array : 5


Input 5 elements in the array :

element - 0 : 1

element - 1 : 3

element - 2 : 7

element - 3 : 8

element - 4 : 10

Input the value to be inserted : 6


Expected Output :

The current list of the array :

1 3 7 8 10


After Insert the element the new list is :

1 3 6 7 8 10
*/

// #include <stdio.h>
// void main()
// {
//     int a[100], b[100], i, s1, s2, j;

//     printf("Enter 1st ,2nd array size 1 - 100 ");
//     scanf("%d%d", &s1, &s2);

//     printf("Enter %d integers for a array ", s1);
//     for (i = 0; i < s1; i++)
//         scanf("%d", &a[i]);
//     printf("Enter %d integers for a array ", s2);
//     for (i = 0; i < s2; i++)
//         scanf("%d", &b[i]);
//     for (i = s1, j = 0; j < s2; i++, j++)
//         a[i] = b[j];
//     for (i = 0; i < s1 + s2; i++)
//     {
//         for (j = i + 1; j < s1 + s2; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 int t = a[i];
//                 a[i] = a[j];
//                 a[j] = t;
//             }
//         }
//     }
//     printf("Elements are ");
//     for (i = 0; i < s1 + s2; i++)
//         printf("%4d", a[i]);
// }

#include <stdio.h>
int main()
{
    int size;
    printf("Enter size : ");
    scanf("%d", &size);

    int arr[size], i;
    printf("Enter %d elements : ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ele;
    printf("Enter insert element : ");
    scanf("%d", &ele);

    for (i = size; i >= 0; i--)
    {
        if (arr[i - 1] > ele)
        {
            arr[i] = arr[i - 1];
        }
        else
            break;
    }

    arr[i] = ele;

    for (int i = 0; i <= size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}