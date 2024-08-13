/*Assign Grade
Write a C program to take input from the user about marks he got in 5 subjects.

Find out the average of the student and give grade as per the below Condition.

if the avg is greater than or equal to 90 then give grade A.

if the avg is greater than or equal to 80 then give grade B.

if the avg is greater than or equal to 70 then give grade C.

if the avg is greater than or equal to 50 then give grade D.

if the avg is less than 50 then give grade F.

Print the Grade and average of the Student.*/

#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    float avg;
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    avg=(n1+n2+n3+n4+n5)/5.0;
    if(avg>=90)
    {
        printf("%.2f is grade A",avg);
    }
    else if(avg>=80)
    {
        printf("%.2f is grade B",avg);
    }
     else if(avg>=70)
    {
        printf("%.2f is grade C",avg);
    }
     else if(avg>=50)
    {
        printf("%.2f is grade D",avg);
    }
    else
    {
        printf("%.2f is grade F",avg);
    }
}