/*Write a C program to do a arithmetic operation on two numbers by using Switch Case. Take the operators(+,-,*,/,%) as cases and take the input from the user that what kind of operation user want to do on two number.



Input as: 

------------

Enter num1 :10

Enter num2 :20

Enter operation : *



O/P as :

---------

Multiplication is :200*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float a, b;
    char op;
start:

    puts("--------------------------------------------------------------");
    printf("Enter two numbers ");
    scanf("%f %f", &a, &b);
    puts("--------------------------------------------------------------");

    puts("\t\t\t M E N U");
    puts("--------------------------------------------------------------");
    puts("\t\t\t +. Add");
    puts("\t\t\t -. Sub");
    puts("\t\t\t *. Mul");
    puts("\t\t\t %. Mod");
    puts("\t\t\t /. Div");
    puts("\t\t\t E. Exit");
    puts("--------------------------------------------------------------");

    printf("\t\t\t Enter Ur option[ ]\b\b");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("\t\t\t\t\tSum=%.2f", a + b);
        break;
    case '-':
        printf("\t\t\t\t\tSub=%.2f", a - b);
        break;
    case '*':
        printf("\t\t\t\t\tMul=%.2f", a * b);
        break;
    case '%':
        printf("\t\t\t\t\tMod=%.2f", fmod(a, b));
        break;
    case '/':
        printf("\t\t\t\t\tDiv=%.2f", a / b);
        break;
    case 'e':
    case 'E':
        exit(0);
        break;
    default:
        puts("Invalid Option");
    }
    getch();
    goto start;
}