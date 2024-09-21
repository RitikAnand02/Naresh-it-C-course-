/*
Write a C program to print all twisted prime number from array.
Twisted Prime number means a number itself is prime number and the reverse of that number also prime number.
Examle : 2,5,7,11,23
-----> here 2,5,7,11 are twisted prime numbers but 23 is not twisted prime number.
Sample input : int arr[]={1,2,3,4,5,7,11,15,23};

Sample output : twisted prime numbers are : 2,3,5,7,11
*/

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to reverse a number
int reverseNumber(int num)
{
    int reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

// Function to find and print twisted primes in an array
void findTwistedPrimes(int arr[], int size)
{
    printf("Twisted prime numbers are: ");
    for (int i = 0; i < size; i++)
    {
        int num = arr[i];
        int reversed = reverseNumber(num);

        // Check if both the number and its reverse are prime
        if (isPrime(num) && isPrime(reversed))
        {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 11, 15, 23}; // Sample input array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find and print twisted prime numbers
    findTwistedPrimes(arr, size);

    return 0;
}
