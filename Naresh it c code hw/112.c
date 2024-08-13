// find +ve,-ve,zero using ternary in single satements....

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n value ");
    scanf("%d", &n);
    puts(n > 0 ? "+ve" : n < 0 ? "-ve"
                               : "zero");
}