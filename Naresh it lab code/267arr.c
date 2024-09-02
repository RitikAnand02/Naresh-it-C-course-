/*
Que 3 : Write a program in C to store n elements in an array and print the elements using a pointer.
-------

Sample input :

Input the number of elements to store in the array :5

Input 5 number of elements in the array :

element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8

Sample output :
The elements you entered are :

element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, n, i;
    printf("Enter array size ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter %d integers ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printf("Elements are ");
    for (i = 0; i < n; i++)
        printf("%4d", p[i]);
    free(p);
    p = NULL;
    return 0;
}

// Method-2....

// #include <stdio.h>
// int main()
// {
//     int arr[100], n, i;
//     printf("enter the array size");
//     scanf("%d", &n);
//     printf("enter %d array elements", n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     int *ptr = &arr;
//     printf("elemets are");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d", *(ptr + i));
//     }
// }