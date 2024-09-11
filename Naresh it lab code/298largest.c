/*
Que 3 : Write a C program that finds the largest element in an array of integers using function.
--------

-> create int main() function.
-> create int largestEle(int arr[]) function.
-> in main function read size of array and based on size create new array.
-> store size elements into array and call largestEle function by passing array as input.
-> largestEle function will perform the operation and will return largest element of array to the main function.
-> in the main function recive the result and print the output.

Sample input : n = 7
               arr[]={1,100,2,3,55,3,2}

Sample output : Largest element of array is : 100
*/

#include <stdio.h>
int largest(int n);
int main()
{
    int n;
    printf("Enter array size ");
    scanf("%d", &n);
    printf("Enter %d elements ", n);
    largest(n);
    return 0;
}

int largest(int n)
{
    int a[n], i, max = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        if (a[i] > max)
        {
            max = a[i];
        }
    printf("The largest element is : %d", max);
    return 0;
}