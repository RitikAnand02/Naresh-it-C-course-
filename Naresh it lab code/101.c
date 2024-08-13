/*Finding Square
Write a C program by taking one integer value from the user, if the given number's

last digit is smaller than 5 then print the square of that number else print that

same number.
*/

#include <stdio.h>
int main()
{
    int n, sq;
    scanf("%d", &n);
    sq = n * n;
    if (n % 10 < 5)
    {
        
        printf("%d", sq);
    }
    else
    {
        printf("%d", n);
    }
}