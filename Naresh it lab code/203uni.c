/*
Print all unique elements of an array:

------------------------------------------

Input the number of elements to be stored in the array: 4

Input 4 elements in the array :

element - 0 : 3

element - 1 : 2

element - 2 : 2

element - 3 : 5

Expected Output :

The unique elements found in the array are:

3 5
*/

#include <stdio.h>
int main()
{
  int size;
  printf("Enter the size of array : ");
  scanf("%d", &size);
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    printf("Element - %d : ", i);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size; i++)
  {
    int count = 0;
    for (int j = 0; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if (count == 1)
    {
      printf("%d ", arr[i]);
    }
  }

  return 0;
}