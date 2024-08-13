#include<stdio.h>

int main()
{
int a = 5;
if (a == 6); a = 0;
if (a == 5)
a++;
else a += 2;
printf("%d", a);
return 0;
}