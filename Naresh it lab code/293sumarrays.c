/*
Que 3 : Write a C program to calculate the sum of all elements in an integer array using function.
------

-> create int main() function.
-> create int arraySum(char str[]) function. this function will take integer array as input in parameter and will return the total sum as result.
-> in main function read size of array , then based on size create new array and store the values.
-> call the arraySum function and print the sum which is return by arraySum function.


Sample input:
              Size of the array: 5
              Array elements: 10 20 30 40 50


Sample output: Sum of all elements in the array: 150
*/

#include <stdio.h>
int arraySum(char[]);
int main()
{
    char arr[100];
    printf("Enter array element : ");
    scanf("%[^\n]s", &arr);
    printf("Sum : %d", arraySum(arr));
    return 0;
}

int arraySum(char arr[])
{
    int sum = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            int j = i, num = 0;
            while (arr[j] != ' ' && arr[j] != '\0')
            {
                if (arr[j] >= '0' && arr[j] <= '9')
                {
                    num = num * 10 + (arr[j] - '0');
                }
                j++;
            }
            sum += num;
            i = j - 1;
        }
    }
    return sum;
}