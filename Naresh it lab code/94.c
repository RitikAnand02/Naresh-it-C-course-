#include<stdio.h>
int main()
{
int k, num = 100;
k = (num > 50 ? (num <= 10 ? 100 : 200): 500);
printf("%d\n", num);
return 0;
}