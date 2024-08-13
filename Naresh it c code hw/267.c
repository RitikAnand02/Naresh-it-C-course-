/*
  1
  2  2
  3  3  3
  4  4  4  4
  5  5  5  5  5
  6  6  6  6  6  6
  7  7  7  7  7  7  7
  8  8  8  8  8  8  8  8      
  9  9  9  9  9  9  9  9  9   
 10 10 10 10 10 10 10 10 10 10
*/

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (j > i)
                break;
            printf("%3d", i);
        }
        printf("\n");
    }

    return 0;
}