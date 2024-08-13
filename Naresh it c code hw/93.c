// Read a std id, name, marks in 6 subjects .find the total avg and pass /fail..

#include <stdio.h>
int main()
{
    int id, n1, n2, n3, n4, n5, n6, total;
    char name[10];
    float avg;
    printf("Enter stu id:");
    scanf("%d", &id);
    fflush(stdin);
    printf("Enter std name:");
    scanf("%s", &name);
    printf("Enter marks in 6 :");
    scanf("%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6);
    total = n1 + n2 + n3 + n4 + n5 + n6;
    avg = (n1 + n2 + n3 + n4 + n5 + n6) / 6.0;
    printf("Id=%d, Name=%s, total=%d, Avg=%.2f, result= ", id, name, total, avg);
    if (n1 >= 35 && n2 >= 35 && n3 >= 35 && n4 >= 35 && n5 >= 35 && n6 >= 35)
        printf("Passed");
    else
        printf("failed");
}