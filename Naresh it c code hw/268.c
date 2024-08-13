/*
  1
  1  2
  1  2  3
  1  2  3  4
  1  2  3  4  5
  1  2  3  4  5  6
  1  2  3  4  5  6  7
  1  2  3  4  5  6  7  8      
  1  2  3  4  5  6  7  8  9   
  1  2  3  4  5  6  7  8  9 10
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
                continue;
            printf("%3d", j);
        }
        printf("\n");
    }

    return 0;
}