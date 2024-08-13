/*
  2  4  6  8 10
  2  4  6  8 10
  2  4  6  8 10
  2  4  6  8 10
  2  4  6  8 10
*/

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
            continue;
        for (j = 1; j <= 10; j++)
        {
            if (j % 2 != 0)
                continue;
            printf("%3d", j);
        }
        printf("\n");
    }

    return 0;
}