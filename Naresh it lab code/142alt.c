/*Write a C program to find the alternate digit sum is same or not.



Example-1 as: 12345



1+3+5=9

2+4=6



Output as: Alternate digit sum is not same.



Example-2 as: 12122

1+1+2=4

2+2=4



Output as : Alternate digit sum is same.*/

#include <stdio.h>
int main()
{
    int n, s1 = 0, s2 = 0;
    printf("Enter a no ");
    scanf("%d", &n);
    while (n)
    {
        s1 += n % 10;
        n = n / 10;
        s2 += n % 10;
        n = n / 10;
    }
    if (s1 == s2)
    {
        printf("Alternate no");
    }
    else
    {
        printf("not a alternate no");
    }
}