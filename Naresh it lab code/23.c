
/*5)Find the biggest

Write a  c Program to find the biggest number among three numbers. without using loops and control flow statement


Ex:- 1

input :- 10 20 30

output:- 30

Ex:- 2

input :- 100 20 340

output:- 340*/

#include <stdio.h>
void main()
{
    int n1, n2, n3;
    scanf("%d%d%d", &n1, &n2, &n3);
    n1 < n2 &&n2 < n3 &&printf("%d", n3);
    n1<n2 && n2> n3 &&printf("%d", n2);
    n1 > n2 &&printf("%d", n1);
}