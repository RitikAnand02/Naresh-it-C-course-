/*
Write a C program to find the element given by user is present in the

array or not

If the element is present in the array also programmer have to print

index position of that searching element.

If the user pass the element for searching in the array is not present

then also provide a appropriate message to the user that element is not

present inside the array.


Input 1:-

[1,2,3,4,5,6,7]


Enter the number you want to search : 5


Output :-


The element which you have sreached is present inside the 4rth index


Input 2:-

[1,2,3,4,3,6]


Enter the number you want to search : 9


Output :


The element which you have sreached is not present inside the Array.

*/

#include <stdio.h>
int main()
{
    int a[100], i, n, ele, f = 0;
    printf("Enter array size 1- 100 ");
    scanf("%d", &n);
    printf("Enter %d integers ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter elements to search ");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)
    {
        if (a[i] == ele)
        {
            printf("%d in %d index\n", ele, i, f = 1);
        }
    }
    if (f == 0)
    {
        printf("%d not found", ele);
    }

    return 0;
}