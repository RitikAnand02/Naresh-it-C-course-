/*
                           1
                         1   1
                       1   2   1        
                     1   3   3   1      
                   1   4   6   4   1    
                 1   5  10  10   5   1  
               1   6  15  20  15   6   1
             1   7  21  35  35  21   7   1    
           1   8  28  56  70  56  28   8   1  
         1   9  36  84 126 126  84  36   9   1
       1  10  45 120 210 252 210 120  45  10   1
     1  11  55 165 330 462 462 330 165  55  11   1

*/

#include <stdio.h>
int main()
{
    int n, r, c, s, a;
    printf("Enter no of rows ");
    scanf("%d", &n);
    for (r = 0; r < n; r++)
    {
        for (s = 1; s <= n - r; s++)
        {
            printf("  ");
        }
        for (c = 0; c <= r; c++)
        {
            if (c == 0 || c == r)
            {
                a = 1;
            }
            else
            {
                a = a * (r - c + 1) / c;
            }
            printf("%4d", a);
        }
        printf("\n");
    }
}