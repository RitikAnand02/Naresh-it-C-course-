/*Write a C program to take user Id as 1001 and Pasword as 1010. Ask the user to enter his id, if the id is valid

then ask the user to enter his password ,if the password is correct then print the name of the user, otherwise

the program will print incorrect Passoword and if the Id doesnot exits, the program will print Incorrect Id.

develop this program by using Switch case. */

#include <stdio.h>
#include <string.h>
int main()
{
    int id, pass;
    char name[20];
    printf("Enter your name ");
    scanf("%s", name);
    printf("Enter the id ");
    scanf("%d", &id);
    switch (id)
    {
    case 1001:
        printf("Enter your password ");
        scanf("%d", &pass);
        switch (pass)
        {
        case 1010:
              printf("%s",name);
            break;
        default:
            printf("invald password");
        }
        break;
    default:
        printf("invaild id");
        break;
    }
}