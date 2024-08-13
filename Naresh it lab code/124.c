/*Write a C program to accept id from user and display department.

Id: 11 to 15 is Software department

  16 to 20 is Developer department

  21 to 23 is Management department*/

#include <stdio.h>
int main()
{
    int id;
    printf("Enter your id ");
    scanf("%d", &id);
    switch (id)
    {
    case 11 ... 15:
    {
        printf("Software department\n");
        break;
    }
    case 16 ... 20:
    {
        printf("Developer department\n");
        break;
    }
    case 21 ... 23:
    {
        printf("Management department\n");
        break;
    }
    }
}