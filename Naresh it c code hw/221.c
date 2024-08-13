/*
  *
  *  *
  *  A  *
  *  B  C  *
  *  D  E  F  *
  *  G  H  I  J  *
  *  K  L  M  N  O  *
  *  P  Q  R  S  T  U  *      
  *  V  W  X  Y  Z  A  B  *   
*/

#include <stdio.h>
int main()
{
    int n, r, c;
    char ch = 'A';
    printf("Enter rows ");
    scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {

        for (c = 1; c <= r; c++)
        {
            if (c == 1 || c == r || r == n)
            {
                printf("%3c", '*');
            }
            else
            {
                printf("%3c", ch++);
            }
            if (ch > 'Z')
                ch = 'A';
        }
        printf("\n");
    }
}