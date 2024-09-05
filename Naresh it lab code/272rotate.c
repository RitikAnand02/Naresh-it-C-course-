// /*
// Que 8 : Write a C program to rotate an array of integers to the right by a specified number of positions.
// ------  For example, if you have an array [1, 2, 3, 4, 5] and you want to rotate it to the right by 2 positions,
//         the result should be [4, 5, 1, 2, 3].(Develop it by using pointers & function).

// -> create int main() function.
// -> create void rotateRight(int *arr, int size, int positions) function.
// -> in main function print the output of array before and after rotation.

// Sample input :
// Enter the size of the array: 5
// Enter 5 elements: 1 2 3 4 5
// Enter the number of positions to rotate to the right: 2
// //1 2 3 4 5
// //5 1 2 3 4 --> pos = 1
// //4 5 1 2 3 --> pos = 2

// Sample output :
// Before rotation : 1, 2, 3, 4, 5
// After rotation : 4, 5, 1, 2, 3
// */

#include <stdio.h>
void userInput(int *, int);
void printArray(int *, int);
void rotateArray(int *, int, int);
void reverseArray(int *, int, int);
int main()
{
  int size;
  printf("Enter array size : ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter %d element in array!!!\n", size);
  userInput(arr, size);

  int pos;
  printf("Enter number of position to rotate : ");
  scanf("%d", &pos);

  printf("\nBefore reverse array : ");
  printArray(arr, size);

  rotateArray(arr, size, pos % size);
  printf("\nAfter reverse array : ");
  printArray(arr, size);
  return 0;
}

void userInput(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }
}

void printArray(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", *(arr + i));
  }
}

void reverseArray(int *arr, int start, int end)
{
  while (start < end)
  {
    int temp = *(arr + end);
    *(arr + end) = *(arr + start);
    *(arr + start) = temp;
    start++;
    end--;
  }
}

void rotateArray(int *arr, int size, int pos) // 1 2 3 4 5 //s=5, pos = 2
{
  reverseArray(arr, 0, size - 1);   // 5 4 3 2 1
  reverseArray(arr, 0, pos - 1);    // 4 5 3 2 1
  reverseArray(arr, pos, size - 1); // 4 5 1 2 3
}

// // method-2

// #include <stdio.h>

// // Function to rotate the array to the right by 'positions'
// void rotateRight(int *arr, int size, int positions)
// {
//   // Normalize positions if it's greater than the size of the array
//   positions = positions % size;

//   // Temporary array to hold the elements that will be rotated
//   int temp[positions];

//   // Store the last 'positions' elements in temp
//   for (int i = 0; i < positions; i++)
//   {
//     temp[i] = arr[size - positions + i];
//   }

//   // Shift the rest of the array to the right
//   for (int i = size - 1; i >= positions; i--)
//   {
//     arr[i] = arr[i - positions];
//   }

//   // Copy the elements from temp to the beginning of the array
//   for (int i = 0; i < positions; i++)
//   {
//     arr[i] = temp[i];
//   }
// }

// int main()
// {
//   int size, positions;

//   // Input the size of the array
//   printf("Enter the size of the array: ");
//   scanf("%d", &size);

//   int arr[size];

//   // Input the elements of the array
//   printf("Enter %d elements: ", size);
//   for (int i = 0; i < size; i++)
//   {
//     scanf("%d", &arr[i]);
//   }

//   // Input the number of positions to rotate the array
//   printf("Enter the number of positions to rotate to the right: ");
//   scanf("%d", &positions);

//   // Print the array before rotation
//   printf("Before rotation: ");
//   for (int i = 0; i < size; i++)
//   {
//     printf("%d ", arr[i]);
//   }
//   printf("\n");

//   // Rotate the array to the right
//   rotateRight(arr, size, positions);

//   // Print the array after rotation
//   printf("After rotation: ");
//   for (int i = 0; i < size; i++)
//   {
//     printf("%d ", arr[i]);
//   }
//   printf("\n");

//   return 0;
// }