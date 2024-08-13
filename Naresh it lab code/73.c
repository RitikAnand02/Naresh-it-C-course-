// Write a C program that takes an integer as input and checks if it is a positive, negative, or zero. Display the appropriate message as output using the ternary operator.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter Input:");
    scanf("%d", &num);
    printf("%d is %s", num, (num == 0 ? "zero" : num > 0 ? "positive"
                                                         : "negative"));
}
